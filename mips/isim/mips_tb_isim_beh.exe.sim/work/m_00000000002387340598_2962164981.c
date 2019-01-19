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
static const char *ng0 = "C:/Users/ThinkPad/Documents/ISE/FPGA/mips/mips/external/MiniUART/uart.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {4U, 0U};
static unsigned int ng3[] = {5U, 0U};
static unsigned int ng4[] = {6U, 0U};
static unsigned int ng5[] = {0U, 0U, 0U, 0U};
static int ng6[] = {160000, 0};
static int ng7[] = {9600, 0};
static int ng8[] = {8, 0};
static int ng9[] = {1, 0};
static int ng10[] = {0, 0};



static void Cont_53_0(char *t0)
{
    char t3[16];
    char t4[8];
    char t6[8];
    char t33[16];
    char t40[16];
    char t41[8];
    char t44[8];
    char t71[16];
    char t78[16];
    char t79[8];
    char t82[8];
    char t109[16];
    char t118[16];
    char t119[8];
    char t122[8];
    char t149[16];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t80;
    char *t81;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t120;
    char *t121;
    char *t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t150;
    char *t151;
    char *t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    char *t163;
    char *t164;

LAB0:    t1 = (t0 + 3100U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1060U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 16);

LAB20:    t159 = (t0 + 4100);
    t160 = (t159 + 32U);
    t161 = *((char **)t160);
    t162 = (t161 + 40U);
    t163 = *((char **)t162);
    xsi_vlog_bit_copy(t163, 0, t3, 0, 32);
    xsi_driver_vfirst_trans(t159, 0, 31);
    t164 = (t0 + 4016);
    *((int *)t164) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 1520U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng1)));
    xsi_vlogtype_concat(t33, 39, 32, 2U, t34, 24, t35, 8);
    goto LAB13;

LAB14:    t42 = (t0 + 1060U);
    t43 = *((char **)t42);
    t42 = ((char*)((ng2)));
    memset(t44, 0, 8);
    t45 = (t43 + 4);
    t46 = (t42 + 4);
    t47 = *((unsigned int *)t43);
    t48 = *((unsigned int *)t42);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB24;

LAB21:    if (t56 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t44) = 1;

LAB24:    memset(t41, 0, 8);
    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t60) != 0)
        goto LAB27;

LAB28:    t67 = (t41 + 4);
    t68 = *((unsigned int *)t41);
    t69 = *((unsigned int *)t67);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB29;

LAB30:    t74 = *((unsigned int *)t41);
    t75 = (~(t74));
    t76 = *((unsigned int *)t67);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t67) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t41) > 0)
        goto LAB35;

LAB36:    memcpy(t40, t78, 16);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 39, t33, 39, t40, 39);
    goto LAB20;

LAB18:    memcpy(t3, t33, 16);
    goto LAB20;

LAB23:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t41) = 1;
    goto LAB28;

LAB27:    t66 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB28;

LAB29:    t72 = (t0 + 1612U);
    t73 = *((char **)t72);
    t72 = ((char*)((ng1)));
    xsi_vlogtype_concat(t71, 39, 32, 2U, t72, 26, t73, 6);
    goto LAB30;

LAB31:    t80 = (t0 + 1060U);
    t81 = *((char **)t80);
    t80 = ((char*)((ng3)));
    memset(t82, 0, 8);
    t83 = (t81 + 4);
    t84 = (t80 + 4);
    t85 = *((unsigned int *)t81);
    t86 = *((unsigned int *)t80);
    t87 = (t85 ^ t86);
    t88 = *((unsigned int *)t83);
    t89 = *((unsigned int *)t84);
    t90 = (t88 ^ t89);
    t91 = (t87 | t90);
    t92 = *((unsigned int *)t83);
    t93 = *((unsigned int *)t84);
    t94 = (t92 | t93);
    t95 = (~(t94));
    t96 = (t91 & t95);
    if (t96 != 0)
        goto LAB41;

LAB38:    if (t94 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t82) = 1;

LAB41:    memset(t79, 0, 8);
    t98 = (t82 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t82);
    t102 = (t101 & t100);
    t103 = (t102 & 1U);
    if (t103 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t98) != 0)
        goto LAB44;

