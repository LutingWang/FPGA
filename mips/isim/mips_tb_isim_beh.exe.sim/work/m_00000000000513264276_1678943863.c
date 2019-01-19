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
static const char *ng0 = "C:/Users/ThinkPad/Documents/ISE/FPGA/mips/mips/external/timer.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {388169729U, 0U};
static int ng5[] = {0, 0};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {3U, 0U};



static void Cont_49_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t48[8];
    char t49[8];
    char t52[8];
    char t86[8];
    char t87[8];
    char t90[8];
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
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t50;
    char *t51;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t88;
    char *t89;
    char *t91;
    char *t92;
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
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    char *t129;
    char *t130;

LAB0:    t1 = (t0 + 2456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 600U);
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

LAB13:    t44 = *((unsigned int *)t4);
    t45 = (~(t44));
    t46 = *((unsigned int *)t29);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t48, 8);

LAB20:    t125 = (t0 + 3144);
    t126 = (t125 + 32U);
    t127 = *((char **)t126);
    t128 = (t127 + 40U);
    t129 = *((char **)t128);
    memcpy(t129, t3, 8);
    xsi_driver_vfirst_trans(t125, 0, 31);
    t130 = (t0 + 3084);
    *((int *)t130) = 1;

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

LAB12:    t34 = (t0 + 1564);
    t35 = (t34 + 36U);
    t36 = *((char **)t35);
    t37 = (t0 + 1656);
    t38 = (t37 + 36U);
    t39 = *((char **)t38);
    t40 = (t0 + 1472);
    t41 = (t40 + 36U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng1)));
    xsi_vlogtype_concat(t33, 32, 32, 4U, t43, 28, t42, 1, t39, 2, t36, 1);
    goto LAB13;

LAB14:    t50 = (t0 + 600U);
    t51 = *((char **)t50);
    t50 = ((char*)((ng2)));
    memset(t52, 0, 8);
    t53 = (t51 + 4);
    t54 = (t50 + 4);
    t55 = *((unsigned int *)t51);
    t56 = *((unsigned int *)t50);
    t57 = (t55 ^ t56);
    t58 = *((unsigned int *)t53);
    t59 = *((unsigned int *)t54);
    t60 = (t58 ^ t59);
    t61 = (t57 | t60);
    t62 = *((unsigned int *)t53);
    t63 = *((unsigned int *)t54);
    t64 = (t62 | t63);
    t65 = (~(t64));
    t66 = (t61 & t65);
    if (t66 != 0)
        goto LAB24;

LAB21:    if (t64 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t52) = 1;

LAB24:    memset(t49, 0, 8);
    t68 = (t52 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t52);
    t72 = (t71 & t70);
    t73 = (t72 & 1U);
    if (t73 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t68) != 0)
        goto LAB27;

LAB28:    t75 = (t49 + 4);
    t76 = *((unsigned int *)t49);
    t77 = *((unsigned int *)t75);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB29;

LAB30:    t82 = *((unsigned int *)t49);
    t83 = (~(t82));
    t84 = *((unsigned int *)t75);
    t85 = (t83 || t84);
    if (t85 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t75) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t49) > 0)
        goto LAB35;

LAB36:    memcpy(t48, t86, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t48, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

LAB23:    t67 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t49) = 1;
    goto LAB28;

LAB27:    t74 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB28;

LAB29:    t79 = (t0 + 1748);
    t80 = (t79 + 36U);
    t81 = *((char **)t80);
    goto LAB30;

LAB31:    t88 = (t0 + 600U);
    t89 = *((char **)t88);
    t88 = ((char*)((ng3)));
    memset(t90, 0, 8);
    t91 = (t89 + 4);
    t92 = (t88 + 4);
    t93 = *((unsigned int *)t89);
    t94 = *((unsigned int *)t88);
    t95 = (t93 ^ t94);
    t96 = *((unsigned int *)t91);
    t97 = *((unsigned int *)t92);
    t98 = (t96 ^ t97);
    t99 = (t95 | t98);
    t100 = *((unsigned int *)t91);
    t101 = *((unsigned int *)t92);
    t102 = (t100 | t101);
    t103 = (~(t102));
    t104 = (t99 & t103);
    if (t104 != 0)
        goto LAB41;

