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
static const char *ng0 = "C:/Users/ThinkPad/Documents/ISE/FPGA/mips/mips/external/MiniUART/rxd.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {6U, 0U};
static unsigned int ng5[] = {7U, 0U};
static unsigned int ng6[] = {2U, 0U};
static int ng7[] = {1, 0};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {4U, 0U};
static int ng10[] = {8, 0};
static int ng11[] = {2, 0};



static void Cont_31_0(char *t0)
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

LAB0:    t1 = (t0 + 2856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1872);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3856);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
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
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 3772);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_32_1(char *t0)
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

LAB0:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2240);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3892);
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
    t18 = (t0 + 3780);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_35_2(char *t0)
{
    char t14[8];
    char t31[8];
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
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;

LAB0:    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3788);
    *((int *)t2) = 1;
    t3 = (t0 + 3172);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1552U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1092U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:
LAB11:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(37, ng0);

LAB8:    xsi_set_current_line(38, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1964);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2056);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2148);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1872);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB7;

LAB9:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1964);
    t5 = (t4 + 36U);
    t11 = *((char **)t5);

LAB12:    t12 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 3, t12, 32);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 3, t2, 32);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 3, t2, 32);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 3, t2, 32);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 3, t2, 32);
    if (t13 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1964);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB25:    goto LAB11;

LAB13:    xsi_set_current_line(46, ng0);

LAB26:    xsi_set_current_line(47, ng0);
    t15 = (t0 + 1000U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t15 = (t16 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (~(t17));
    t19 = *((unsigned int *)t16);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB30;

LAB28:    if (*((unsigned int *)t15) == 0)
        goto LAB27;

LAB29:    t22 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t22) = 1;

LAB30:    t23 = (t14 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t14);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB31;

LAB32:
LAB33:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2056);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2148);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB25;

LAB15:    xsi_set_current_line(52, ng0);

LAB34:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1644U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB35;

LAB36:
LAB37:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2056);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t4, 3, t5, 32);
    t12 = (t0 + 2056);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 3, 0LL);
    goto LAB25;

LAB17:    xsi_set_current_line(57, ng0);

LAB51:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1644U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB52;

LAB53:
LAB54:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2056);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t4, 3, t5, 32);
    t12 = (t0 + 2056);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 3, 0LL);
    goto LAB25;

LAB19:    xsi_set_current_line(67, ng0);

LAB63:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 1644U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB64;

LAB65:
LAB66:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2056);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t4, 3, t5, 32);
    t12 = (t0 + 2056);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 3, 0LL);
    goto LAB25;

LAB21:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 1000U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB70;

LAB71:
LAB72:    goto LAB25;

LAB27:    *((unsigned int *)t14) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(48, ng0);
    t29 = ((char*)((ng3)));
    t30 = (t0 + 1964);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 3, 0LL);
    goto LAB33;

LAB35:    xsi_set_current_line(54, ng0);
    t5 = (t0 + 1000U);
    t12 = *((char **)t5);
    memset(t31, 0, 8);
    t5 = (t12 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t5) != 0)
        goto LAB40;

LAB41:    t16 = (t31 + 4);
    t24 = *((unsigned int *)t31);
    t25 = *((unsigned int *)t16);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB42;

LAB43:    t27 = *((unsigned int *)t31);
    t28 = (~(t27));
    t32 = *((unsigned int *)t16);
    t33 = (t28 || t32);
    if (t33 > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t16) > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t31) > 0)
        goto LAB48;

LAB49:    memcpy(t14, t23, 8);

LAB50:    t29 = (t0 + 1964);
    xsi_vlogvar_wait_assign_value(t29, t14, 0, 0, 3, 0LL);
    goto LAB37;

LAB38:    *((unsigned int *)t31) = 1;
    goto LAB41;

LAB40:    t15 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB41;

LAB42:    t22 = ((char*)((ng1)));
    goto LAB43;

LAB44:    t23 = ((char*)((ng6)));
    goto LAB45;

LAB46:    xsi_vlog_unsigned_bit_combine(t14, 32, t22, 32, t23, 32);
    goto LAB50;

LAB48:    memcpy(t14, t22, 8);
    goto LAB50;

LAB52:    xsi_set_current_line(59, ng0);

LAB55:    xsi_set_current_line(60, ng0);
    t5 = (t0 + 2148);
    t12 = (t5 + 36U);
    t15 = *((char **)t12);
    t16 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t22 = (t15 + 4);
    t23 = (t16 + 4);
    t17 = *((unsigned int *)t15);
    t18 = *((unsigned int *)t16);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t22);
    t21 = *((unsigned int *)t23);
    t24 = (t20 ^ t21);
    t25 = (t19 | t24);
    t26 = *((unsigned int *)t22);
    t27 = *((unsigned int *)t23);
    t28 = (t26 | t27);
    t32 = (~(t28));
    t33 = (t25 & t32);
    if (t33 != 0)
        goto LAB59;

