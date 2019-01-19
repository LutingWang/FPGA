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
static const char *ng0 = "C:/Users/ThinkPad/Documents/ISE/FPGA/mips/mips/cpu/datapath/1_F/F.v";
static int ng1[] = {4, 0};
static unsigned int ng2[] = {16768U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {31U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {2348816163U, 0U};



static void Cont_45_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1704U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 3888);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 3820);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_46_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t21[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
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
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    t1 = (t0 + 3336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1428U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t21, 8);

LAB16:    t35 = (t0 + 3924);
    t42 = (t35 + 32U);
    t43 = *((char **)t42);
    t44 = (t43 + 40U);
    t45 = *((char **)t44);
    memcpy(t45, t3, 8);
    xsi_driver_vfirst_trans(t35, 0, 31);
    t46 = (t0 + 3828);
    *((int *)t46) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = ((char*)((ng2)));
    goto LAB9;

LAB10:    t23 = (t0 + 1520U);
    t24 = *((char **)t23);
    memset(t22, 0, 8);
    t23 = (t24 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t23) != 0)
        goto LAB19;

LAB20:    t31 = (t22 + 4);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB21;

LAB22:    t37 = *((unsigned int *)t22);
    t38 = (~(t37));
    t39 = *((unsigned int *)t31);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t31) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t22) > 0)
        goto LAB27;

LAB28:    memcpy(t21, t41, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t16, 32, t21, 32);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t22) = 1;
    goto LAB20;

LAB19:    t30 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB20;

LAB21:    t35 = (t0 + 1612U);
    t36 = *((char **)t35);
    goto LAB22;

LAB23:    t35 = (t0 + 1980U);
    t41 = *((char **)t35);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t21, 32, t36, 32, t41, 32);
    goto LAB29;

LAB27:    memcpy(t21, t36, 8);
    goto LAB29;

}

static void Always_50_2(char *t0)
{
    char t6[8];
    char t20[8];
    char t27[8];
    char t63[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t64;
    unsigned int t65;
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
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;

LAB0:    t1 = (t0 + 3480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3836);
    *((int *)t2) = 1;
    t3 = (t0 + 3508);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 1152U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    memcpy(t27, t6, 8);

LAB12:    t55 = (t27 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t27);
    t59 = (t58 & t57);
    t60 = (t59 != 0);
    if (t60 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1520U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t2) != 0)
        goto LAB26;

LAB27:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB28;

LAB29:    memcpy(t63, t6, 8);

LAB30:    t62 = (t63 + 4);
    t75 = *((unsigned int *)t62);
    t76 = (~(t75));
    t77 = *((unsigned int *)t63);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1336U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB51;

LAB49:    if (*((unsigned int *)t2) == 0)
        goto LAB48;

LAB50:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB51:    t5 = (t6 + 4);
    t12 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t6) = t15;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB53;

LAB52:    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 1U);
    t24 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t24 & 1U);
    t13 = (t6 + 4);
    t25 = *((unsigned int *)t13);
    t28 = (~(t25));
    t29 = *((unsigned int *)t6);
    t30 = (t29 & t28);
    t34 = (t30 != 0);
    if (t34 > 0)
        goto LAB54;

LAB55:
LAB56:
LAB46:
LAB22:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 1428U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t18 = (t19 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t18) != 0)
        goto LAB15;

LAB16:    t28 = *((unsigned int *)t6);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = (t6 + 4);
    t32 = (t20 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t20) = 1;
    goto LAB16;

LAB15:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB16;

LAB17:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t6 + 4);
    t42 = (t20 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (~(t43));
    t45 = *((unsigned int *)t6);
    t46 = (t45 & t44);
    t47 = *((unsigned int *)t42);
    t48 = (~(t47));
    t49 = *((unsigned int *)t20);
    t50 = (t49 & t48);
    t51 = (~(t46));
    t52 = (~(t50));
    t53 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t53 & t51);
    t54 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t54 & t52);
    goto LAB19;

LAB20:    xsi_set_current_line(51, ng0);

LAB23:    xsi_set_current_line(52, ng0);
    t61 = ((char*)((ng3)));
    t62 = (t0 + 2484);
    xsi_vlogvar_assign_value(t62, t61, 0, 0, 32);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2668);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB22;

LAB24:    *((unsigned int *)t6) = 1;
    goto LAB27;

LAB26:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB27;