LAB38:    if (t102 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t90) = 1;

LAB41:    memset(t87, 0, 8);
    t106 = (t90 + 4);
    t107 = *((unsigned int *)t106);
    t108 = (~(t107));
    t109 = *((unsigned int *)t90);
    t110 = (t109 & t108);
    t111 = (t110 & 1U);
    if (t111 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t106) != 0)
        goto LAB44;

LAB45:    t113 = (t87 + 4);
    t114 = *((unsigned int *)t87);
    t115 = *((unsigned int *)t113);
    t116 = (t114 || t115);
    if (t116 > 0)
        goto LAB46;

LAB47:    t120 = *((unsigned int *)t87);
    t121 = (~(t120));
    t122 = *((unsigned int *)t113);
    t123 = (t121 || t122);
    if (t123 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t113) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t87) > 0)
        goto LAB52;

LAB53:    memcpy(t86, t124, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t48, 32, t81, 32, t86, 32);
    goto LAB37;

LAB35:    memcpy(t48, t81, 8);
    goto LAB37;

LAB40:    t105 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t105) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t87) = 1;
    goto LAB45;

LAB44:    t112 = (t87 + 4);
    *((unsigned int *)t87) = 1;
    *((unsigned int *)t112) = 1;
    goto LAB45;

LAB46:    t117 = (t0 + 1840);
    t118 = (t117 + 36U);
    t119 = *((char **)t118);
    goto LAB47;

LAB48:    t124 = ((char*)((ng4)));
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t86, 32, t119, 32, t124, 32);
    goto LAB54;

LAB52:    memcpy(t86, t119, 8);
    goto LAB54;

}

static void Cont_54_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t22[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;

LAB0:    t1 = (t0 + 2600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1932);
    t5 = (t2 + 36U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB7:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t15);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB8;

LAB9:    memcpy(t30, t7, 8);

LAB10:    memset(t4, 0, 8);
    t62 = (t30 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t30);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t62) != 0)
        goto LAB20;

LAB21:    t69 = (t4 + 4);
    t70 = *((unsigned int *)t4);
    t71 = *((unsigned int *)t69);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB22;

LAB23:    t74 = *((unsigned int *)t4);
    t75 = (~(t74));
    t76 = *((unsigned int *)t69);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t69) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t4) > 0)
        goto LAB28;

LAB29:    memcpy(t3, t78, 8);

LAB30:    t79 = (t0 + 3180);
    t80 = (t79 + 32U);
    t81 = *((char **)t80);
    t82 = (t81 + 40U);
    t83 = *((char **)t82);
    memset(t83, 0, 8);
    t84 = 1U;
    t85 = t84;
    t86 = (t3 + 4);
    t87 = *((unsigned int *)t3);
    t84 = (t84 & t87);
    t88 = *((unsigned int *)t86);
    t85 = (t85 & t88);
    t89 = (t83 + 4);
    t90 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t90 | t84);
    t91 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t91 | t85);
    xsi_driver_vfirst_trans(t79, 0, 0);
    t92 = (t0 + 3092);
    *((int *)t92) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB6:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB8:    t19 = (t0 + 1472);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    memset(t22, 0, 8);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t21);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t23) != 0)
        goto LAB13;

LAB14:    t31 = *((unsigned int *)t7);
    t32 = *((unsigned int *)t22);
    t33 = (t31 & t32);
    *((unsigned int *)t30) = t33;
    t34 = (t7 + 4);
    t35 = (t22 + 4);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t34);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t22) = 1;
    goto LAB14;

LAB13:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB14;