LAB56:    if (t28 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t14) = 1;

LAB59:    t30 = (t14 + 4);
    t34 = *((unsigned int *)t30);
    t35 = (~(t34));
    t36 = *((unsigned int *)t14);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB60;

LAB61:
LAB62:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2148);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t4, 3, t5, 32);
    t12 = (t0 + 2148);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 3, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1872);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t5 = (t31 + 4);
    t12 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    *((unsigned int *)t31) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 1);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t10 & 127U);
    t17 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t17 & 127U);
    t15 = (t0 + 1000U);
    t16 = *((char **)t15);
    xsi_vlogtype_concat(t14, 8, 8, 2U, t16, 1, t31, 7);
    t15 = (t0 + 1872);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 8, 0LL);
    goto LAB54;

LAB58:    t29 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(61, ng0);
    t39 = ((char*)((ng8)));
    t40 = (t0 + 1964);
    xsi_vlogvar_wait_assign_value(t40, t39, 0, 0, 3, 0LL);
    goto LAB62;

LAB64:    xsi_set_current_line(69, ng0);
    t5 = (t0 + 1000U);
    t12 = *((char **)t5);
    t5 = (t12 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1964);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB69:    goto LAB66;

LAB67:    xsi_set_current_line(70, ng0);
    t15 = ((char*)((ng1)));
    t16 = (t0 + 1964);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 3, 0LL);
    goto LAB69;

LAB70:    xsi_set_current_line(76, ng0);
    t5 = ((char*)((ng1)));
    t12 = (t0 + 1964);
    xsi_vlogvar_wait_assign_value(t12, t5, 0, 0, 3, 0LL);
    goto LAB72;

}

static void Always_83_3(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t24[8];
    char t38[8];
    char t45[8];
    char t77[8];
    char t91[8];
    char t98[8];
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
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
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
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
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
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    int t122;
    int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;

LAB0:    t1 = (t0 + 3288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3796);
    *((int *)t2) = 1;
    t3 = (t0 + 3316);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(84, ng0);
    t4 = (t0 + 1552U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1964);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t15, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t12);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB11;

LAB8:    if (t20 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t15) = 1;

LAB11:    memset(t24, 0, 8);
    t25 = (t15 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t15);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t25) != 0)
        goto LAB14;

LAB15:    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB16;

LAB17:    memcpy(t45, t24, 8);

LAB18:    memset(t77, 0, 8);
    t78 = (t45 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t45);
    t82 = (t81 & t80);
    t83 = (t82 & 1U);
    if (t83 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t78) != 0)
        goto LAB28;

LAB29:    t85 = (t77 + 4);
    t86 = *((unsigned int *)t77);
    t87 = *((unsigned int *)t85);
    t88 = (t86 || t87);
    if (t88 > 0)
        goto LAB30;

LAB31:    memcpy(t98, t77, 8);

LAB32:    memset(t14, 0, 8);
    t130 = (t98 + 4);
    t131 = *((unsigned int *)t130);
    t132 = (~(t131));
    t133 = *((unsigned int *)t98);
    t134 = (t133 & t132);
    t135 = (t134 & 1U);
    if (t135 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t130) != 0)
        goto LAB42;

LAB43:    t137 = (t14 + 4);
    t138 = *((unsigned int *)t14);
    t139 = *((unsigned int *)t137);
    t140 = (t138 || t139);
    if (t140 > 0)
        goto LAB44;

LAB45:    t142 = *((unsigned int *)t14);
    t143 = (~(t142));
    t144 = *((unsigned int *)t137);
    t145 = (t143 || t144);
    if (t145 > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t137) > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t14) > 0)
        goto LAB50;

LAB51:    memcpy(t13, t146, 8);

LAB52:    t147 = (t0 + 2332);
    xsi_vlogvar_wait_assign_value(t147, t13, 0, 0, 1, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(85, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2332);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB7;

LAB10:    t23 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB11;

LAB12:    *((unsigned int *)t24) = 1;
    goto LAB15;

LAB14:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB15;

LAB16:    t36 = (t0 + 1644U);
    t37 = *((char **)t36);
    memset(t38, 0, 8);
    t36 = (t37 + 4);
    t39 = *((unsigned int *)t36);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t36) != 0)
        goto LAB21;

LAB22:    t46 = *((unsigned int *)t24);
    t47 = *((unsigned int *)t38);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t49 = (t24 + 4);
    t50 = (t38 + 4);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB18;

LAB19:    *((unsigned int *)t38) = 1;
    goto LAB22;

LAB21:    t44 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB22;