LAB45:    t105 = (t79 + 4);
    t106 = *((unsigned int *)t79);
    t107 = *((unsigned int *)t105);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB46;

LAB47:    t114 = *((unsigned int *)t79);
    t115 = (~(t114));
    t116 = *((unsigned int *)t105);
    t117 = (t115 || t116);
    if (t117 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t105) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t79) > 0)
        goto LAB52;

LAB53:    memcpy(t78, t118, 16);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t40, 39, t71, 39, t78, 39);
    goto LAB37;

LAB35:    memcpy(t40, t71, 16);
    goto LAB37;

LAB40:    t97 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t79) = 1;
    goto LAB45;

LAB44:    t104 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB45;

LAB46:    t110 = (t0 + 2392);
    t111 = (t110 + 36U);
    t112 = *((char **)t111);
    t113 = ((char*)((ng1)));
    xsi_vlogtype_concat(t109, 39, 39, 2U, t113, 23, t112, 16);
    goto LAB47;

LAB48:    t120 = (t0 + 1060U);
    t121 = *((char **)t120);
    t120 = ((char*)((ng4)));
    memset(t122, 0, 8);
    t123 = (t121 + 4);
    t124 = (t120 + 4);
    t125 = *((unsigned int *)t121);
    t126 = *((unsigned int *)t120);
    t127 = (t125 ^ t126);
    t128 = *((unsigned int *)t123);
    t129 = *((unsigned int *)t124);
    t130 = (t128 ^ t129);
    t131 = (t127 | t130);
    t132 = *((unsigned int *)t123);
    t133 = *((unsigned int *)t124);
    t134 = (t132 | t133);
    t135 = (~(t134));
    t136 = (t131 & t135);
    if (t136 != 0)
        goto LAB58;

LAB55:    if (t134 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t122) = 1;

LAB58:    memset(t119, 0, 8);
    t138 = (t122 + 4);
    t139 = *((unsigned int *)t138);
    t140 = (~(t139));
    t141 = *((unsigned int *)t122);
    t142 = (t141 & t140);
    t143 = (t142 & 1U);
    if (t143 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t138) != 0)
        goto LAB61;

LAB62:    t145 = (t119 + 4);
    t146 = *((unsigned int *)t119);
    t147 = *((unsigned int *)t145);
    t148 = (t146 || t147);
    if (t148 > 0)
        goto LAB63;

LAB64:    t154 = *((unsigned int *)t119);
    t155 = (~(t154));
    t156 = *((unsigned int *)t145);
    t157 = (t155 || t156);
    if (t157 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t145) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t119) > 0)
        goto LAB69;

LAB70:    memcpy(t118, t158, 16);

LAB71:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t78, 39, t109, 39, t118, 39);
    goto LAB54;

LAB52:    memcpy(t78, t109, 16);
    goto LAB54;

LAB57:    t137 = (t122 + 4);
    *((unsigned int *)t122) = 1;
    *((unsigned int *)t137) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t119) = 1;
    goto LAB62;

LAB61:    t144 = (t119 + 4);
    *((unsigned int *)t119) = 1;
    *((unsigned int *)t144) = 1;
    goto LAB62;

LAB63:    t150 = (t0 + 2484);
    t151 = (t150 + 36U);
    t152 = *((char **)t151);
    t153 = ((char*)((ng1)));
    xsi_vlogtype_concat(t149, 39, 36, 2U, t153, 20, t152, 16);
    goto LAB64;

LAB65:    t158 = ((char*)((ng5)));
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t118, 39, t149, 39, t158, 39);
    goto LAB71;

LAB69:    memcpy(t118, t149, 16);
    goto LAB71;

}

static void Cont_58_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 3244U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1980U);
    t3 = *((char **)t2);
    t2 = (t0 + 4136);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 4024);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_61_2(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
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
    int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3388U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4032);
    *((int *)t2) = 1;
    t3 = (t0 + 3416);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(68, ng0);

LAB9:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(63, ng0);

