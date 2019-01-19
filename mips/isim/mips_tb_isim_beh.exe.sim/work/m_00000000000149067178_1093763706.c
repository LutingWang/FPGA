/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/ThinkPad/Documents/ISE/FPGA/mips/mips/cpu/expectation/cp0.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {44U, 0U};
static unsigned int ng4[] = {45U, 0U};
static unsigned int ng5[] = {46U, 0U};
static unsigned int ng6[] = {47U, 0U};
static unsigned int ng7[] = {388174195U, 0U};
static unsigned int ng8[] = {388169733U, 0U};
static unsigned int ng9[] = {31U, 0U};
static unsigned int ng10[] = {5U, 0U};
static unsigned int ng11[] = {6U, 0U};
static unsigned int ng12[] = {1107296280U, 0U};
static unsigned int ng13[] = {7U, 0U};
static unsigned int ng14[] = {8U, 0U};
static unsigned int ng15[] = {9U, 0U};
static int ng16[] = {8, 0};
static int ng17[] = {4, 0};
static int ng18[] = {2, 0};



static void Cont_46_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2300);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 4224);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 4148);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_53_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 3520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2760);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    xsi_vlogtype_concat(t3, 32, 32, 2U, t6, 30, t2, 2);
    t7 = (t0 + 4260);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 8);
    xsi_driver_vfirst_trans(t7, 0, 31);
    t12 = (t0 + 4156);
    *((int *)t12) = 1;

LAB1:    return;
}

static void Cont_57_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t8[8];
    char t35[8];
    char t43[8];
    char t60[8];
    char t61[8];
    char t62[8];
    char t66[8];
    char t93[8];
    char t95[8];
    char t108[8];
    char t128[8];
    char t129[8];
    char t130[8];
    char t134[8];
    char t161[8];
    char t170[8];
    char t171[8];
    char t172[8];
    char t176[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t63;
    char *t64;
    char *t65;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t94;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t131;
    char *t132;
    char *t133;
    char *t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    char *t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t162;
    char *t163;
    char *t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    char *t173;
    char *t174;
    char *t175;
    char *t177;
    char *t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    char *t191;
    char *t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    char *t198;
    char *t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    char *t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    char *t208;
    char *t209;
    char *t210;
    char *t211;
    char *t212;
    char *t213;
    char *t214;

LAB0:    t1 = (t0 + 3664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 600U);
    t6 = *((char **)t2);
    t2 = ((char*)((ng2)));
    xsi_vlogtype_concat(t5, 6, 6, 2U, t2, 1, t6, 5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t9 = (t5 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t56 = *((unsigned int *)t4);
    t57 = (~(t56));
    t58 = *((unsigned int *)t31);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t60, 8);

LAB20:    t209 = (t0 + 4296);
    t210 = (t209 + 32U);
    t211 = *((char **)t210);
    t212 = (t211 + 40U);
    t213 = *((char **)t212);
    memcpy(t213, t3, 8);
    xsi_driver_vfirst_trans(t209, 0, 31);
    t214 = (t0 + 4164);
    *((int *)t214) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t36 = (t0 + 2392);
    t37 = (t36 + 36U);
    t38 = *((char **)t37);
    t39 = (t0 + 2300);
    t40 = (t39 + 36U);
    t41 = *((char **)t40);
    t42 = ((char*)((ng1)));
    t44 = (t0 + 2208);
    t45 = (t44 + 36U);
    t46 = *((char **)t45);
    memset(t43, 0, 8);
    t47 = (t43 + 4);
    t48 = (t46 + 4);
    t49 = *((unsigned int *)t46);
    t50 = (t49 >> 0);
    *((unsigned int *)t43) = t50;
    t51 = *((unsigned int *)t48);
    t52 = (t51 >> 0);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t53 & 63U);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t54 & 63U);
    t55 = ((char*)((ng1)));
    xsi_vlogtype_concat(t35, 32, 32, 5U, t55, 16, t43, 6, t42, 8, t41, 1, t38, 1);
    goto LAB13;

LAB14:    t63 = (t0 + 600U);
    t64 = *((char **)t63);
    t63 = ((char*)((ng2)));
    xsi_vlogtype_concat(t62, 6, 6, 2U, t63, 1, t64, 5);
    t65 = ((char*)((ng4)));
    memset(t66, 0, 8);
    t67 = (t62 + 4);
    t68 = (t65 + 4);
    t69 = *((unsigned int *)t62);
    t70 = *((unsigned int *)t65);
    t71 = (t69 ^ t70);
    t72 = *((unsigned int *)t67);
    t73 = *((unsigned int *)t68);
    t74 = (t72 ^ t73);
    t75 = (t71 | t74);
    t76 = *((unsigned int *)t67);
    t77 = *((unsigned int *)t68);
    t78 = (t76 | t77);
    t79 = (~(t78));
    t80 = (t75 & t79);
    if (t80 != 0)
        goto LAB24;

LAB21:    if (t78 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t66) = 1;

LAB24:    memset(t61, 0, 8);
    t82 = (t66 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t66);
    t86 = (t85 & t84);
    t87 = (t86 & 1U);
    if (t87 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t82) != 0)
        goto LAB27;

LAB28:    t89 = (t61 + 4);
    t90 = *((unsigned int *)t61);
    t91 = *((unsigned int *)t89);
    t92 = (t90 || t91);
    if (t92 > 0)
        goto LAB29;

LAB30:    t124 = *((unsigned int *)t61);
    t125 = (~(t124));
    t126 = *((unsigned int *)t89);
    t127 = (t125 || t126);
    if (t127 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t89) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t61) > 0)
        goto LAB35;

LAB36:    memcpy(t60, t128, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t60, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

LAB23:    t81 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t61) = 1;
    goto LAB28;

LAB27:    t88 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB28;

LAB29:    t94 = ((char*)((ng1)));
    t96 = (t0 + 2668);
    t97 = (t96 + 36U);
    t98 = *((char **)t97);
    memset(t95, 0, 8);
    t99 = (t95 + 4);
    t100 = (t98 + 4);
    t101 = *((unsigned int *)t98);
    t102 = (t101 >> 0);
    *((unsigned int *)t95) = t102;
    t103 = *((unsigned int *)t100);
    t104 = (t103 >> 0);
    *((unsigned int *)t99) = t104;
    t105 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t105 & 31U);
    t106 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t106 & 31U);
    t107 = ((char*)((ng1)));
    t109 = (t0 + 2576);
    t110 = (t109 + 36U);
    t111 = *((char **)t110);
    memset(t108, 0, 8);
    t112 = (t108 + 4);
    t113 = (t111 + 4);
    t114 = *((unsigned int *)t111);
    t115 = (t114 >> 0);
    *((unsigned int *)t108) = t115;
    t116 = *((unsigned int *)t113);
    t117 = (t116 >> 0);
    *((unsigned int *)t112) = t117;
    t118 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t118 & 63U);
    t119 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t119 & 63U);
    t120 = ((char*)((ng1)));
    t121 = (t0 + 2484);
    t122 = (t121 + 36U);
    t123 = *((char **)t122);
    xsi_vlogtype_concat(t93, 32, 32, 6U, t123, 1, t120, 15, t108, 6, t107, 3, t95, 5, t94, 2);
    goto LAB30;