LAB15:    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t30) = (t42 | t43);
    t44 = (t7 + 4);
    t45 = (t22 + 4);
    t46 = *((unsigned int *)t7);
    t47 = (~(t46));
    t48 = *((unsigned int *)t44);
    t49 = (~(t48));
    t50 = *((unsigned int *)t22);
    t51 = (~(t50));
    t52 = *((unsigned int *)t45);
    t53 = (~(t52));
    t54 = (t47 & t49);
    t55 = (t51 & t53);
    t56 = (~(t54));
    t57 = (~(t55));
    t58 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t58 & t56);
    t59 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t59 & t57);
    t60 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t60 & t56);
    t61 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t61 & t57);
    goto LAB17;

LAB18:    *((unsigned int *)t4) = 1;
    goto LAB21;

LAB20:    t68 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB21;

LAB22:    t73 = ((char*)((ng2)));
    goto LAB23;

LAB24:    t78 = ((char*)((ng1)));
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t3, 1, t73, 1, t78, 1);
    goto LAB30;

LAB28:    memcpy(t3, t73, 8);
    goto LAB30;

}

static void Initial_56_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    xsi_set_current_line(56, ng0);

LAB2:    xsi_set_current_line(57, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1564);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t1, 1, 0, 2);
    t4 = (t0 + 1472);
    xsi_vlogvar_assign_value(t4, t1, 3, 0, 1);
    xsi_set_current_line(58, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1748);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1840);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(60, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1380);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(61, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 1932);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_63_3(char *t0)
{
    char t14[8];
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
    int t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 2888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3100);
    *((int *)t2) = 1;
    t3 = (t0 + 2916);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(63, ng0);

LAB5:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(74, ng0);

LAB20:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB21:    t11 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t11, 2);
    if (t13 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB28;

LAB29:
LAB30:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(64, ng0);

LAB9:    xsi_set_current_line(65, ng0);
    t11 = ((char*)((ng5)));
    t12 = (t0 + 1932);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 1656);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 2);
    t5 = (t0 + 1472);
    xsi_vlogvar_assign_value(t5, t2, 3, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB8;

LAB10:    xsi_set_current_line(69, ng0);

LAB13:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);

LAB14:    t4 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t13 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB15:    xsi_set_current_line(71, ng0);
    t11 = (t0 + 692U);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    t11 = (t14 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 0);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t11) = t19;
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t20 & 15U);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t21 & 15U);
    t22 = (t0 + 1564);
    xsi_vlogvar_assign_value(t22, t14, 0, 0, 1);
    t23 = (t0 + 1656);
    xsi_vlogvar_assign_value(t23, t14, 1, 0, 2);
    t24 = (t0 + 1472);
    xsi_vlogvar_assign_value(t24, t14, 3, 0, 1);
    goto LAB19;

LAB17:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB19;

LAB22:    xsi_set_current_line(76, ng0);

LAB31:    xsi_set_current_line(77, ng0);
    t12 = (t0 + 1564);
    t15 = (t12 + 36U);
    t22 = *((char **)t15);
    t23 = (t22 + 4);
    t6 = *((unsigned int *)t23);
    t7 = (~(t6));
    t8 = *((unsigned int *)t22);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB32;

LAB33:
LAB34:    goto LAB30;

LAB24:    xsi_set_current_line(82, ng0);

LAB36:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 1748);
    t11 = (t3 + 36U);
    t12 = *((char **)t11);
    t15 = (t0 + 1840);
    xsi_vlogvar_assign_value(t15, t12, 0, 0, 32);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB30;

LAB26:    xsi_set_current_line(86, ng0);

LAB37:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 1840);
    t11 = (t3 + 36U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng6)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t12, 32, t15, 32);
    t22 = (t0 + 1840);
    xsi_vlogvar_assign_value(t22, t14, 0, 0, 32);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t11 = *((char **)t3);
    t12 = ((char*)((ng1)));
    memset(t14, 0, 8);
    t15 = (t11 + 4);
    t22 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t15);
    t10 = *((unsigned int *)t22);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t15);
    t19 = *((unsigned int *)t22);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t26 = (t17 & t21);
    if (t26 != 0)
        goto LAB41;