LAB8:    xsi_set_current_line(64, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng7)));
    t4 = ((char*)((ng8)));
    memset(t13, 0, 8);
    xsi_vlog_signed_multiply(t13, 32, t3, 32, t4, 32);
    memset(t14, 0, 8);
    xsi_vlog_signed_divide(t14, 32, t2, 32, t13, 32);
    t5 = ((char*)((ng9)));
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t14, 32, t5, 32);
    t11 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t11, t15, 0, 0, 16, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng7)));
    memset(t13, 0, 8);
    xsi_vlog_signed_divide(t13, 32, t2, 32, t3, 32);
    t4 = ((char*)((ng9)));
    memset(t14, 0, 8);
    xsi_vlog_signed_minus(t14, 32, t13, 32, t4, 32);
    t5 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t5, t14, 0, 0, 16, 0LL);
    goto LAB7;

LAB10:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 1060U);
    t5 = *((char **)t4);

LAB13:    t4 = ((char*)((ng1)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 32);
    if (t16 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng3)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t16 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng4)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t16 == 1)
        goto LAB18;

LAB19:
LAB20:    goto LAB12;

LAB14:    xsi_set_current_line(71, ng0);
    t11 = (t0 + 692U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t17 = (t12 + 4);
    t18 = *((unsigned int *)t12);
    t19 = (t18 >> 0);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 0);
    *((unsigned int *)t11) = t21;
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 255U);
    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 255U);
    t24 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t24, t13, 0, 0, 8, 0LL);
    goto LAB20;

LAB16:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 65535U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 65535U);
    t12 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 16, 0LL);
    goto LAB20;

LAB18:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 65535U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 65535U);
    t12 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 16, 0LL);
    goto LAB20;

}

static void Cont_78_3(char *t0)
{
    char t4[8];
    char t15[8];
    char t34[8];
    char t42[8];
    char t74[8];
    char t88[8];
    char t104[8];
    char t112[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t75;
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
    char *t86;
    char *t87;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
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
    int t136;
    int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t145;
    char *t146;
    char *t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    char *t157;

LAB0:    t1 = (t0 + 3532U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t11 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t11);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB8;

LAB9:    memcpy(t42, t4, 8);

LAB10:    memset(t74, 0, 8);
    t75 = (t42 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t42);
    t79 = (t78 & t77);
    t80 = (t79 & 1U);
    if (t80 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t75) != 0)
        goto LAB26;

LAB27:    t82 = (t74 + 4);
    t83 = *((unsigned int *)t74);
    t84 = *((unsigned int *)t82);
    t85 = (t83 || t84);
    if (t85 > 0)
        goto LAB28;

LAB29:    memcpy(t112, t74, 8);

LAB30:    t144 = (t0 + 4172);
    t145 = (t144 + 32U);
    t146 = *((char **)t145);
    t147 = (t146 + 40U);
    t148 = *((char **)t147);
    memset(t148, 0, 8);
    t149 = 1U;
    t150 = t149;
    t151 = (t112 + 4);
    t152 = *((unsigned int *)t112);
    t149 = (t149 & t152);
    t153 = *((unsigned int *)t151);
    t150 = (t150 & t153);
    t154 = (t148 + 4);
    t155 = *((unsigned int *)t148);
    *((unsigned int *)t148) = (t155 | t149);
    t156 = *((unsigned int *)t154);
    *((unsigned int *)t154) = (t156 | t150);
    xsi_driver_vfirst_trans(t144, 0, 0);
    t157 = (t0 + 4040);
    *((int *)t157) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 1152U);
    t17 = *((char **)t16);
    memset(t15, 0, 8);
    t16 = (t17 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (~(t18));
    t20 = *((unsigned int *)t17);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t16) == 0)
        goto LAB11;

LAB13:    t23 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t23) = 1;

LAB14:    t24 = (t15 + 4);
    t25 = (t17 + 4);
    t26 = *((unsigned int *)t17);
    t27 = (~(t26));
    *((unsigned int *)t15) = t27;
    *((unsigned int *)t24) = 0;
    if (*((unsigned int *)t25) != 0)
        goto LAB16;

LAB15:    t32 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t32 & 1U);
    t33 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t33 & 1U);
    memset(t34, 0, 8);
    t35 = (t15 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t15);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t35) != 0)
        goto LAB19;

LAB20:    t43 = *((unsigned int *)t4);
    t44 = *((unsigned int *)t34);
    t45 = (t43 & t44);
    *((unsigned int *)t42) = t45;
    t46 = (t4 + 4);
    t47 = (t34 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t46);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB10;