LAB31:    t131 = (t0 + 600U);
    t132 = *((char **)t131);
    t131 = ((char*)((ng2)));
    xsi_vlogtype_concat(t130, 6, 6, 2U, t131, 1, t132, 5);
    t133 = ((char*)((ng5)));
    memset(t134, 0, 8);
    t135 = (t130 + 4);
    t136 = (t133 + 4);
    t137 = *((unsigned int *)t130);
    t138 = *((unsigned int *)t133);
    t139 = (t137 ^ t138);
    t140 = *((unsigned int *)t135);
    t141 = *((unsigned int *)t136);
    t142 = (t140 ^ t141);
    t143 = (t139 | t142);
    t144 = *((unsigned int *)t135);
    t145 = *((unsigned int *)t136);
    t146 = (t144 | t145);
    t147 = (~(t146));
    t148 = (t143 & t147);
    if (t148 != 0)
        goto LAB41;

LAB38:    if (t146 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t134) = 1;

LAB41:    memset(t129, 0, 8);
    t150 = (t134 + 4);
    t151 = *((unsigned int *)t150);
    t152 = (~(t151));
    t153 = *((unsigned int *)t134);
    t154 = (t153 & t152);
    t155 = (t154 & 1U);
    if (t155 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t150) != 0)
        goto LAB44;

LAB45:    t157 = (t129 + 4);
    t158 = *((unsigned int *)t129);
    t159 = *((unsigned int *)t157);
    t160 = (t158 || t159);
    if (t160 > 0)
        goto LAB46;

LAB47:    t166 = *((unsigned int *)t129);
    t167 = (~(t166));
    t168 = *((unsigned int *)t157);
    t169 = (t167 || t168);
    if (t169 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t157) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t129) > 0)
        goto LAB52;

LAB53:    memcpy(t128, t170, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t60, 32, t93, 32, t128, 32);
    goto LAB37;

LAB35:    memcpy(t60, t93, 8);
    goto LAB37;

LAB40:    t149 = (t134 + 4);
    *((unsigned int *)t134) = 1;
    *((unsigned int *)t149) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t129) = 1;
    goto LAB45;

LAB44:    t156 = (t129 + 4);
    *((unsigned int *)t129) = 1;
    *((unsigned int *)t156) = 1;
    goto LAB45;

LAB46:    t162 = ((char*)((ng1)));
    t163 = (t0 + 2760);
    t164 = (t163 + 36U);
    t165 = *((char **)t164);
    xsi_vlogtype_concat(t161, 32, 32, 2U, t165, 30, t162, 2);
    goto LAB47;

LAB48:    t173 = (t0 + 600U);
    t174 = *((char **)t173);
    t173 = ((char*)((ng2)));
    xsi_vlogtype_concat(t172, 6, 6, 2U, t173, 1, t174, 5);
    t175 = ((char*)((ng6)));
    memset(t176, 0, 8);
    t177 = (t172 + 4);
    t178 = (t175 + 4);
    t179 = *((unsigned int *)t172);
    t180 = *((unsigned int *)t175);
    t181 = (t179 ^ t180);
    t182 = *((unsigned int *)t177);
    t183 = *((unsigned int *)t178);
    t184 = (t182 ^ t183);
    t185 = (t181 | t184);
    t186 = *((unsigned int *)t177);
    t187 = *((unsigned int *)t178);
    t188 = (t186 | t187);
    t189 = (~(t188));
    t190 = (t185 & t189);
    if (t190 != 0)
        goto LAB58;

LAB55:    if (t188 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t176) = 1;

LAB58:    memset(t171, 0, 8);
    t192 = (t176 + 4);
    t193 = *((unsigned int *)t192);
    t194 = (~(t193));
    t195 = *((unsigned int *)t176);
    t196 = (t195 & t194);
    t197 = (t196 & 1U);
    if (t197 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t192) != 0)
        goto LAB61;

LAB62:    t199 = (t171 + 4);
    t200 = *((unsigned int *)t171);
    t201 = *((unsigned int *)t199);
    t202 = (t200 || t201);
    if (t202 > 0)
        goto LAB63;

LAB64:    t204 = *((unsigned int *)t171);
    t205 = (~(t204));
    t206 = *((unsigned int *)t199);
    t207 = (t205 || t206);
    if (t207 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t199) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t171) > 0)
        goto LAB69;

LAB70:    memcpy(t170, t208, 8);

LAB71:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t128, 32, t161, 32, t170, 32);
    goto LAB54;

LAB52:    memcpy(t128, t161, 8);
    goto LAB54;

LAB57:    t191 = (t176 + 4);
    *((unsigned int *)t176) = 1;
    *((unsigned int *)t191) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t171) = 1;
    goto LAB62;

LAB61:    t198 = (t171 + 4);
    *((unsigned int *)t171) = 1;
    *((unsigned int *)t198) = 1;
    goto LAB62;

LAB63:    t203 = ((char*)((ng7)));
    goto LAB64;

LAB65:    t208 = ((char*)((ng8)));
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t170, 32, t203, 32, t208, 32);
    goto LAB71;

LAB69:    memcpy(t170, t203, 8);
    goto LAB71;

}

static void Cont_65_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t9[8];
    char t48[8];
    char t63[8];
    char t71[8];
    char t103[8];
    char t115[8];
    char t136[8];
    char t144[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t62;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    int t95;
    int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    int t168;
    int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    char *t182;
    char *t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    char *t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    char *t193;
    char *t194;
    char *t195;
    char *t196;
    char *t197;
    unsigned int t198;
    unsigned int t199;
    char *t200;
    unsigned int t201;
    unsigned int t202;
    char *t203;
    unsigned int t204;
    unsigned int t205;
    char *t206;

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1060U);
    t6 = *((char **)t2);
    t2 = (t0 + 2208);
    t7 = (t2 + 36U);
    t8 = *((char **)t7);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 & t11);
    *((unsigned int *)t9) = t12;
    t13 = (t6 + 4);
    t14 = (t8 + 4);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t5, 0, 8);
    t41 = (t9 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t9);
    t45 = (t44 & t43);
    t46 = (t45 & 63U);
    if (t46 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t41) != 0)
        goto LAB9;