LAB38:    if (t20 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t14) = 1;

LAB41:    t24 = (t14 + 4);
    t27 = *((unsigned int *)t24);
    t28 = (~(t27));
    t29 = *((unsigned int *)t14);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t11 = *((char **)t3);
    t12 = ((char*)((ng1)));
    memset(t14, 0, 8);
    t15 = (t11 + 4);
    t22 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t15);
    t10 = *((unsigned int *)t22);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t15);
    t19 = *((unsigned int *)t22);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t26 = (t17 & t21);
    if (t26 != 0)
        goto LAB48;

LAB45:    if (t20 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t14) = 1;

LAB48:    t24 = (t14 + 4);
    t27 = *((unsigned int *)t24);
    t28 = (~(t27));
    t29 = *((unsigned int *)t14);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB49;

LAB50:
LAB51:
LAB44:    goto LAB30;

LAB28:    xsi_set_current_line(94, ng0);

LAB53:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 1656);
    t11 = (t3 + 36U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t22 = (t12 + 4);
    t23 = (t15 + 4);
    t6 = *((unsigned int *)t12);
    t7 = *((unsigned int *)t15);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t22);
    t10 = *((unsigned int *)t23);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t26 = (t17 & t21);
    if (t26 != 0)
        goto LAB57;

LAB54:    if (t20 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t14) = 1;

LAB57:    t25 = (t14 + 4);
    t27 = *((unsigned int *)t25);
    t28 = (~(t27));
    t29 = *((unsigned int *)t14);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB58;

LAB59:
LAB60:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t11 = *((char **)t3);
    t12 = ((char*)((ng1)));
    memset(t14, 0, 8);
    t15 = (t11 + 4);
    t22 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t15);
    t10 = *((unsigned int *)t22);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t15);
    t19 = *((unsigned int *)t22);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t26 = (t17 & t21);
    if (t26 != 0)
        goto LAB65;

LAB62:    if (t20 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t14) = 1;

LAB65:    t24 = (t14 + 4);
    t27 = *((unsigned int *)t24);
    t28 = (~(t27));
    t29 = *((unsigned int *)t14);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB66;

LAB67:
LAB68:    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB30;

LAB32:    xsi_set_current_line(77, ng0);

LAB35:    xsi_set_current_line(78, ng0);
    t24 = ((char*)((ng5)));
    t25 = (t0 + 1932);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB34;

LAB40:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(88, ng0);
    t25 = ((char*)((ng1)));
    t32 = (t0 + 1380);
    xsi_vlogvar_assign_value(t32, t25, 0, 0, 2);
    goto LAB44;

LAB47:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(89, ng0);

LAB52:    xsi_set_current_line(90, ng0);
    t25 = ((char*)((ng6)));
    t32 = (t0 + 1932);
    xsi_vlogvar_assign_value(t32, t25, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB51;

LAB56:    t24 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(95, ng0);

LAB61:    xsi_set_current_line(96, ng0);
    t32 = ((char*)((ng5)));
    t33 = (t0 + 1932);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 1);
    goto LAB60;

LAB64:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(99, ng0);
    t25 = ((char*)((ng5)));
    t32 = (t0 + 1564);
    xsi_vlogvar_assign_value(t32, t25, 0, 0, 1);
    goto LAB68;

}


extern void work_m_00000000000513264276_1678943863_init()
{
	static char *pe[] = {(void *)Cont_49_0,(void *)Cont_54_1,(void *)Initial_56_2,(void *)Always_63_3};
	xsi_register_didat("work_m_00000000000513264276_1678943863", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000000513264276_1678943863.didat");
	xsi_register_executes(pe);
}