LAB23:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t24 + 4);
    t60 = (t38 + 4);
    t61 = *((unsigned int *)t24);
    t62 = (~(t61));
    t63 = *((unsigned int *)t59);
    t64 = (~(t63));
    t65 = *((unsigned int *)t38);
    t66 = (~(t65));
    t67 = *((unsigned int *)t60);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t73 & t71);
    t74 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t74 & t72);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t72);
    goto LAB25;

LAB26:    *((unsigned int *)t77) = 1;
    goto LAB29;

LAB28:    t84 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB29;

LAB30:    t89 = (t0 + 1000U);
    t90 = *((char **)t89);
    memset(t91, 0, 8);
    t89 = (t90 + 4);
    t92 = *((unsigned int *)t89);
    t93 = (~(t92));
    t94 = *((unsigned int *)t90);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t89) != 0)
        goto LAB35;

LAB36:    t99 = *((unsigned int *)t77);
    t100 = *((unsigned int *)t91);
    t101 = (t99 & t100);
    *((unsigned int *)t98) = t101;
    t102 = (t77 + 4);
    t103 = (t91 + 4);
    t104 = (t98 + 4);
    t105 = *((unsigned int *)t102);
    t106 = *((unsigned int *)t103);
    t107 = (t105 | t106);
    *((unsigned int *)t104) = t107;
    t108 = *((unsigned int *)t104);
    t109 = (t108 != 0);
    if (t109 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB32;

LAB33:    *((unsigned int *)t91) = 1;
    goto LAB36;

LAB35:    t97 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB36;

LAB37:    t110 = *((unsigned int *)t98);
    t111 = *((unsigned int *)t104);
    *((unsigned int *)t98) = (t110 | t111);
    t112 = (t77 + 4);
    t113 = (t91 + 4);
    t114 = *((unsigned int *)t77);
    t115 = (~(t114));
    t116 = *((unsigned int *)t112);
    t117 = (~(t116));
    t118 = *((unsigned int *)t91);
    t119 = (~(t118));
    t120 = *((unsigned int *)t113);
    t121 = (~(t120));
    t122 = (t115 & t117);
    t123 = (t119 & t121);
    t124 = (~(t122));
    t125 = (~(t123));
    t126 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t126 & t124);
    t127 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t127 & t125);
    t128 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t128 & t124);
    t129 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t129 & t125);
    goto LAB39;

LAB40:    *((unsigned int *)t14) = 1;
    goto LAB43;

LAB42:    t136 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t136) = 1;
    goto LAB43;

LAB44:    t141 = ((char*)((ng3)));
    goto LAB45;

LAB46:    t146 = ((char*)((ng1)));
    goto LAB47;

LAB48:    xsi_vlog_unsigned_bit_combine(t13, 1, t141, 1, t146, 1);
    goto LAB52;

LAB50:    memcpy(t13, t141, 8);
    goto LAB52;

}

static void Always_89_4(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;

LAB0:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3804);
    *((int *)t2) = 1;
    t3 = (t0 + 3460);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(90, ng0);
    t4 = (t0 + 1552U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t6 = *((char **)t4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 | t9);
    *((unsigned int *)t7) = t10;
    t4 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB5;

LAB6:
LAB7:    t34 = (t7 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t7);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB10:    goto LAB2;

LAB5:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = *((unsigned int *)t21);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (~(t25));
    t31 = (~(t29));
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t30);
    t33 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t33 & t31);
    goto LAB7;

LAB8:    xsi_set_current_line(91, ng0);
    t40 = ((char*)((ng1)));
    t41 = (t0 + 2240);
    xsi_vlogvar_wait_assign_value(t41, t40, 0, 0, 1, 0LL);
    goto LAB10;

}

static void Cont_96_5(char *t0)
{
    char t7[8];
    char t9[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t11;
    char *t12;
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
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2056);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    t6 = ((char*)((ng11)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_divide(t7, 32, t5, 32, t6, 32);
    t8 = ((char*)((ng7)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t7, 32, t8, 32);
    memset(t10, 0, 8);
    t11 = (t4 + 4);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB7;

LAB4:    if (t22 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t10) = 1;

LAB7:    t26 = (t0 + 3928);
    t27 = (t26 + 32U);
    t28 = *((char **)t27);
    t29 = (t28 + 40U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 1U;
    t32 = t31;
    t33 = (t10 + 4);
    t34 = *((unsigned int *)t10);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t26, 0, 0);
    t39 = (t0 + 3812);
    *((int *)t39) = 1;

LAB1:    return;
LAB6:    t25 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB7;

}


extern void work_m_00000000000575230568_0513670005_init()
{
	static char *pe[] = {(void *)Cont_31_0,(void *)Cont_32_1,(void *)Always_35_2,(void *)Always_83_3,(void *)Always_89_4,(void *)Cont_96_5};
	xsi_register_didat("work_m_00000000000575230568_0513670005", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000000575230568_0513670005.didat");
	xsi_register_executes(pe);
}
