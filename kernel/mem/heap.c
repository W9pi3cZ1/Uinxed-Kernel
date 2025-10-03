/*
 *
 *      heap.c
 *      Memory Heap
 *
 *      2025/2/16 By XIAOYI12
 *      Based on GPL-3.0 open source agreement
 *      Copyright © 2020 ViudiraTech, based on the GPLv3 agreement.
 *
 */

#include "heap.h"
#include "alloc.h"
#include "cpuid.h"
#include "frame.h"
#include "hhdm.h"
#include "limine.h"
#include "page.h"
#include "page_walker.h"
#include "stddef.h"
#include "stdint.h"
#include "stdlib.h"
#include "string.h"
#include "uinxed.h"

uint64_t heap_start = 0;
uint64_t heap_size  = 0;

/* Initialize the memory heap */
void init_heap(void)
{
    uint64_t extra_heap_frames    = frame_allocator.usable_frames / 8; // Use up to 1/8 of total memory for heap
    uint64_t min_heap_frame_count = MIN_HEAP_SIZE / PAGE_SIZE;
    uint64_t heap_frame_count     = min_heap_frame_count + extra_heap_frames;

    struct limine_kernel_address_response *krnl_addr_resp = kernel_address_request.response;

    const uintptr_t HEAP_OFFSET = 256 * 1024 * 1024 + krnl_addr_resp->physical_base;
    pointer_cast_t  heap_virt;
    heap_virt.val = ((uint64_t)1 << get_cpu_phys_bits()) + get_physical_memory_offset() + HEAP_OFFSET; // End of HHDM for detect free space
    heap_virt.val = ALIGN_UP(heap_virt.val, 4096);

    uint64_t heap_virt_start = heap_virt.val;
    heap_start               = heap_virt_start;
    heap_size                = heap_frame_count * PAGE_SIZE;

    // // These codes are disabled because it's slow...
    // // Fast check
    // uint64_t candidate   = heap_virt.val;
    // size_t   free_length = check_range_free_fast(get_kernel_pagedir(), candidate, heap_frame_count * PAGE_SIZE);

    // // Fallback to slow check if not enough space [may never happen:)]
    // if (free_length < heap_frame_count * PAGE_SIZE) {
    //     candidate = walk_page_tables_find_free(get_kernel_pagedir(), candidate, heap_frame_count * PAGE_SIZE);
    //     if (candidate == 0) { return; } // No space found
    // }

    heap_start = heap_virt.val;
    page_map_range_to_random(get_kernel_pagedir(), heap_start, heap_size, KERNEL_PTE_FLAGS);

    heap_init(heap_virt.ptr, heap_size);
}

/* Allocate an empty memory */
void *calloc(size_t nmemb, size_t size)
{
    void *p = malloc(nmemb * size);
    memset(p, 0, nmemb * size);
    return p;
}