LAB10:    memset(t48, 0, 8);
    t49 = (t5 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (~(t50));
    t52 = *((unsigned int *)t5);
    t53 = (t52 & t51);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t49) != 0)
        goto LAB13;

LAB14:    t56 = (t48 + 4);
    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t56);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB15;

LAB16:    memcpy(t71, t48, 8);

LAB17:    memset(t103, 0, 8);
    t104 = (t71 + 4);
    t105 = *((unsigned int *)t104);
    t106 = (~(t105));
    t107 = *((unsigned int *)t71);
    t108 = (t107 & t106);
    t109 = (t108 & 1U);
    if (t109 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t104) != 0)
        goto LAB27;

LAB28:    t111 = (t103 + 4);
    t112 = *((unsigned int *)t103);
    t113 = *((unsigned int *)t111);
    t114 = (t112 || t113);
    if (t114 > 0)
        goto LAB29;

LAB30:    memcpy(t144, t103, 8);

LAB31:    memset(t4, 0, 8);
    t176 = (t144 + 4);
    t177 = *((unsigned int *)t176);
    t178 = (~(t177));
    t179 = *((unsigned int *)t144);
    t180 = (t179 & t178);
    t181 = (t180 & 1U);
    if (t181 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t176) != 0)
        goto LAB47;

LAB48:    t183 = (t4 + 4);
    t184 = *((unsigned int *)t4);
    t185 = *((unsigned int *)t183);
    t186 = (t184 || t185);
    if (t186 > 0)
        goto LAB49;

LAB50:    t188 = *((unsigned int *)t4);
    t189 = (~(t188));
    t190 = *((unsigned int *)t183);
    t191 = (t189 || t190);
    if (t191 > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t183) > 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t4) > 0)
        goto LAB55;

LAB56:    memcpy(t3, t192, 8);

LAB57:    t193 = (t0 + 4332);
    t194 = (t193 + 32U);
    t195 = *((char **)t194);
    t196 = (t195 + 40U);
    t197 = *((char **)t196);
    memset(t197, 0, 8);
    t198 = 1U;
    t199 = t198;
    t200 = (t3 + 4);
    t201 = *((unsigned int *)t3);
    t198 = (t198 & t201);
    t202 = *((unsigned int *)t200);
    t199 = (t199 & t202);
    t203 = (t197 + 4);
    t204 = *((unsigned int *)t197);
    *((unsigned int *)t197) = (t204 | t198);
    t205 = *((unsigned int *)t203);
    *((unsigned int *)t203) = (t205 | t199);
    xsi_driver_vfirst_trans(t193, 0, 0);
    t206 = (t0 + 4172);
    *((int *)t206) = 1;

LAB1:    return;
LAB4:    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t9) = (t21 | t22);
    t23 = (t6 + 4);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t6);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t8);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = (t26 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t35);
    t38 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t38 & t36);
    t39 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t39 & t35);
    t40 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t40 & t36);
    goto LAB6;

LAB7:    *((unsigned int *)t5) = 1;
    goto LAB10;

LAB9:    t47 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB10;

LAB11:    *((unsigned int *)t48) = 1;
    goto LAB14;

LAB13:    t55 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB14;

LAB15:    t60 = (t0 + 2392);
    t61 = (t60 + 36U);
    t62 = *((char **)t61);
    memset(t63, 0, 8);
    t64 = (t62 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t62);
    t68 = (t67 & t66);
    t69 = (t68 & 1U);
    if (t69 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t64) != 0)
        goto LAB20;

LAB21:    t72 = *((unsigned int *)t48);
    t73 = *((unsigned int *)t63);
    t74 = (t72 & t73);
    *((unsigned int *)t71) = t74;
    t75 = (t48 + 4);
    t76 = (t63 + 4);
    t77 = (t71 + 4);
    t78 = *((unsigned int *)t75);
    t79 = *((unsigned int *)t76);
    t80 = (t78 | t79);
    *((unsigned int *)t77) = t80;
    t81 = *((unsigned int *)t77);
    t82 = (t81 != 0);
    if (t82 == 1)
        goto LAB22;

LAB23:
LAB24:    goto LAB17;

LAB18:    *((unsigned int *)t63) = 1;
    goto LAB21;

LAB20:    t70 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB21;

LAB22:    t83 = *((unsigned int *)t71);
    t84 = *((unsigned int *)t77);
    *((unsigned int *)t71) = (t83 | t84);
    t85 = (t48 + 4);
    t86 = (t63 + 4);
    t87 = *((unsigned int *)t48);
    t88 = (~(t87));
    t89 = *((unsigned int *)t85);
    t90 = (~(t89));
    t91 = *((unsigned int *)t63);
    t92 = (~(t91));
    t93 = *((unsigned int *)t86);
    t94 = (~(t93));
    t95 = (t88 & t90);
    t96 = (t92 & t94);
    t97 = (~(t95));
    t98 = (~(t96));
    t99 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t99 & t97);
    t100 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t100 & t98);
    t101 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t101 & t97);
    t102 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t102 & t98);
    goto LAB24;

LAB25:    *((unsigned int *)t103) = 1;
    goto LAB28;

LAB27:    t110 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t110) = 1;
    goto LAB28;

LAB29:    t116 = (t0 + 2300);
    t117 = (t116 + 36U);
    t118 = *((char **)t117);
    memset(t115, 0, 8);
    t119 = (t118 + 4);
    t120 = *((unsigned int *)t119);
    t121 = (~(t120));
    t122 = *((unsigned int *)t118);
    t123 = (t122 & t121);
    t124 = (t123 & 1U);
    if (t124 != 0)
        goto LAB35;

LAB33:    if (*((unsigned int *)t119) == 0)
        goto LAB32;

LAB34:    t125 = (t115 + 4);
    *((unsigned int *)t115) = 1;
    *((unsigned int *)t125) = 1;

LAB35:    t126 = (t115 + 4);
    t127 = (t118 + 4);
    t128 = *((unsigned int *)t118);
    t129 = (~(t128));
    *((unsigned int *)t115) = t129;
    *((unsigned int *)t126) = 0;
    if (*((unsigned int *)t127) != 0)
        goto LAB37;