LAB11:    *((unsigned int *)t15) = 1;
    goto LAB14;

LAB16:    t28 = *((unsigned int *)t15);
    t29 = *((unsigned int *)t25);
    *((unsigned int *)t15) = (t28 | t29);
    t30 = *((unsigned int *)t24);
    t31 = *((unsigned int *)t25);
    *((unsigned int *)t24) = (t30 | t31);
    goto LAB15;

LAB17:    *((unsigned int *)t34) = 1;
    goto LAB20;

LAB19:    t41 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB20;

LAB21:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t42) = (t54 | t55);
    t56 = (t4 + 4);
    t57 = (t34 + 4);
    t58 = *((unsigned int *)t4);
    t59 = (~(t58));
    t60 = *((unsigned int *)t56);
    t61 = (~(t60));
    t62 = *((unsigned int *)t34);
    t63 = (~(t62));
    t64 = *((unsigned int *)t57);
    t65 = (~(t64));
    t66 = (t59 & t61);
    t67 = (t63 & t65);
    t68 = (~(t66));
    t69 = (~(t67));
    t70 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t70 & t68);
    t71 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t68);
    t73 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t73 & t69);
    goto LAB23;

LAB24:    *((unsigned int *)t74) = 1;
    goto LAB27;

LAB26:    t81 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB27;

LAB28:    t86 = (t0 + 1060U);
    t87 = *((char **)t86);
    t86 = ((char*)((ng1)));
    memset(t88, 0, 8);
    t89 = (t87 + 4);
    t90 = (t86 + 4);
    t91 = *((unsigned int *)t87);
    t92 = *((unsigned int *)t86);
    t93 = (t91 ^ t92);
    t94 = *((unsigned int *)t89);
    t95 = *((unsigned int *)t90);
    t96 = (t94 ^ t95);
    t97 = (t93 | t96);
    t98 = *((unsigned int *)t89);
    t99 = *((unsigned int *)t90);
    t100 = (t98 | t99);
    t101 = (~(t100));
    t102 = (t97 & t101);
    if (t102 != 0)
        goto LAB34;

LAB31:    if (t100 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t88) = 1;

LAB34:    memset(t104, 0, 8);
    t105 = (t88 + 4);
    t106 = *((unsigned int *)t105);
    t107 = (~(t106));
    t108 = *((unsigned int *)t88);
    t109 = (t108 & t107);
    t110 = (t109 & 1U);
    if (t110 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t105) != 0)
        goto LAB37;

LAB38:    t113 = *((unsigned int *)t74);
    t114 = *((unsigned int *)t104);
    t115 = (t113 & t114);
    *((unsigned int *)t112) = t115;
    t116 = (t74 + 4);
    t117 = (t104 + 4);
    t118 = (t112 + 4);
    t119 = *((unsigned int *)t116);
    t120 = *((unsigned int *)t117);
    t121 = (t119 | t120);
    *((unsigned int *)t118) = t121;
    t122 = *((unsigned int *)t118);
    t123 = (t122 != 0);
    if (t123 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB30;

LAB33:    t103 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB34;

LAB35:    *((unsigned int *)t104) = 1;
    goto LAB38;

LAB37:    t111 = (t104 + 4);
    *((unsigned int *)t104) = 1;
    *((unsigned int *)t111) = 1;
    goto LAB38;

LAB39:    t124 = *((unsigned int *)t112);
    t125 = *((unsigned int *)t118);
    *((unsigned int *)t112) = (t124 | t125);
    t126 = (t74 + 4);
    t127 = (t104 + 4);
    t128 = *((unsigned int *)t74);
    t129 = (~(t128));
    t130 = *((unsigned int *)t126);
    t131 = (~(t130));
    t132 = *((unsigned int *)t104);
    t133 = (~(t132));
    t134 = *((unsigned int *)t127);
    t135 = (~(t134));
    t136 = (t129 & t131);
    t137 = (t133 & t135);
    t138 = (~(t136));
    t139 = (~(t137));
    t140 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t140 & t138);
    t141 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t141 & t139);
    t142 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t142 & t138);
    t143 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t143 & t139);
    goto LAB41;

}

