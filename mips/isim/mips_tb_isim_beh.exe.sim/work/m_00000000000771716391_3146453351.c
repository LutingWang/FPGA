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
static const char *ng0 = "C:/Users/ThinkPad/Documents/ISE/FPGA/mips/mips/cpu/datapath/2_D/npc.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {14, 0};
static unsigned int ng4[] = {388169731U, 0U};



static void Cont_31_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t35[8];
    char t45[8];
    char t59[8];
    char t60[8];
    char t63[8];
    char t92[8];
    char t93[8];
    char t103[8];
    char t107[8];
    char t115[8];
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
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
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
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t61;
    char *t62;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
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
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t104;
    char *t105;
    char *t106;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t126;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 784U);
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

LAB13:    t55 = *((unsigned int *)t4);
    t56 = (~(t55));
    t57 = *((unsigned int *)t29);
    t58 = (t56 || t57);
    if (t58 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t59, 8);

LAB20:    t121 = (t0 + 1776);
    t122 = (t121 + 32U);
    t123 = *((char **)t122);
    t124 = (t123 + 40U);
    t125 = *((char **)t124);
    memcpy(t125, t3, 8);
    xsi_driver_vfirst_trans(t121, 0, 31);
    t126 = (t0 + 1732);
    *((int *)t126) = 1;

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

LAB12:    t34 = ((char*)((ng2)));
    t36 = (t0 + 692U);
    t37 = *((char **)t36);
    memset(t35, 0, 8);
    t36 = (t35 + 4);
    t38 = (t37 + 4);
    t39 = *((unsigned int *)t37);
    t40 = (t39 >> 0);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t38);
    t42 = (t41 >> 0);
    *((unsigned int *)t36) = t42;
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 67108863U);
    t44 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t44 & 67108863U);
    t46 = (t0 + 600U);
    t47 = *((char **)t46);
    memset(t45, 0, 8);
    t46 = (t45 + 4);
    t48 = (t47 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (t49 >> 28);
    *((unsigned int *)t45) = t50;
    t51 = *((unsigned int *)t48);
    t52 = (t51 >> 28);
    *((unsigned int *)t46) = t52;
    t53 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t53 & 15U);
    t54 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t54 & 15U);
    xsi_vlogtype_concat(t33, 32, 32, 3U, t45, 4, t35, 26, t34, 2);
    goto LAB13;

LAB14:    t61 = (t0 + 784U);
    t62 = *((char **)t61);
    t61 = ((char*)((ng2)));
    memset(t63, 0, 8);
    t64 = (t62 + 4);
    t65 = (t61 + 4);
    t66 = *((unsigned int *)t62);
    t67 = *((unsigned int *)t61);
    t68 = (t66 ^ t67);
    t69 = *((unsigned int *)t64);
    t70 = *((unsigned int *)t65);
    t71 = (t69 ^ t70);
    t72 = (t68 | t71);
    t73 = *((unsigned int *)t64);
    t74 = *((unsigned int *)t65);
    t75 = (t73 | t74);
    t76 = (~(t75));
    t77 = (t72 & t76);
    if (t77 != 0)
        goto LAB24;

LAB21:    if (t75 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t63) = 1;

LAB24:    memset(t60, 0, 8);
    t79 = (t63 + 4);
    t80 = *((unsigned int *)t79);
    t81 = (~(t80));
    t82 = *((unsigned int *)t63);
    t83 = (t82 & t81);
    t84 = (t83 & 1U);
    if (t84 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t79) != 0)
        goto LAB27;

LAB28:    t86 = (t60 + 4);
    t87 = *((unsigned int *)t60);
    t88 = *((unsigned int *)t86);
    t89 = (t87 || t88);
    if (t89 > 0)
        goto LAB29;

LAB30:    t116 = *((unsigned int *)t60);
    t117 = (~(t116));
    t118 = *((unsigned int *)t86);
    t119 = (t117 || t118);
    if (t119 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t86) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t60) > 0)
        goto LAB35;

LAB36:    memcpy(t59, t120, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t59, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

LAB23:    t78 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t60) = 1;
    goto LAB28;

LAB27:    t85 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB28;

LAB29:    t90 = (t0 + 600U);
    t91 = *((char **)t90);
    t90 = ((char*)((ng2)));
    t94 = (t0 + 692U);
    t95 = *((char **)t94);
    memset(t93, 0, 8);
    t94 = (t93 + 4);
    t96 = (t95 + 4);
    t97 = *((unsigned int *)t95);
    t98 = (t97 >> 0);
    *((unsigned int *)t93) = t98;
    t99 = *((unsigned int *)t96);
    t100 = (t99 >> 0);
    *((unsigned int *)t94) = t100;
    t101 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t101 & 65535U);
    t102 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t102 & 65535U);
    t104 = ((char*)((ng3)));
    t105 = (t0 + 692U);
    t106 = *((char **)t105);
    memset(t107, 0, 8);
    t105 = (t107 + 4);
    t108 = (t106 + 4);
    t109 = *((unsigned int *)t106);
    t110 = (t109 >> 15);
    t111 = (t110 & 1);
    *((unsigned int *)t107) = t111;
    t112 = *((unsigned int *)t108);
    t113 = (t112 >> 15);
    t114 = (t113 & 1);
    *((unsigned int *)t105) = t114;
    xsi_vlog_mul_concat(t103, 14, 1, t104, 1U, t107, 1);
    xsi_vlogtype_concat(t92, 32, 32, 3U, t103, 14, t93, 16, t90, 2);
    memset(t115, 0, 8);
    xsi_vlog_unsigned_add(t115, 32, t91, 32, t92, 32);
    goto LAB30;

LAB31:    t120 = ((char*)((ng4)));
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t59, 32, t115, 32, t120, 32);
    goto LAB37;

LAB35:    memcpy(t59, t115, 8);
    goto LAB37;

}


extern void work_m_00000000000771716391_3146453351_init()
{
	static char *pe[] = {(void *)Cont_31_0};
	xsi_register_didat("work_m_00000000000771716391_3146453351", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000000771716391_3146453351.didat");
	xsi_register_executes(pe);
}