LAB36:    t134 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t134 & 1U);
    t135 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t135 & 1U);
    memset(t136, 0, 8);
    t137 = (t115 + 4);
    t138 = *((unsigned int *)t137);
    t139 = (~(t138));
    t140 = *((unsigned int *)t115);
    t141 = (t140 & t139);
    t142 = (t141 & 1U);
    if (t142 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t137) != 0)
        goto LAB40;

LAB41:    t145 = *((unsigned int *)t103);
    t146 = *((unsigned int *)t136);
    t147 = (t145 & t146);
    *((unsigned int *)t144) = t147;
    t148 = (t103 + 4);
    t149 = (t136 + 4);
    t150 = (t144 + 4);
    t151 = *((unsigned int *)t148);
    t152 = *((unsigned int *)t149);
    t153 = (t151 | t152);
    *((unsigned int *)t150) = t153;
    t154 = *((unsigned int *)t150);
    t155 = (t154 != 0);
    if (t155 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB31;

LAB32:    *((unsigned int *)t115) = 1;
    goto LAB35;

LAB37:    t130 = *((unsigned int *)t115);
    t131 = *((unsigned int *)t127);
    *((unsigned int *)t115) = (t130 | t131);
    t132 = *((unsigned int *)t126);
    t133 = *((unsigned int *)t127);
    *((unsigned int *)t126) = (t132 | t133);
    goto LAB36;

LAB38:    *((unsigned int *)t136) = 1;
    goto LAB41;

LAB40:    t143 = (t136 + 4);
    *((unsigned int *)t136) = 1;
    *((unsigned int *)t143) = 1;
    goto LAB41;

LAB42:    t156 = *((unsigned int *)t144);
    t157 = *((unsigned int *)t150);
    *((unsigned int *)t144) = (t156 | t157);
    t158 = (t103 + 4);
    t159 = (t136 + 4);
    t160 = *((unsigned int *)t103);
    t161 = (~(t160));
    t162 = *((unsigned int *)t158);
    t163 = (~(t162));
    t164 = *((unsigned int *)t136);
    t165 = (~(t164));
    t166 = *((unsigned int *)t159);
    t167 = (~(t166));
    t168 = (t161 & t163);
    t169 = (t165 & t167);
    t170 = (~(t168));
    t171 = (~(t169));
    t172 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t172 & t170);
    t173 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t173 & t171);
    t174 = *((unsigned int *)t144);
    *((unsigned int *)t144) = (t174 & t170);
    t175 = *((unsigned int *)t144);
    *((unsigned int *)t144) = (t175 & t171);
    goto LAB44;

LAB45:    *((unsigned int *)t4) = 1;
    goto LAB48;

LAB47:    t182 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t182) = 1;
    goto LAB48;

LAB49:    t187 = ((char*)((ng2)));
    goto LAB50;

LAB51:    t192 = ((char*)((ng1)));
    goto LAB52;

LAB53:    xsi_vlog_unsigned_bit_combine(t3, 1, t187, 1, t192, 1);
    goto LAB57;

LAB55:    memcpy(t3, t187, 8);
    goto LAB57;

}

static void Always_69_4(char *t0)
{
    char t13[8];
    char t31[8];
    char t32[8];
    char t61[8];
    char t62[8];
    char t63[8];
    char t69[8];
    char t85[8];
    char t93[8];
    char t123[8];
    char t131[8];
    char t159[8];
    char t174[8];
    char t190[8];
    char t198[8];
    char t226[8];
    char t241[8];
    char t257[8];
    char t265[8];
    char t293[8];
    char t308[8];
    char t324[8];
    char t332[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    char *t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    char *t173;
    char *t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    char *t189;
    char *t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    char *t197;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    char *t202;
    char *t203;
    char *t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    char *t212;
    char *t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    char *t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    char *t233;
    char *t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    char *t239;
    char *t240;
    char *t242;
    char *t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    char *t256;
    char *t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    char *t264;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    char *t269;
    char *t270;
    char *t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    char *t279;
    char *t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    int t284;
    unsigned int t285;
    unsigned int t286;
    unsigned int t287;
    int t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    unsigned int t292;
    char *t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    unsigned int t298;
    unsigned int t299;
    char *t300;
    char *t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    char *t306;
    char *t307;
    char *t309;
    char *t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    unsigned int t316;
    unsigned int t317;
    unsigned int t318;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    unsigned int t322;
    char *t323;
    char *t325;
    unsigned int t326;
    unsigned int t327;
    unsigned int t328;
    unsigned int t329;
    unsigned int t330;
    char *t331;
    unsigned int t333;
    unsigned int t334;
    unsigned int t335;
    char *t336;
    char *t337;
    char *t338;
    unsigned int t339;
    unsigned int t340;
    unsigned int t341;
    unsigned int t342;
    unsigned int t343;
    unsigned int t344;
    unsigned int t345;
    char *t346;
    char *t347;
    unsigned int t348;
    unsigned int t349;
    unsigned int t350;
    int t351;
    unsigned int t352;
    unsigned int t353;
    unsigned int t354;
    int t355;
    unsigned int t356;
    unsigned int t357;
    unsigned int t358;
    unsigned int t359;
    char *t360;
    unsigned int t361;
    unsigned int t362;
    unsigned int t363;
    unsigned int t364;
    unsigned int t365;
    char *t366;
    char *t367;
    unsigned int t368;
    unsigned int t369;
    unsigned int t370;
    char *t371;
    unsigned int t372;
    unsigned int t373;
    unsigned int t374;
    unsigned int t375;
    char *t376;
    char *t377;

LAB0:    t1 = (t0 + 3952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 4180);
    *((int *)t2) = 1;
    t3 = (t0 + 3980);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(69, ng0);

LAB5:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 1520U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(78, ng0);

LAB10:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2300);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t5) == 0)
        goto LAB11;

LAB13:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB14:    t12 = (t13 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (~(t15));
    *((unsigned int *)t13) = t16;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB16;

LAB15:    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 1U);
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t22 & 1U);
    t23 = (t13 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t2) != 0)
        goto LAB22;

LAB23:    t5 = (t13 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (!(t15));
    t17 = *((unsigned int *)t5);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB24;

LAB25:    memcpy(t32, t13, 8);

LAB26:    t53 = (t32 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t32);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1336U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB158;

LAB159:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB162;

LAB163:
LAB164:
LAB160:
LAB36:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(70, ng0);

LAB9:    xsi_set_current_line(71, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2208);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 6);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2484);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2668);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 30);
    goto LAB8;

LAB11:    *((unsigned int *)t13) = 1;
    goto LAB14;

LAB16:    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t17 | t18);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t19 | t20);
    goto LAB15;