static void Cont_81_4(char *t0)
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
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 3676U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1980U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 2072U);
    t6 = *((char **)t5);
    xsi_vlogtype_concat(t3, 6, 6, 3U, t6, 1, t2, 4, t4, 1);
    t5 = (t0 + 4208);
    t7 = (t5 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 63U;
    t12 = t11;
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t5, 0, 5);
    t19 = (t0 + 4048);
    *((int *)t19) = 1;

LAB1:    return;
}

static void Always_84_5(char *t0)
{
    char t13[8];
    char t15[8];
    char t48[8];
    char t64[8];
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
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;

LAB0:    t1 = (t0 + 3820U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 4056);
    *((int *)t2) = 1;
    t3 = (t0 + 3848);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2576);
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
        goto LAB11;

LAB9:    if (*((unsigned int *)t5) == 0)
        goto LAB8;

LAB10:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB11:    t12 = (t0 + 1152U);
    t14 = *((char **)t12);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t14);
    t18 = (t16 & t17);
    *((unsigned int *)t15) = t18;
    t12 = (t13 + 4);
    t19 = (t14 + 4);
    t20 = (t15 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t19);
    t23 = (t21 | t22);
    *((unsigned int *)t20) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB12;

LAB13:
LAB14:    t46 = (t0 + 1060U);
    t47 = *((char **)t46);
    t46 = ((char*)((ng1)));
    memset(t48, 0, 8);
    t49 = (t47 + 4);
    t50 = (t46 + 4);
    t51 = *((unsigned int *)t47);
    t52 = *((unsigned int *)t46);
    t53 = (t51 ^ t52);
    t54 = *((unsigned int *)t49);
    t55 = *((unsigned int *)t50);
    t56 = (t54 ^ t55);
    t57 = (t53 | t56);
    t58 = *((unsigned int *)t49);
    t59 = *((unsigned int *)t50);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t62 = (t57 & t61);
    if (t62 != 0)
        goto LAB18;

LAB15:    if (t60 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t48) = 1;

LAB18:    t65 = *((unsigned int *)t15);
    t66 = *((unsigned int *)t48);
    t67 = (t65 & t66);
    *((unsigned int *)t64) = t67;
    t68 = (t15 + 4);
    t69 = (t48 + 4);
    t70 = (t64 + 4);
    t71 = *((unsigned int *)t68);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB19;

LAB20:
LAB21:    t96 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t96, t64, 0, 0, 1, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(86, ng0);
    t11 = ((char*)((ng10)));
    t12 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB7;

LAB8:    *((unsigned int *)t13) = 1;
    goto LAB11;

LAB12:    t26 = *((unsigned int *)t15);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t15) = (t26 | t27);
    t28 = (t13 + 4);
    t29 = (t14 + 4);
    t30 = *((unsigned int *)t13);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t34 = *((unsigned int *)t14);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (~(t36));
    t38 = (t31 & t33);
    t39 = (t35 & t37);
    t40 = (~(t38));
    t41 = (~(t39));
    t42 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t42 & t40);
    t43 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t43 & t41);
    t44 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t44 & t40);
    t45 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t45 & t41);
    goto LAB14;

LAB17:    t63 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB18;

LAB19:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t64) = (t76 | t77);
    t78 = (t15 + 4);
    t79 = (t48 + 4);
    t80 = *((unsigned int *)t15);
    t81 = (~(t80));
    t82 = *((unsigned int *)t78);
    t83 = (~(t82));
    t84 = *((unsigned int *)t48);
    t85 = (~(t84));
    t86 = *((unsigned int *)t79);
    t87 = (~(t86));
    t88 = (t81 & t83);
    t89 = (t85 & t87);
    t90 = (~(t88));
    t91 = (~(t89));
    t92 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t92 & t90);
    t93 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t93 & t91);
    t94 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t94 & t90);
    t95 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t95 & t91);
    goto LAB21;

}


extern void work_m_00000000002387340598_2962164981_init()
{
	static char *pe[] = {(void *)Cont_53_0,(void *)Cont_58_1,(void *)Always_61_2,(void *)Cont_78_3,(void *)Cont_81_4,(void *)Always_84_5};
	xsi_register_didat("work_m_00000000002387340598_2962164981", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000002387340598_2962164981.didat");
	xsi_register_executes(pe);
}