LAB28:    t12 = (t0 + 1336U);
    t13 = *((char **)t12);
    memset(t20, 0, 8);
    t12 = (t13 + 4);
    t17 = *((unsigned int *)t12);
    t21 = (~(t17));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB34;

LAB32:    if (*((unsigned int *)t12) == 0)
        goto LAB31;

LAB33:    t18 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t18) = 1;

LAB34:    t19 = (t20 + 4);
    t26 = (t13 + 4);
    t25 = *((unsigned int *)t13);
    t28 = (~(t25));
    *((unsigned int *)t20) = t28;
    *((unsigned int *)t19) = 0;
    if (*((unsigned int *)t26) != 0)
        goto LAB36;

LAB35:    t36 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t36 & 1U);
    t37 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t37 & 1U);
    memset(t27, 0, 8);
    t31 = (t20 + 4);
    t38 = *((unsigned int *)t31);
    t39 = (~(t38));
    t40 = *((unsigned int *)t20);
    t43 = (t40 & t39);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t31) != 0)
        goto LAB39;

LAB40:    t45 = *((unsigned int *)t6);
    t47 = *((unsigned int *)t27);
    t48 = (t45 & t47);
    *((unsigned int *)t63) = t48;
    t33 = (t6 + 4);
    t41 = (t27 + 4);
    t42 = (t63 + 4);
    t49 = *((unsigned int *)t33);
    t51 = *((unsigned int *)t41);
    t52 = (t49 | t51);
    *((unsigned int *)t42) = t52;
    t53 = *((unsigned int *)t42);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB30;

LAB31:    *((unsigned int *)t20) = 1;
    goto LAB34;

LAB36:    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t26);
    *((unsigned int *)t20) = (t29 | t30);
    t34 = *((unsigned int *)t19);
    t35 = *((unsigned int *)t26);
    *((unsigned int *)t19) = (t34 | t35);
    goto LAB35;

LAB37:    *((unsigned int *)t27) = 1;
    goto LAB40;

LAB39:    t32 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB40;

LAB41:    t56 = *((unsigned int *)t63);
    t57 = *((unsigned int *)t42);
    *((unsigned int *)t63) = (t56 | t57);
    t55 = (t6 + 4);
    t61 = (t27 + 4);
    t58 = *((unsigned int *)t6);
    t59 = (~(t58));
    t60 = *((unsigned int *)t55);
    t64 = (~(t60));
    t65 = *((unsigned int *)t27);
    t66 = (~(t65));
    t67 = *((unsigned int *)t61);
    t68 = (~(t67));
    t46 = (t59 & t64);
    t50 = (t66 & t68);
    t69 = (~(t46));
    t70 = (~(t50));
    t71 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t70);
    t73 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t73 & t69);
    t74 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t74 & t70);
    goto LAB43;

LAB44:    xsi_set_current_line(55, ng0);

LAB47:    xsi_set_current_line(56, ng0);
    t80 = ((char*)((ng3)));
    t81 = (t0 + 2484);
    xsi_vlogvar_assign_value(t81, t80, 0, 0, 32);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1612U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t3, 32, t2, 32);
    t4 = (t0 + 2576);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2668);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB46;

LAB48:    *((unsigned int *)t6) = 1;
    goto LAB51;

LAB53:    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t16 | t17);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t5) = (t21 | t22);
    goto LAB52;

LAB54:    xsi_set_current_line(59, ng0);

LAB57:    xsi_set_current_line(60, ng0);
    t18 = (t0 + 2164U);
    t19 = *((char **)t18);
    t18 = ((char*)((ng5)));
    memset(t63, 0, 8);
    t26 = (t19 + 4);
    t31 = (t18 + 4);
    t35 = *((unsigned int *)t19);
    t36 = *((unsigned int *)t18);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t31);
    t40 = (t38 ^ t39);
    t43 = (t37 | t40);
    t44 = *((unsigned int *)t26);
    t45 = *((unsigned int *)t31);
    t47 = (t44 | t45);
    t48 = (~(t47));
    t49 = (t43 & t48);
    if (t49 != 0)
        goto LAB61;

LAB58:    if (t47 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t63) = 1;

LAB61:    memset(t27, 0, 8);
    t33 = (t63 + 4);
    t51 = *((unsigned int *)t33);
    t52 = (~(t51));
    t53 = *((unsigned int *)t63);
    t54 = (t53 & t52);
    t56 = (t54 & 1U);
    if (t56 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t33) != 0)
        goto LAB64;

LAB65:    t42 = (t27 + 4);
    t57 = *((unsigned int *)t27);
    t58 = *((unsigned int *)t42);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB66;