LAB17:    xsi_set_current_line(80, ng0);
    t29 = (t0 + 1060U);
    t30 = *((char **)t29);
    t29 = (t0 + 2576);
    xsi_vlogvar_assign_value(t29, t30, 0, 0, 6);
    goto LAB19;

LAB20:    *((unsigned int *)t13) = 1;
    goto LAB23;

LAB22:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB23;

LAB24:    t11 = (t0 + 1612U);
    t12 = *((char **)t11);
    memset(t31, 0, 8);
    t11 = (t12 + 4);
    t19 = *((unsigned int *)t11);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t21 & t20);
    t24 = (t22 & 1U);
    if (t24 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t11) != 0)
        goto LAB29;

LAB30:    t25 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t31);
    t27 = (t25 | t26);
    *((unsigned int *)t32) = t27;
    t23 = (t13 + 4);
    t29 = (t31 + 4);
    t30 = (t32 + 4);
    t28 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t29);
    t34 = (t28 | t33);
    *((unsigned int *)t30) = t34;
    t35 = *((unsigned int *)t30);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB26;

LAB27:    *((unsigned int *)t31) = 1;
    goto LAB30;

LAB29:    t14 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB30;

LAB31:    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t32) = (t37 | t38);
    t39 = (t13 + 4);
    t40 = (t31 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (~(t41));
    t43 = *((unsigned int *)t13);
    t44 = (t43 & t42);
    t45 = *((unsigned int *)t40);
    t46 = (~(t45));
    t47 = *((unsigned int *)t31);
    t48 = (t47 & t46);
    t49 = (~(t44));
    t50 = (~(t48));
    t51 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t51 & t49);
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    goto LAB33;

LAB34:    xsi_set_current_line(81, ng0);

LAB37:    xsi_set_current_line(83, ng0);
    t59 = ((char*)((ng2)));
    t60 = (t0 + 2300);
    xsi_vlogvar_assign_value(t60, t59, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1980U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t32, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB41;

LAB38:    if (t19 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t32) = 1;

LAB41:    memset(t61, 0, 8);
    t12 = (t32 + 4);
    t22 = *((unsigned int *)t12);
    t24 = (~(t22));
    t25 = *((unsigned int *)t32);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t12) != 0)
        goto LAB44;

LAB45:    t23 = (t61 + 4);
    t28 = *((unsigned int *)t61);
    t33 = (!(t28));
    t34 = *((unsigned int *)t23);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB46;

LAB47:    memcpy(t131, t61, 8);

LAB48:    memset(t159, 0, 8);
    t160 = (t131 + 4);
    t161 = *((unsigned int *)t160);
    t162 = (~(t161));
    t163 = *((unsigned int *)t131);
    t164 = (t163 & t162);
    t165 = (t164 & 1U);
    if (t165 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t160) != 0)
        goto LAB80;

LAB81:    t167 = (t159 + 4);
    t168 = *((unsigned int *)t159);
    t169 = (!(t168));
    t170 = *((unsigned int *)t167);
    t171 = (t169 || t170);
    if (t171 > 0)
        goto LAB82;

LAB83:    memcpy(t198, t159, 8);

LAB84:    memset(t226, 0, 8);
    t227 = (t198 + 4);
    t228 = *((unsigned int *)t227);
    t229 = (~(t228));
    t230 = *((unsigned int *)t198);
    t231 = (t230 & t229);
    t232 = (t231 & 1U);
    if (t232 != 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t227) != 0)
        goto LAB98;

LAB99:    t234 = (t226 + 4);
    t235 = *((unsigned int *)t226);
    t236 = (!(t235));
    t237 = *((unsigned int *)t234);
    t238 = (t236 || t237);
    if (t238 > 0)
        goto LAB100;

LAB101:    memcpy(t265, t226, 8);

LAB102:    memset(t293, 0, 8);
    t294 = (t265 + 4);
    t295 = *((unsigned int *)t294);
    t296 = (~(t295));
    t297 = *((unsigned int *)t265);
    t298 = (t297 & t296);
    t299 = (t298 & 1U);
    if (t299 != 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t294) != 0)
        goto LAB116;

LAB117:    t301 = (t293 + 4);
    t302 = *((unsigned int *)t293);
    t303 = (!(t302));
    t304 = *((unsigned int *)t301);
    t305 = (t303 || t304);
    if (t305 > 0)
        goto LAB118;

LAB119:    memcpy(t332, t293, 8);

LAB120:    memset(t31, 0, 8);
    t360 = (t332 + 4);
    t361 = *((unsigned int *)t360);
    t362 = (~(t361));
    t363 = *((unsigned int *)t332);
    t364 = (t363 & t362);
    t365 = (t364 & 1U);
    if (t365 != 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t360) != 0)
        goto LAB134;

LAB135:    t367 = (t31 + 4);
    t368 = *((unsigned int *)t31);
    t369 = *((unsigned int *)t367);
    t370 = (t368 || t369);
    if (t370 > 0)
        goto LAB136;

LAB137:    t372 = *((unsigned int *)t31);
    t373 = (~(t372));
    t374 = *((unsigned int *)t367);
    t375 = (t373 || t374);
    if (t375 > 0)
        goto LAB138;

LAB139:    if (*((unsigned int *)t367) > 0)
        goto LAB140;

LAB141:    if (*((unsigned int *)t31) > 0)
        goto LAB142;

LAB143:    memcpy(t13, t376, 8);

LAB144:    t377 = (t0 + 2484);
    xsi_vlogvar_assign_value(t377, t13, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = (t0 + 2668);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2484);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB145;

LAB146:    if (*((unsigned int *)t5) != 0)
        goto LAB147;

LAB148:    t12 = (t31 + 4);
    t15 = *((unsigned int *)t31);
    t16 = *((unsigned int *)t12);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB149;

LAB150:    t18 = *((unsigned int *)t31);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB151;

LAB152:    if (*((unsigned int *)t12) > 0)
        goto LAB153;

LAB154:    if (*((unsigned int *)t31) > 0)
        goto LAB155;

LAB156:    memcpy(t13, t61, 8);

LAB157:    t39 = ((char*)((ng18)));
    memset(t62, 0, 8);
    xsi_vlog_unsigned_rshift(t62, 32, t13, 32, t39, 32);
    t40 = (t0 + 2760);
    xsi_vlogvar_assign_value(t40, t62, 0, 0, 30);
    goto LAB36;

LAB40:    t11 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t61) = 1;
    goto LAB45;

LAB44:    t14 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB45;

