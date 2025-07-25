/*
 *
 *      empty_interrupt.c
 *      Empty interrupt implementation
 *
 *      2025/2/17 By MicroFish
 *      Based on GPL-3.0 open source agreement
 *      Copyright © 2020 ViudiraTech, based on the GPLv3 agreement.
 *
 */

#include "apic.h"
#include "common.h"
#include "idt.h"
#include "printk.h"

#define INTERRUPT_HANDLE(id)                                                            \
    __attribute__((interrupt)) static void empty_handler_##id(interrupt_frame_t *frame) \
    {                                                                                   \
        (void)frame;                                                                    \
        disable_intr();                                                                 \
        plogk("Interrupt empty %u\n", id);                                              \
        send_eoi();                                                                     \
        enable_intr();                                                                  \
    }

INTERRUPT_HANDLE(0)
INTERRUPT_HANDLE(1)
INTERRUPT_HANDLE(2)
INTERRUPT_HANDLE(3)
INTERRUPT_HANDLE(4)
INTERRUPT_HANDLE(5)
INTERRUPT_HANDLE(6)
INTERRUPT_HANDLE(7)
INTERRUPT_HANDLE(8)
INTERRUPT_HANDLE(9)
INTERRUPT_HANDLE(10)
INTERRUPT_HANDLE(11)
INTERRUPT_HANDLE(12)
INTERRUPT_HANDLE(13)
INTERRUPT_HANDLE(14)
INTERRUPT_HANDLE(15)
INTERRUPT_HANDLE(16)
INTERRUPT_HANDLE(17)
INTERRUPT_HANDLE(18)
INTERRUPT_HANDLE(19)
INTERRUPT_HANDLE(20)
INTERRUPT_HANDLE(21)
INTERRUPT_HANDLE(22)
INTERRUPT_HANDLE(23)
INTERRUPT_HANDLE(24)
INTERRUPT_HANDLE(25)
INTERRUPT_HANDLE(26)
INTERRUPT_HANDLE(27)
INTERRUPT_HANDLE(28)
INTERRUPT_HANDLE(29)
INTERRUPT_HANDLE(30)
INTERRUPT_HANDLE(31)
INTERRUPT_HANDLE(32)
INTERRUPT_HANDLE(33)
INTERRUPT_HANDLE(34)
INTERRUPT_HANDLE(35)
INTERRUPT_HANDLE(36)
INTERRUPT_HANDLE(37)
INTERRUPT_HANDLE(38)
INTERRUPT_HANDLE(39)
INTERRUPT_HANDLE(40)
INTERRUPT_HANDLE(41)
INTERRUPT_HANDLE(42)
INTERRUPT_HANDLE(43)
INTERRUPT_HANDLE(44)
INTERRUPT_HANDLE(45)
INTERRUPT_HANDLE(46)
INTERRUPT_HANDLE(47)
INTERRUPT_HANDLE(48)
INTERRUPT_HANDLE(49)
INTERRUPT_HANDLE(50)
INTERRUPT_HANDLE(51)
INTERRUPT_HANDLE(52)
INTERRUPT_HANDLE(53)
INTERRUPT_HANDLE(54)
INTERRUPT_HANDLE(55)
INTERRUPT_HANDLE(56)
INTERRUPT_HANDLE(57)
INTERRUPT_HANDLE(58)
INTERRUPT_HANDLE(59)
INTERRUPT_HANDLE(60)
INTERRUPT_HANDLE(61)
INTERRUPT_HANDLE(62)
INTERRUPT_HANDLE(63)
INTERRUPT_HANDLE(64)
INTERRUPT_HANDLE(65)
INTERRUPT_HANDLE(66)
INTERRUPT_HANDLE(67)
INTERRUPT_HANDLE(68)
INTERRUPT_HANDLE(69)
INTERRUPT_HANDLE(70)
INTERRUPT_HANDLE(71)
INTERRUPT_HANDLE(72)
INTERRUPT_HANDLE(73)
INTERRUPT_HANDLE(74)
INTERRUPT_HANDLE(75)
INTERRUPT_HANDLE(76)
INTERRUPT_HANDLE(77)
INTERRUPT_HANDLE(78)
INTERRUPT_HANDLE(79)
INTERRUPT_HANDLE(80)
INTERRUPT_HANDLE(81)
INTERRUPT_HANDLE(82)
INTERRUPT_HANDLE(83)
INTERRUPT_HANDLE(84)
INTERRUPT_HANDLE(85)
INTERRUPT_HANDLE(86)
INTERRUPT_HANDLE(87)
INTERRUPT_HANDLE(88)
INTERRUPT_HANDLE(89)
INTERRUPT_HANDLE(90)
INTERRUPT_HANDLE(91)
INTERRUPT_HANDLE(92)
INTERRUPT_HANDLE(93)
INTERRUPT_HANDLE(94)
INTERRUPT_HANDLE(95)
INTERRUPT_HANDLE(96)
INTERRUPT_HANDLE(97)
INTERRUPT_HANDLE(98)
INTERRUPT_HANDLE(99)
INTERRUPT_HANDLE(100)
INTERRUPT_HANDLE(101)
INTERRUPT_HANDLE(102)
INTERRUPT_HANDLE(103)
INTERRUPT_HANDLE(104)
INTERRUPT_HANDLE(105)
INTERRUPT_HANDLE(106)
INTERRUPT_HANDLE(107)
INTERRUPT_HANDLE(108)
INTERRUPT_HANDLE(109)
INTERRUPT_HANDLE(110)
INTERRUPT_HANDLE(111)
INTERRUPT_HANDLE(112)
INTERRUPT_HANDLE(113)
INTERRUPT_HANDLE(114)
INTERRUPT_HANDLE(115)
INTERRUPT_HANDLE(116)
INTERRUPT_HANDLE(117)
INTERRUPT_HANDLE(118)
INTERRUPT_HANDLE(119)
INTERRUPT_HANDLE(120)
INTERRUPT_HANDLE(121)
INTERRUPT_HANDLE(122)
INTERRUPT_HANDLE(123)
INTERRUPT_HANDLE(124)
INTERRUPT_HANDLE(125)
INTERRUPT_HANDLE(126)
INTERRUPT_HANDLE(127)
INTERRUPT_HANDLE(128)
INTERRUPT_HANDLE(129)
INTERRUPT_HANDLE(130)
INTERRUPT_HANDLE(131)
INTERRUPT_HANDLE(132)
INTERRUPT_HANDLE(133)
INTERRUPT_HANDLE(134)
INTERRUPT_HANDLE(135)
INTERRUPT_HANDLE(136)
INTERRUPT_HANDLE(137)
INTERRUPT_HANDLE(138)
INTERRUPT_HANDLE(139)
INTERRUPT_HANDLE(140)
INTERRUPT_HANDLE(141)
INTERRUPT_HANDLE(142)
INTERRUPT_HANDLE(143)
INTERRUPT_HANDLE(144)
INTERRUPT_HANDLE(145)
INTERRUPT_HANDLE(146)
INTERRUPT_HANDLE(147)
INTERRUPT_HANDLE(148)
INTERRUPT_HANDLE(149)
INTERRUPT_HANDLE(150)
INTERRUPT_HANDLE(151)
INTERRUPT_HANDLE(152)
INTERRUPT_HANDLE(153)
INTERRUPT_HANDLE(154)
INTERRUPT_HANDLE(155)
INTERRUPT_HANDLE(156)
INTERRUPT_HANDLE(157)
INTERRUPT_HANDLE(158)
INTERRUPT_HANDLE(159)
INTERRUPT_HANDLE(160)
INTERRUPT_HANDLE(161)
INTERRUPT_HANDLE(162)
INTERRUPT_HANDLE(163)
INTERRUPT_HANDLE(164)
INTERRUPT_HANDLE(165)
INTERRUPT_HANDLE(166)
INTERRUPT_HANDLE(167)
INTERRUPT_HANDLE(168)
INTERRUPT_HANDLE(169)
INTERRUPT_HANDLE(170)
INTERRUPT_HANDLE(171)
INTERRUPT_HANDLE(172)
INTERRUPT_HANDLE(173)
INTERRUPT_HANDLE(174)
INTERRUPT_HANDLE(175)
INTERRUPT_HANDLE(176)
INTERRUPT_HANDLE(177)
INTERRUPT_HANDLE(178)
INTERRUPT_HANDLE(179)
INTERRUPT_HANDLE(180)
INTERRUPT_HANDLE(181)
INTERRUPT_HANDLE(182)
INTERRUPT_HANDLE(183)
INTERRUPT_HANDLE(184)
INTERRUPT_HANDLE(185)
INTERRUPT_HANDLE(186)
INTERRUPT_HANDLE(187)
INTERRUPT_HANDLE(188)
INTERRUPT_HANDLE(189)
INTERRUPT_HANDLE(190)
INTERRUPT_HANDLE(191)
INTERRUPT_HANDLE(192)
INTERRUPT_HANDLE(193)
INTERRUPT_HANDLE(194)
INTERRUPT_HANDLE(195)
INTERRUPT_HANDLE(196)
INTERRUPT_HANDLE(197)
INTERRUPT_HANDLE(198)
INTERRUPT_HANDLE(199)
INTERRUPT_HANDLE(200)
INTERRUPT_HANDLE(201)
INTERRUPT_HANDLE(202)
INTERRUPT_HANDLE(203)
INTERRUPT_HANDLE(204)
INTERRUPT_HANDLE(205)
INTERRUPT_HANDLE(206)
INTERRUPT_HANDLE(207)
INTERRUPT_HANDLE(208)
INTERRUPT_HANDLE(209)
INTERRUPT_HANDLE(210)
INTERRUPT_HANDLE(211)
INTERRUPT_HANDLE(212)
INTERRUPT_HANDLE(213)
INTERRUPT_HANDLE(214)
INTERRUPT_HANDLE(215)
INTERRUPT_HANDLE(216)
INTERRUPT_HANDLE(217)
INTERRUPT_HANDLE(218)
INTERRUPT_HANDLE(219)
INTERRUPT_HANDLE(220)
INTERRUPT_HANDLE(221)
INTERRUPT_HANDLE(222)
INTERRUPT_HANDLE(223)
INTERRUPT_HANDLE(224)
INTERRUPT_HANDLE(225)
INTERRUPT_HANDLE(226)
INTERRUPT_HANDLE(227)
INTERRUPT_HANDLE(228)
INTERRUPT_HANDLE(229)
INTERRUPT_HANDLE(230)
INTERRUPT_HANDLE(231)
INTERRUPT_HANDLE(232)
INTERRUPT_HANDLE(233)
INTERRUPT_HANDLE(234)
INTERRUPT_HANDLE(235)
INTERRUPT_HANDLE(236)
INTERRUPT_HANDLE(237)
INTERRUPT_HANDLE(238)
INTERRUPT_HANDLE(239)
INTERRUPT_HANDLE(240)
INTERRUPT_HANDLE(241)
INTERRUPT_HANDLE(242)
INTERRUPT_HANDLE(243)
INTERRUPT_HANDLE(244)
INTERRUPT_HANDLE(245)
INTERRUPT_HANDLE(246)
INTERRUPT_HANDLE(247)
INTERRUPT_HANDLE(248)
INTERRUPT_HANDLE(249)
INTERRUPT_HANDLE(250)
INTERRUPT_HANDLE(251)
INTERRUPT_HANDLE(252)
INTERRUPT_HANDLE(253)
INTERRUPT_HANDLE(254)
INTERRUPT_HANDLE(255)