LAB67:    t60 = *((unsigned int *)t27);
    t64 = (~(t60));
    t65 = *((unsigned int *)t42);
    t66 = (t64 || t65);
    if (t66 > 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t42) > 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t27) > 0)
        goto LAB72;

LAB73:    memcpy(t20, t62, 8);

LAB74:    t61 = (t0 + 2484);
    xsi_vlogvar_assign_value(t61, t20, 0, 0, 32);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t2 = (t0 + 2576);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2164U);
    t3 = *((char **)t2);
    t2 = (t0 + 2668);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    goto LAB56;

LAB60:    t32 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB61;

LAB62:    *((unsigned int *)t27) = 1;
    goto LAB65;

LAB64:    t41 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB65;

LAB66:    t55 = ((char*)((ng6)));
    goto LAB67;

LAB68:    t61 = (t0 + 1796U);
    t62 = *((char **)t61);
    goto LAB69;

LAB70:    xsi_vlog_unsigned_bit_combine(t20, 32, t55, 32, t62, 32);
    goto LAB74;

LAB72:    memcpy(t20, t55, 8);
    goto LAB74;

}

static void implSig1_execute(char *t0)
{
    char t4[8];
    char t16[8];
    char t35[8];
    char t43[8];
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
    unsigned int t15;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;

LAB0:    t1 = (t0 + 3624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1428U);
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
    t13 = (!(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    memcpy(t43, t4, 8);

LAB10:    t71 = (t0 + 3960);
    t72 = (t71 + 32U);
    t73 = *((char **)t72);
    t74 = (t73 + 40U);
    t75 = *((char **)t74);
    memset(t75, 0, 8);
    t76 = 1U;
    t77 = t76;
    t78 = (t43 + 4);
    t79 = *((unsigned int *)t43);
    t76 = (t76 & t79);
    t80 = *((unsigned int *)t78);
    t77 = (t77 & t80);
    t81 = (t75 + 4);
    t82 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t82 | t76);
    t83 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t83 | t77);
    xsi_driver_vfirst_trans(t71, 0, 0);
    t84 = (t0 + 3844);
    *((int *)t84) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 1244U);
    t18 = *((char **)t17);
    memset(t16, 0, 8);
    t17 = (t18 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (~(t19));
    t21 = *((unsigned int *)t18);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t17) == 0)
        goto LAB11;

LAB13:    t24 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t24) = 1;

LAB14:    t25 = (t16 + 4);
    t26 = (t18 + 4);
    t27 = *((unsigned int *)t18);
    t28 = (~(t27));
    *((unsigned int *)t16) = t28;
    *((unsigned int *)t25) = 0;
    if (*((unsigned int *)t26) != 0)
        goto LAB16;

LAB15:    t33 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t33 & 1U);
    t34 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t34 & 1U);
    memset(t35, 0, 8);
    t36 = (t16 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t16);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t36) != 0)
        goto LAB19;

LAB20:    t44 = *((unsigned int *)t4);
    t45 = *((unsigned int *)t35);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = (t4 + 4);
    t48 = (t35 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB10;

LAB11:    *((unsigned int *)t16) = 1;
    goto LAB14;

LAB16:    t29 = *((unsigned int *)t16);
    t30 = *((unsigned int *)t26);
    *((unsigned int *)t16) = (t29 | t30);
    t31 = *((unsigned int *)t25);
    t32 = *((unsigned int *)t26);
    *((unsigned int *)t25) = (t31 | t32);
    goto LAB15;

LAB17:    *((unsigned int *)t35) = 1;
    goto LAB20;

LAB19:    t42 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB20;

LAB21:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t4 + 4);
    t58 = (t35 + 4);
    t59 = *((unsigned int *)t57);
    t60 = (~(t59));
    t61 = *((unsigned int *)t4);
    t62 = (t61 & t60);
    t63 = *((unsigned int *)t58);
    t64 = (~(t63));
    t65 = *((unsigned int *)t35);
    t66 = (t65 & t64);
    t67 = (~(t62));
    t68 = (~(t66));
    t69 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t69 & t67);
    t70 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t70 & t68);
    goto LAB23;

}


extern void work_m_00000000004271243498_3904427059_init()
{
	static char *pe[] = {(void *)Cont_45_0,(void *)Cont_46_1,(void *)Always_50_2,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000004271243498_3904427059", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000004271243498_3904427059.didat");
	xsi_register_executes(pe);
}