LAB46:    t29 = (t0 + 1980U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng11)));
    memset(t62, 0, 8);
    t39 = (t30 + 4);
    t40 = (t29 + 4);
    t36 = *((unsigned int *)t30);
    t37 = *((unsigned int *)t29);
    t38 = (t36 ^ t37);
    t41 = *((unsigned int *)t39);
    t42 = *((unsigned int *)t40);
    t43 = (t41 ^ t42);
    t45 = (t38 | t43);
    t46 = *((unsigned int *)t39);
    t47 = *((unsigned int *)t40);
    t49 = (t46 | t47);
    t50 = (~(t49));
    t51 = (t45 & t50);
    if (t51 != 0)
        goto LAB52;

LAB49:    if (t49 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t62) = 1;

LAB52:    memset(t63, 0, 8);
    t59 = (t62 + 4);
    t52 = *((unsigned int *)t59);
    t54 = (~(t52));
    t55 = *((unsigned int *)t62);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t59) != 0)
        goto LAB55;

LAB56:    t64 = (t63 + 4);
    t58 = *((unsigned int *)t63);
    t65 = *((unsigned int *)t64);
    t66 = (t58 || t65);
    if (t66 > 0)
        goto LAB57;

LAB58:    memcpy(t93, t63, 8);

LAB59:    memset(t123, 0, 8);
    t124 = (t93 + 4);
    t125 = *((unsigned int *)t124);
    t126 = (~(t125));
    t127 = *((unsigned int *)t93);
    t128 = (t127 & t126);
    t129 = (t128 & 1U);
    if (t129 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t124) != 0)
        goto LAB73;

LAB74:    t132 = *((unsigned int *)t61);
    t133 = *((unsigned int *)t123);
    t134 = (t132 | t133);
    *((unsigned int *)t131) = t134;
    t135 = (t61 + 4);
    t136 = (t123 + 4);
    t137 = (t131 + 4);
    t138 = *((unsigned int *)t135);
    t139 = *((unsigned int *)t136);
    t140 = (t138 | t139);
    *((unsigned int *)t137) = t140;
    t141 = *((unsigned int *)t137);
    t142 = (t141 != 0);
    if (t142 == 1)
        goto LAB75;

LAB76:
LAB77:    goto LAB48;

LAB51:    t53 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB52;

LAB53:    *((unsigned int *)t63) = 1;
    goto LAB56;

LAB55:    t60 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB56;

LAB57:    t67 = (t0 + 876U);
    t68 = *((char **)t67);
    t67 = ((char*)((ng12)));
    memset(t69, 0, 8);
    t70 = (t68 + 4);
    t71 = (t67 + 4);
    t72 = *((unsigned int *)t68);
    t73 = *((unsigned int *)t67);
    t74 = (t72 ^ t73);
    t75 = *((unsigned int *)t70);
    t76 = *((unsigned int *)t71);
    t77 = (t75 ^ t76);
    t78 = (t74 | t77);
    t79 = *((unsigned int *)t70);
    t80 = *((unsigned int *)t71);
    t81 = (t79 | t80);
    t82 = (~(t81));
    t83 = (t78 & t82);
    if (t83 != 0)
        goto LAB61;

LAB60:    if (t81 != 0)
        goto LAB62;

LAB63:    memset(t85, 0, 8);
    t86 = (t69 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (~(t87));
    t89 = *((unsigned int *)t69);
    t90 = (t89 & t88);
    t91 = (t90 & 1U);
    if (t91 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t86) != 0)
        goto LAB66;

LAB67:    t94 = *((unsigned int *)t63);
    t95 = *((unsigned int *)t85);
    t96 = (t94 & t95);
    *((unsigned int *)t93) = t96;
    t97 = (t63 + 4);
    t98 = (t85 + 4);
    t99 = (t93 + 4);
    t100 = *((unsigned int *)t97);
    t101 = *((unsigned int *)t98);
    t102 = (t100 | t101);
    *((unsigned int *)t99) = t102;
    t103 = *((unsigned int *)t99);
    t104 = (t103 != 0);
    if (t104 == 1)
        goto LAB68;

LAB69:
LAB70:    goto LAB59;

LAB61:    *((unsigned int *)t69) = 1;
    goto LAB63;

LAB62:    t84 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB63;

LAB64:    *((unsigned int *)t85) = 1;
    goto LAB67;

LAB66:    t92 = (t85 + 4);
    *((unsigned int *)t85) = 1;
    *((unsigned int *)t92) = 1;
    goto LAB67;

LAB68:    t105 = *((unsigned int *)t93);
    t106 = *((unsigned int *)t99);
    *((unsigned int *)t93) = (t105 | t106);
    t107 = (t63 + 4);
    t108 = (t85 + 4);
    t109 = *((unsigned int *)t63);
    t110 = (~(t109));
    t111 = *((unsigned int *)t107);
    t112 = (~(t111));
    t113 = *((unsigned int *)t85);
    t114 = (~(t113));
    t115 = *((unsigned int *)t108);
    t116 = (~(t115));
    t44 = (t110 & t112);
    t48 = (t114 & t116);
    t117 = (~(t44));
    t118 = (~(t48));
    t119 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t119 & t117);
    t120 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t120 & t118);
    t121 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t121 & t117);
    t122 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t122 & t118);
    goto LAB70;

LAB71:    *((unsigned int *)t123) = 1;
    goto LAB74;

LAB73:    t130 = (t123 + 4);
    *((unsigned int *)t123) = 1;
    *((unsigned int *)t130) = 1;
    goto LAB74;

LAB75:    t143 = *((unsigned int *)t131);
    t144 = *((unsigned int *)t137);
    *((unsigned int *)t131) = (t143 | t144);
    t145 = (t61 + 4);
    t146 = (t123 + 4);
    t147 = *((unsigned int *)t145);
    t148 = (~(t147));
    t149 = *((unsigned int *)t61);
    t150 = (t149 & t148);
    t151 = *((unsigned int *)t146);
    t152 = (~(t151));
    t153 = *((unsigned int *)t123);
    t154 = (t153 & t152);
    t155 = (~(t150));
    t156 = (~(t154));
    t157 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t157 & t155);
    t158 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t158 & t156);
    goto LAB77;

LAB78:    *((unsigned int *)t159) = 1;
    goto LAB81;

LAB80:    t166 = (t159 + 4);
    *((unsigned int *)t159) = 1;
    *((unsigned int *)t166) = 1;
    goto LAB81;