void (*empty_handle[256])(interrupt_frame_t *frame) = {
    empty_handler_0,   empty_handler_1,   empty_handler_2,   empty_handler_3,   empty_handler_4,   empty_handler_5,   empty_handler_6,
    empty_handler_7,   empty_handler_8,   empty_handler_9,   empty_handler_10,  empty_handler_11,  empty_handler_12,  empty_handler_13,
    empty_handler_14,  empty_handler_15,  empty_handler_16,  empty_handler_17,  empty_handler_18,  empty_handler_19,  empty_handler_20,
    empty_handler_21,  empty_handler_22,  empty_handler_23,  empty_handler_24,  empty_handler_25,  empty_handler_26,  empty_handler_27,
    empty_handler_28,  empty_handler_29,  empty_handler_30,  empty_handler_31,  empty_handler_32,  empty_handler_33,  empty_handler_34,
    empty_handler_35,  empty_handler_36,  empty_handler_37,  empty_handler_38,  empty_handler_39,  empty_handler_40,  empty_handler_41,
    empty_handler_42,  empty_handler_43,  empty_handler_44,  empty_handler_45,  empty_handler_46,  empty_handler_47,  empty_handler_48,
    empty_handler_49,  empty_handler_50,  empty_handler_51,  empty_handler_52,  empty_handler_53,  empty_handler_54,  empty_handler_55,
    empty_handler_56,  empty_handler_57,  empty_handler_58,  empty_handler_59,  empty_handler_60,  empty_handler_61,  empty_handler_62,
    empty_handler_63,  empty_handler_64,  empty_handler_65,  empty_handler_66,  empty_handler_67,  empty_handler_68,  empty_handler_69,
    empty_handler_70,  empty_handler_71,  empty_handler_72,  empty_handler_73,  empty_handler_74,  empty_handler_75,  empty_handler_76,
    empty_handler_77,  empty_handler_78,  empty_handler_79,  empty_handler_80,  empty_handler_81,  empty_handler_82,  empty_handler_83,
    empty_handler_84,  empty_handler_85,  empty_handler_86,  empty_handler_87,  empty_handler_88,  empty_handler_89,  empty_handler_90,
    empty_handler_91,  empty_handler_92,  empty_handler_93,  empty_handler_94,  empty_handler_95,  empty_handler_96,  empty_handler_97,
    empty_handler_98,  empty_handler_99,  empty_handler_100, empty_handler_101, empty_handler_102, empty_handler_103, empty_handler_104,
    empty_handler_105, empty_handler_106, empty_handler_107, empty_handler_108, empty_handler_109, empty_handler_110, empty_handler_111,
    empty_handler_112, empty_handler_113, empty_handler_114, empty_handler_115, empty_handler_116, empty_handler_117, empty_handler_118,
    empty_handler_119, empty_handler_120, empty_handler_121, empty_handler_122, empty_handler_123, empty_handler_124, empty_handler_125,
    empty_handler_126, empty_handler_127, empty_handler_128, empty_handler_129, empty_handler_130, empty_handler_131, empty_handler_132,
    empty_handler_133, empty_handler_134, empty_handler_135, empty_handler_136, empty_handler_137, empty_handler_138, empty_handler_139,
    empty_handler_140, empty_handler_141, empty_handler_142, empty_handler_143, empty_handler_144, empty_handler_145, empty_handler_146,
    empty_handler_147, empty_handler_148, empty_handler_149, empty_handler_150, empty_handler_151, empty_handler_152, empty_handler_153,
    empty_handler_154, empty_handler_155, empty_handler_156, empty_handler_157, empty_handler_158, empty_handler_159, empty_handler_160,
    empty_handler_161, empty_handler_162, empty_handler_163, empty_handler_164, empty_handler_165, empty_handler_166, empty_handler_167,
    empty_handler_168, empty_handler_169, empty_handler_170, empty_handler_171, empty_handler_172, empty_handler_173, empty_handler_174,
    empty_handler_175, empty_handler_176, empty_handler_177, empty_handler_178, empty_handler_179, empty_handler_180, empty_handler_181,
    empty_handler_182, empty_handler_183, empty_handler_184, empty_handler_185, empty_handler_186, empty_handler_187, empty_handler_188,
    empty_handler_189, empty_handler_190, empty_handler_191, empty_handler_192, empty_handler_193, empty_handler_194, empty_handler_195,
    empty_handler_196, empty_handler_197, empty_handler_198, empty_handler_199, empty_handler_200, empty_handler_201, empty_handler_202,
    empty_handler_203, empty_handler_204, empty_handler_205, empty_handler_206, empty_handler_207, empty_handler_208, empty_handler_209,
    empty_handler_210, empty_handler_211, empty_handler_212, empty_handler_213, empty_handler_214, empty_handler_215, empty_handler_216,
    empty_handler_217, empty_handler_218, empty_handler_219, empty_handler_220, empty_handler_221, empty_handler_222, empty_handler_223,
    empty_handler_224, empty_handler_225, empty_handler_226, empty_handler_227, empty_handler_228, empty_handler_229, empty_handler_230,
    empty_handler_231, empty_handler_232, empty_handler_233, empty_handler_234, empty_handler_235, empty_handler_236, empty_handler_237,
    empty_handler_238, empty_handler_239, empty_handler_240, empty_handler_241, empty_handler_242, empty_handler_243, empty_handler_244,
    empty_handler_245, empty_handler_246, empty_handler_247, empty_handler_248, empty_handler_249, empty_handler_250, empty_handler_251,
    empty_handler_252, empty_handler_253, empty_handler_254, empty_handler_255,
};