LAB82:    t172 = (t0 + 1980U);
    t173 = *((char **)t172);
    t172 = ((char*)((ng13)));
    memset(t174, 0, 8);
    t175 = (t173 + 4);
    t176 = (t172 + 4);
    t177 = *((unsigned int *)t173);
    t178 = *((unsigned int *)t172);
    t179 = (t177 ^ t178);
    t180 = *((unsigned int *)t175);
    t181 = *((unsigned int *)t176);
    t182 = (t180 ^ t181);
    t183 = (t179 | t182);
    t184 = *((unsigned int *)t175);
    t185 = *((unsigned int *)t176);
    t186 = (t184 | t185);
    t187 = (~(t186));
    t188 = (t183 & t187);
    if (t188 != 0)
        goto LAB88;

LAB85:    if (t186 != 0)
        goto LAB87;

LAB86:    *((unsigned int *)t174) = 1;

LAB88:    memset(t190, 0, 8);
    t191 = (t174 + 4);
    t192 = *((unsigned int *)t191);
    t193 = (~(t192));
    t194 = *((unsigned int *)t174);
    t195 = (t194 & t193);
    t196 = (t195 & 1U);
    if (t196 != 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t191) != 0)
        goto LAB91;

LAB92:    t199 = *((unsigned int *)t159);
    t200 = *((unsigned int *)t190);
    t201 = (t199 | t200);
    *((unsigned int *)t198) = t201;
    t202 = (t159 + 4);
    t203 = (t190 + 4);
    t204 = (t198 + 4);
    t205 = *((unsigned int *)t202);
    t206 = *((unsigned int *)t203);
    t207 = (t205 | t206);
    *((unsigned int *)t204) = t207;
    t208 = *((unsigned int *)t204);
    t209 = (t208 != 0);
    if (t209 == 1)
        goto LAB93;

LAB94:
LAB95:    goto LAB84;

LAB87:    t189 = (t174 + 4);
    *((unsigned int *)t174) = 1;
    *((unsigned int *)t189) = 1;
    goto LAB88;

LAB89:    *((unsigned int *)t190) = 1;
    goto LAB92;

LAB91:    t197 = (t190 + 4);
    *((unsigned int *)t190) = 1;
    *((unsigned int *)t197) = 1;
    goto LAB92;

LAB93:    t210 = *((unsigned int *)t198);
    t211 = *((unsigned int *)t204);
    *((unsigned int *)t198) = (t210 | t211);
    t212 = (t159 + 4);
    t213 = (t190 + 4);
    t214 = *((unsigned int *)t212);
    t215 = (~(t214));
    t216 = *((unsigned int *)t159);
    t217 = (t216 & t215);
    t218 = *((unsigned int *)t213);
    t219 = (~(t218));
    t220 = *((unsigned int *)t190);
    t221 = (t220 & t219);
    t222 = (~(t217));
    t223 = (~(t221));
    t224 = *((unsigned int *)t204);
    *((unsigned int *)t204) = (t224 & t222);
    t225 = *((unsigned int *)t204);
    *((unsigned int *)t204) = (t225 & t223);
    goto LAB95;

LAB96:    *((unsigned int *)t226) = 1;
    goto LAB99;

LAB98:    t233 = (t226 + 4);
    *((unsigned int *)t226) = 1;
    *((unsigned int *)t233) = 1;
    goto LAB99;

LAB100:    t239 = (t0 + 1980U);
    t240 = *((char **)t239);
    t239 = ((char*)((ng14)));
    memset(t241, 0, 8);
    t242 = (t240 + 4);
    t243 = (t239 + 4);
    t244 = *((unsigned int *)t240);
    t245 = *((unsigned int *)t239);
    t246 = (t244 ^ t245);
    t247 = *((unsigned int *)t242);
    t248 = *((unsigned int *)t243);
    t249 = (t247 ^ t248);
    t250 = (t246 | t249);
    t251 = *((unsigned int *)t242);
    t252 = *((unsigned int *)t243);
    t253 = (t251 | t252);
    t254 = (~(t253));
    t255 = (t250 & t254);
    if (t255 != 0)
        goto LAB106;

LAB103:    if (t253 != 0)
        goto LAB105;

LAB104:    *((unsigned int *)t241) = 1;

LAB106:    memset(t257, 0, 8);
    t258 = (t241 + 4);
    t259 = *((unsigned int *)t258);
    t260 = (~(t259));
    t261 = *((unsigned int *)t241);
    t262 = (t261 & t260);
    t263 = (t262 & 1U);
    if (t263 != 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t258) != 0)
        goto LAB109;

LAB110:    t266 = *((unsigned int *)t226);
    t267 = *((unsigned int *)t257);
    t268 = (t266 | t267);
    *((unsigned int *)t265) = t268;
    t269 = (t226 + 4);
    t270 = (t257 + 4);
    t271 = (t265 + 4);
    t272 = *((unsigned int *)t269);
    t273 = *((unsigned int *)t270);
    t274 = (t272 | t273);
    *((unsigned int *)t271) = t274;
    t275 = *((unsigned int *)t271);
    t276 = (t275 != 0);
    if (t276 == 1)
        goto LAB111;

LAB112:
LAB113:    goto LAB102;

LAB105:    t256 = (t241 + 4);
    *((unsigned int *)t241) = 1;
    *((unsigned int *)t256) = 1;
    goto LAB106;

LAB107:    *((unsigned int *)t257) = 1;
    goto LAB110;

LAB109:    t264 = (t257 + 4);
    *((unsigned int *)t257) = 1;
    *((unsigned int *)t264) = 1;
    goto LAB110;

LAB111:    t277 = *((unsigned int *)t265);
    t278 = *((unsigned int *)t271);
    *((unsigned int *)t265) = (t277 | t278);
    t279 = (t226 + 4);
    t280 = (t257 + 4);
    t281 = *((unsigned int *)t279);
    t282 = (~(t281));
    t283 = *((unsigned int *)t226);
    t284 = (t283 & t282);
    t285 = *((unsigned int *)t280);
    t286 = (~(t285));
    t287 = *((unsigned int *)t257);
    t288 = (t287 & t286);
    t289 = (~(t284));
    t290 = (~(t288));
    t291 = *((unsigned int *)t271);
    *((unsigned int *)t271) = (t291 & t289);
    t292 = *((unsigned int *)t271);
    *((unsigned int *)t271) = (t292 & t290);
    goto LAB113;

LAB114:    *((unsigned int *)t293) = 1;
    goto LAB117;

LAB116:    t300 = (t293 + 4);
    *((unsigned int *)t293) = 1;
    *((unsigned int *)t300) = 1;
    goto LAB117;

LAB118:    t306 = (t0 + 1980U);
    t307 = *((char **)t306);
    t306 = ((char*)((ng15)));
    memset(t308, 0, 8);
    t309 = (t307 + 4);
    t310 = (t306 + 4);
    t311 = *((unsigned int *)t307);
    t312 = *((unsigned int *)t306);
    t313 = (t311 ^ t312);
    t314 = *((unsigned int *)t309);
    t315 = *((unsigned int *)t310);
    t316 = (t314 ^ t315);
    t317 = (t313 | t316);
    t318 = *((unsigned int *)t309);
    t319 = *((unsigned int *)t310);
    t320 = (t318 | t319);
    t321 = (~(t320));
    t322 = (t317 & t321);
    if (t322 != 0)
        goto LAB124;

LAB121:    if (t320 != 0)
        goto LAB123;

LAB122:    *((unsigned int *)t308) = 1;

LAB124:    memset(t324, 0, 8);
    t325 = (t308 + 4);
    t326 = *((unsigned int *)t325);
    t327 = (~(t326));
    t328 = *((unsigned int *)t308);
    t329 = (t328 & t327);
    t330 = (t329 & 1U);
    if (t330 != 0)
        goto LAB125;

LAB126:    if (*((unsigned int *)t325) != 0)
        goto LAB127;

LAB128:    t333 = *((unsigned int *)t293);
    t334 = *((unsigned int *)t324);
    t335 = (t333 | t334);
    *((unsigned int *)t332) = t335;
    t336 = (t293 + 4);
    t337 = (t324 + 4);
    t338 = (t332 + 4);
    t339 = *((unsigned int *)t336);
    t340 = *((unsigned int *)t337);
    t341 = (t339 | t340);
    *((unsigned int *)t338) = t341;
    t342 = *((unsigned int *)t338);
    t343 = (t342 != 0);
    if (t343 == 1)
        goto LAB129;

LAB130:
LAB131:    goto LAB120;

LAB123:    t323 = (t308 + 4);
    *((unsigned int *)t308) = 1;
    *((unsigned int *)t323) = 1;
    goto LAB124;

LAB125:    *((unsigned int *)t324) = 1;
    goto LAB128;

LAB127:    t331 = (t324 + 4);
    *((unsigned int *)t324) = 1;
    *((unsigned int *)t331) = 1;
    goto LAB128;

LAB129:    t344 = *((unsigned int *)t332);
    t345 = *((unsigned int *)t338);
    *((unsigned int *)t332) = (t344 | t345);
    t346 = (t293 + 4);
    t347 = (t324 + 4);
    t348 = *((unsigned int *)t346);
    t349 = (~(t348));
    t350 = *((unsigned int *)t293);
    t351 = (t350 & t349);
    t352 = *((unsigned int *)t347);
    t353 = (~(t352));
    t354 = *((unsigned int *)t324);
    t355 = (t354 & t353);
    t356 = (~(t351));
    t357 = (~(t355));
    t358 = *((unsigned int *)t338);
    *((unsigned int *)t338) = (t358 & t356);
    t359 = *((unsigned int *)t338);
    *((unsigned int *)t338) = (t359 & t357);
    goto LAB131;

LAB132:    *((unsigned int *)t31) = 1;
    goto LAB135;

LAB134:    t366 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t366) = 1;
    goto LAB135;

LAB136:    t371 = ((char*)((ng2)));
    goto LAB137;

LAB138:    t376 = ((char*)((ng1)));
    goto LAB139;

LAB140:    xsi_vlog_unsigned_bit_combine(t13, 1, t371, 1, t376, 1);
    goto LAB144;

LAB142:    memcpy(t13, t371, 8);
    goto LAB144;

LAB145:    *((unsigned int *)t31) = 1;
    goto LAB148;

LAB147:    t11 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB148;

LAB149:    t14 = (t0 + 784U);
    t23 = *((char **)t14);
    t14 = ((char*)((ng16)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_minus(t32, 32, t23, 32, t14, 32);
    goto LAB150;

LAB151:    t29 = (t0 + 784U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng17)));
    memset(t61, 0, 8);
    xsi_vlog_unsigned_minus(t61, 32, t30, 32, t29, 32);
    goto LAB152;

LAB153:    xsi_vlog_unsigned_bit_combine(t13, 32, t32, 32, t61, 32);
    goto LAB157;

LAB155:    memcpy(t13, t32, 8);
    goto LAB157;

LAB158:    xsi_set_current_line(89, ng0);

LAB161:    xsi_set_current_line(90, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2300);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB160;

LAB162:    xsi_set_current_line(91, ng0);

LAB165:    xsi_set_current_line(92, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    xsi_vlogtype_concat(t13, 6, 6, 2U, t4, 1, t5, 5);

LAB166:    t11 = ((char*)((ng3)));
    t44 = xsi_vlog_unsigned_case_compare(t13, 6, t11, 6);
    if (t44 == 1)
        goto LAB167;

LAB168:    t2 = ((char*)((ng5)));
    t44 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t44 == 1)
        goto LAB169;

LAB170:
LAB171:    goto LAB164;

LAB167:    xsi_set_current_line(93, ng0);

LAB172:    xsi_set_current_line(94, ng0);
    t12 = (t0 + 692U);
    t14 = *((char **)t12);
    memset(t31, 0, 8);
    t12 = (t31 + 4);
    t23 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (t15 >> 10);
    *((unsigned int *)t31) = t16;
    t17 = *((unsigned int *)t23);
    t18 = (t17 >> 10);
    *((unsigned int *)t12) = t18;
    t19 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t19 & 63U);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 63U);
    t29 = (t0 + 2208);
    xsi_vlogvar_assign_value(t29, t31, 0, 0, 6);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    memset(t32, 0, 8);
    t2 = (t32 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t32) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t10 & 3U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 3U);
    xsi_vlogtype_concat(t31, 2, 2, 1U, t32, 2);
    t5 = (t0 + 2392);
    xsi_vlogvar_assign_value(t5, t31, 0, 0, 1);
    t11 = (t0 + 2300);
    xsi_vlogvar_assign_value(t11, t31, 1, 0, 1);
    goto LAB171;

LAB169:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng18)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_rshift(t31, 32, t4, 32, t3, 32);
    t5 = (t0 + 2760);
    xsi_vlogvar_assign_value(t5, t31, 0, 0, 30);
    goto LAB171;

}


extern void work_m_00000000000149067178_1093763706_init()
{
	static char *pe[] = {(void *)Cont_46_0,(void *)Cont_53_1,(void *)Cont_57_2,(void *)Cont_65_3,(void *)Always_69_4};
	xsi_register_didat("work_m_00000000000149067178_1093763706", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000000149067178_1093763706.didat");
	xsi_register_executes(pe);
}
