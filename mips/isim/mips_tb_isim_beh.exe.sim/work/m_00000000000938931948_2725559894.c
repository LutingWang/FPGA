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
static const char *ng0 = "C:/Users/ThinkPad/Documents/ISE/FPGA/mips/mips/cpu/datapath/3_E/alu.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {30, 0};
static int ng5[] = {31, 0};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {6U, 0U};
static unsigned int ng11[] = {7U, 0U};
static unsigned int ng12[] = {8U, 0U};
static unsigned int ng13[] = {9U, 0U};
static int ng14[] = {1, 0};
static unsigned int ng15[] = {10U, 0U};
static unsigned int ng16[] = {11U, 0U};
static unsigned int ng17[] = {12U, 0U};
static unsigned int ng18[] = {388169984U, 0U};
static unsigned int ng19[] = {13U, 0U};
static unsigned int ng20[] = {388169985U, 0U};
static unsigned int ng21[] = {14U, 0U};
static unsigned int ng22[] = {388170000U, 0U};
static unsigned int ng23[] = {15U, 0U};
static unsigned int ng24[] = {388169744U, 0U};



static void Cont_35_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 31);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 2632);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 2572);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_36_1(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t1 = (t0 + 2232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1196);
    t5 = (t2 + 36U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 4294967295U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    memset(t3, 0, 8);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t14) == 0)
        goto LAB8;

LAB10:    t20 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t20) = 1;

LAB11:    t21 = (t3 + 4);
    t22 = (t4 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    *((unsigned int *)t3) = t24;
    *((unsigned int *)t21) = 0;
    if (*((unsigned int *)t22) != 0)
        goto LAB13;

LAB12:    t29 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t29 & 1U);
    t30 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t30 & 1U);
    t31 = (t0 + 2668);
    t32 = (t31 + 32U);
    t33 = *((char **)t32);
    t34 = (t33 + 40U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 1U;
    t37 = t36;
    t38 = (t3 + 4);
    t39 = *((unsigned int *)t3);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t31, 0, 0);
    t44 = (t0 + 2580);
    *((int *)t44) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t3) = 1;
    goto LAB11;

LAB13:    t25 = *((unsigned int *)t3);
    t26 = *((unsigned int *)t22);
    *((unsigned int *)t3) = (t25 | t26);
    t27 = *((unsigned int *)t21);
    t28 = *((unsigned int *)t22);
    *((unsigned int *)t21) = (t27 | t28);
    goto LAB12;

}

static void Always_41_2(char *t0)
{
    char t9[8];
    char t16[8];
    char t25[8];
    char t27[8];
    char t28[8];
    char t29[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
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
    unsigned int t24;
    char *t26;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    int t37;
    char *t38;
    unsigned int t39;
    int t40;
    int t41;
    char *t42;
    unsigned int t43;
    int t44;
    int t45;
    unsigned int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
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
    char *t66;

LAB0:    t1 = (t0 + 2376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2588);
    *((int *)t2) = 1;
    t3 = (t0 + 2404);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB2;

LAB7:    xsi_set_current_line(43, ng0);

LAB40:    xsi_set_current_line(44, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 1196);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB9:    xsi_set_current_line(49, ng0);

LAB41:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 2147483647U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 2147483647U);
    t8 = (t0 + 692U);
    t17 = *((char **)t8);
    memset(t16, 0, 8);
    t8 = (t16 + 4);
    t18 = (t17 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (t19 >> 0);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t8) = t22;
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 2147483647U);
    t24 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t24 & 2147483647U);
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 32, t9, 32, t16, 32);
    t26 = (t0 + 1196);
    t30 = (t0 + 1196);
    t31 = (t30 + 44U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng4)));
    t34 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t27, t28, t29, ((int*)(t32)), 2, t33, 32, 1, t34, 32, 1);
    t35 = (t27 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = (t28 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (!(t39));
    t41 = (t37 && t40);
    t42 = (t29 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (!(t43));
    t45 = (t41 && t44);
    if (t45 == 1)
        goto LAB42;

LAB43:    t52 = (t0 + 1472);
    xsi_vlogvar_assign_value(t52, t25, 31, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 576U);
    t4 = (t2 + 44U);
    t7 = *((char **)t4);
    t8 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t9, 2, t3, t7, 2, t8, 32, 1);
    t17 = (t0 + 692U);
    t18 = *((char **)t17);
    t17 = (t0 + 668U);
    t26 = (t17 + 44U);
    t30 = *((char **)t26);
    t31 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t16, 2, t18, t30, 2, t31, 32, 1);
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 2, t9, 2, t16, 2);
    t32 = (t0 + 1472);
    t33 = (t32 + 36U);
    t34 = *((char **)t33);
    memset(t27, 0, 8);
    xsi_vlog_unsigned_add(t27, 2, t25, 2, t34, 1);
    t35 = (t0 + 1196);
    t38 = (t0 + 1196);
    t42 = (t38 + 44U);
    t52 = *((char **)t42);
    t53 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t28, t52, 2, t53, 32, 1);
    t54 = (t28 + 4);
    t10 = *((unsigned int *)t54);
    t6 = (!(t10));
    if (t6 == 1)
        goto LAB44;

LAB45:    t55 = (t0 + 1380);
    xsi_vlogvar_assign_value(t55, t27, 1, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = (t0 + 1380);
    t8 = (t7 + 36U);
    t17 = *((char **)t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t17);
    t12 = (t10 ^ t11);
    *((unsigned int *)t9) = t12;
    t18 = (t4 + 4);
    t26 = (t17 + 4);
    t30 = (t9 + 4);
    t13 = *((unsigned int *)t18);
    t14 = *((unsigned int *)t26);
    t15 = (t13 | t14);
    *((unsigned int *)t30) = t15;
    t19 = *((unsigned int *)t30);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB46;

LAB47:
LAB48:    t31 = (t0 + 1288);
    xsi_vlogvar_assign_value(t31, t9, 0, 0, 1);
    goto LAB39;

LAB11:    xsi_set_current_line(54, ng0);

LAB49:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 2147483647U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 2147483647U);
    t8 = (t0 + 692U);
    t17 = *((char **)t8);
    memset(t16, 0, 8);
    t8 = (t16 + 4);
    t18 = (t17 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (t19 >> 0);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t8) = t22;
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 2147483647U);
    t24 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t24 & 2147483647U);
    memset(t25, 0, 8);
    xsi_vlog_unsigned_minus(t25, 32, t9, 32, t16, 32);
    t26 = (t0 + 1196);
    t30 = (t0 + 1196);
    t31 = (t30 + 44U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng4)));
    t34 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t27, t28, t29, ((int*)(t32)), 2, t33, 32, 1, t34, 32, 1);
    t35 = (t27 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = (t28 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (!(t39));
    t41 = (t37 && t40);
    t42 = (t29 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (!(t43));
    t45 = (t41 && t44);
    if (t45 == 1)
        goto LAB50;

LAB51:    t52 = (t0 + 1472);
    xsi_vlogvar_assign_value(t52, t25, 31, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 576U);
    t4 = (t2 + 44U);
    t7 = *((char **)t4);
    t8 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t9, 2, t3, t7, 2, t8, 32, 1);
    t17 = (t0 + 692U);
    t18 = *((char **)t17);
    t17 = (t0 + 668U);
    t26 = (t17 + 44U);
    t30 = *((char **)t26);
    t31 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t16, 2, t18, t30, 2, t31, 32, 1);
    memset(t25, 0, 8);
    xsi_vlog_unsigned_minus(t25, 2, t9, 2, t16, 2);
    t32 = (t0 + 1472);
    t33 = (t32 + 36U);
    t34 = *((char **)t33);
    memset(t27, 0, 8);
    xsi_vlog_unsigned_minus(t27, 2, t25, 2, t34, 1);
    t35 = (t0 + 1196);
    t38 = (t0 + 1196);
    t42 = (t38 + 44U);
    t52 = *((char **)t42);
    t53 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t28, t52, 2, t53, 32, 1);
    t54 = (t28 + 4);
    t10 = *((unsigned int *)t54);
    t6 = (!(t10));
    if (t6 == 1)
        goto LAB52;

LAB53:    t55 = (t0 + 1380);
    xsi_vlogvar_assign_value(t55, t27, 1, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = (t0 + 1380);
    t8 = (t7 + 36U);
    t17 = *((char **)t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t17);
    t12 = (t10 ^ t11);
    *((unsigned int *)t9) = t12;
    t18 = (t4 + 4);
    t26 = (t17 + 4);
    t30 = (t9 + 4);
    t13 = *((unsigned int *)t18);
    t14 = *((unsigned int *)t26);
    t15 = (t13 | t14);
    *((unsigned int *)t30) = t15;
    t19 = *((unsigned int *)t30);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB54;

LAB55:
LAB56:    t31 = (t0 + 1288);
    xsi_vlogvar_assign_value(t31, t9, 0, 0, 1);
    goto LAB39;

LAB13:    xsi_set_current_line(59, ng0);

LAB57:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t7);
    t12 = (t10 & t11);
    *((unsigned int *)t9) = t12;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t17 = (t9 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t8);
    t15 = (t13 | t14);
    *((unsigned int *)t17) = t15;
    t19 = *((unsigned int *)t17);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB58;

LAB59:
LAB60:    t30 = (t0 + 1196);
    xsi_vlogvar_assign_value(t30, t9, 0, 0, 32);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB15:    xsi_set_current_line(65, ng0);

LAB61:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t7);
    t12 = (t10 | t11);
    *((unsigned int *)t9) = t12;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t17 = (t9 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t8);
    t15 = (t13 | t14);
    *((unsigned int *)t17) = t15;
    t19 = *((unsigned int *)t17);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB62;

LAB63:
LAB64:    t30 = (t0 + 1196);
    xsi_vlogvar_assign_value(t30, t9, 0, 0, 32);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB17:    xsi_set_current_line(71, ng0);

LAB65:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t7);
    t12 = (t10 | t11);
    *((unsigned int *)t16) = t12;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t17 = (t16 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t8);
    t15 = (t13 | t14);
    *((unsigned int *)t17) = t15;
    t19 = *((unsigned int *)t17);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB66;

LAB67:
LAB68:    memset(t9, 0, 8);
    t30 = (t9 + 4);
    t31 = (t16 + 4);
    t58 = *((unsigned int *)t16);
    t59 = (~(t58));
    *((unsigned int *)t9) = t59;
    *((unsigned int *)t30) = 0;
    if (*((unsigned int *)t31) != 0)
        goto LAB70;

LAB69:    t64 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t64 & 4294967295U);
    t65 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t65 & 4294967295U);
    t32 = (t0 + 1196);
    xsi_vlogvar_assign_value(t32, t9, 0, 0, 32);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB19:    xsi_set_current_line(77, ng0);

LAB71:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t7);
    t12 = (t10 ^ t11);
    *((unsigned int *)t9) = t12;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t17 = (t9 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t8);
    t15 = (t13 | t14);
    *((unsigned int *)t17) = t15;
    t19 = *((unsigned int *)t17);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB72;

LAB73:
LAB74:    t18 = (t0 + 1196);
    xsi_vlogvar_assign_value(t18, t9, 0, 0, 32);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB21:    xsi_set_current_line(83, ng0);

LAB75:    xsi_set_current_line(84, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t28, 0, 8);
    xsi_vlog_signed_less(t28, 32, t4, 32, t7, 32);
    memset(t16, 0, 8);
    t3 = (t28 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t28);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t3) != 0)
        goto LAB78;

LAB79:    t17 = (t16 + 4);
    t15 = *((unsigned int *)t16);
    t19 = *((unsigned int *)t17);
    t20 = (t15 || t19);
    if (t20 > 0)
        goto LAB80;

LAB81:    t21 = *((unsigned int *)t16);
    t22 = (~(t21));
    t23 = *((unsigned int *)t17);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t17) > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t16) > 0)
        goto LAB86;

LAB87:    memcpy(t9, t26, 8);

LAB88:    t30 = (t0 + 1196);
    xsi_vlogvar_assign_value(t30, t9, 0, 0, 32);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB23:    xsi_set_current_line(89, ng0);

LAB89:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t28, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB91;

LAB90:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB91;

LAB94:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB92;

LAB93:    memset(t16, 0, 8);
    t18 = (t28 + 4);
    t10 = *((unsigned int *)t18);
    t11 = (~(t10));
    t12 = *((unsigned int *)t28);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t18) != 0)
        goto LAB97;

LAB98:    t30 = (t16 + 4);
    t15 = *((unsigned int *)t16);
    t19 = *((unsigned int *)t30);
    t20 = (t15 || t19);
    if (t20 > 0)
        goto LAB99;

LAB100:    t21 = *((unsigned int *)t16);
    t22 = (~(t21));
    t23 = *((unsigned int *)t30);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t30) > 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t16) > 0)
        goto LAB105;

LAB106:    memcpy(t9, t32, 8);

LAB107:    t33 = (t0 + 1196);
    xsi_vlogvar_assign_value(t33, t9, 0, 0, 32);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB25:    xsi_set_current_line(95, ng0);

LAB108:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(97, ng0);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB109:    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = (t0 + 600U);
    t8 = *((char **)t7);
    memset(t16, 0, 8);
    t7 = (t16 + 4);
    t17 = (t8 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (t10 >> 0);
    *((unsigned int *)t16) = t11;
    t12 = *((unsigned int *)t17);
    t13 = (t12 >> 0);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t14 & 31U);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 31U);
    xsi_vlogtype_zero_extend(t9, 32, t16, 5);
    memset(t25, 0, 8);
    t18 = (t4 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB111;

LAB110:    t26 = (t9 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB111;

LAB114:    if (*((unsigned int *)t4) < *((unsigned int *)t9))
        goto LAB112;

LAB113:    t31 = (t25 + 4);
    t19 = *((unsigned int *)t31);
    t20 = (~(t19));
    t21 = *((unsigned int *)t25);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB115;

LAB116:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB27:    xsi_set_current_line(102, ng0);

LAB117:    xsi_set_current_line(103, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(104, ng0);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB118:    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = (t0 + 600U);
    t8 = *((char **)t7);
    memset(t16, 0, 8);
    t7 = (t16 + 4);
    t17 = (t8 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (t10 >> 0);
    *((unsigned int *)t16) = t11;
    t12 = *((unsigned int *)t17);
    t13 = (t12 >> 0);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t14 & 31U);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 31U);
    xsi_vlogtype_zero_extend(t9, 32, t16, 5);
    memset(t25, 0, 8);
    t18 = (t4 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB120;

LAB119:    t26 = (t9 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB120;

LAB123:    if (*((unsigned int *)t4) < *((unsigned int *)t9))
        goto LAB121;

LAB122:    t31 = (t25 + 4);
    t19 = *((unsigned int *)t31);
    t20 = (~(t19));
    t21 = *((unsigned int *)t25);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB124;

LAB125:    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB29:    xsi_set_current_line(109, ng0);

LAB126:    xsi_set_current_line(110, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(111, ng0);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB127:    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = (t0 + 600U);
    t8 = *((char **)t7);
    memset(t16, 0, 8);
    t7 = (t16 + 4);
    t17 = (t8 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (t10 >> 0);
    *((unsigned int *)t16) = t11;
    t12 = *((unsigned int *)t17);
    t13 = (t12 >> 0);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t14 & 31U);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 31U);
    xsi_vlogtype_zero_extend(t9, 32, t16, 5);
    memset(t25, 0, 8);
    t18 = (t4 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB129;

LAB128:    t26 = (t9 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB129;

LAB132:    if (*((unsigned int *)t4) < *((unsigned int *)t9))
        goto LAB130;

LAB131:    t31 = (t25 + 4);
    t19 = *((unsigned int *)t31);
    t20 = (~(t19));
    t21 = *((unsigned int *)t25);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB133;

LAB134:    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB31:    xsi_set_current_line(116, ng0);

LAB135:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB33:    xsi_set_current_line(122, ng0);

LAB136:    xsi_set_current_line(123, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB35:    xsi_set_current_line(128, ng0);

LAB137:    xsi_set_current_line(129, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB37:    xsi_set_current_line(134, ng0);

LAB138:    xsi_set_current_line(135, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB42:    t46 = *((unsigned int *)t29);
    t47 = (t46 + 0);
    t48 = *((unsigned int *)t27);
    t49 = *((unsigned int *)t28);
    t50 = (t48 - t49);
    t51 = (t50 + 1);
    xsi_vlogvar_assign_value(t26, t25, t47, *((unsigned int *)t28), t51);
    goto LAB43;

LAB44:    xsi_vlogvar_assign_value(t35, t27, 0, *((unsigned int *)t28), 1);
    goto LAB45;

LAB46:    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t30);
    *((unsigned int *)t9) = (t21 | t22);
    goto LAB48;

LAB50:    t46 = *((unsigned int *)t29);
    t47 = (t46 + 0);
    t48 = *((unsigned int *)t27);
    t49 = *((unsigned int *)t28);
    t50 = (t48 - t49);
    t51 = (t50 + 1);
    xsi_vlogvar_assign_value(t26, t25, t47, *((unsigned int *)t28), t51);
    goto LAB51;

LAB52:    xsi_vlogvar_assign_value(t35, t27, 0, *((unsigned int *)t28), 1);
    goto LAB53;

LAB54:    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t30);
    *((unsigned int *)t9) = (t21 | t22);
    goto LAB56;

LAB58:    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t17);
    *((unsigned int *)t9) = (t21 | t22);
    t18 = (t4 + 4);
    t26 = (t7 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t36 = *((unsigned int *)t18);
    t39 = (~(t36));
    t43 = *((unsigned int *)t7);
    t46 = (~(t43));
    t48 = *((unsigned int *)t26);
    t49 = (~(t48));
    t37 = (t24 & t39);
    t40 = (t46 & t49);
    t56 = (~(t37));
    t57 = (~(t40));
    t58 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t58 & t56);
    t59 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t59 & t57);
    t60 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t60 & t56);
    t61 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t61 & t57);
    goto LAB60;

LAB62:    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t17);
    *((unsigned int *)t9) = (t21 | t22);
    t18 = (t4 + 4);
    t26 = (t7 + 4);
    t23 = *((unsigned int *)t18);
    t24 = (~(t23));
    t36 = *((unsigned int *)t4);
    t37 = (t36 & t24);
    t39 = *((unsigned int *)t26);
    t43 = (~(t39));
    t46 = *((unsigned int *)t7);
    t40 = (t46 & t43);
    t48 = (~(t37));
    t49 = (~(t40));
    t56 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t56 & t48);
    t57 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t57 & t49);
    goto LAB64;

LAB66:    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t21 | t22);
    t18 = (t4 + 4);
    t26 = (t7 + 4);
    t23 = *((unsigned int *)t18);
    t24 = (~(t23));
    t36 = *((unsigned int *)t4);
    t37 = (t36 & t24);
    t39 = *((unsigned int *)t26);
    t43 = (~(t39));
    t46 = *((unsigned int *)t7);
    t40 = (t46 & t43);
    t48 = (~(t37));
    t49 = (~(t40));
    t56 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t56 & t48);
    t57 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t57 & t49);
    goto LAB68;

LAB70:    t60 = *((unsigned int *)t9);
    t61 = *((unsigned int *)t31);
    *((unsigned int *)t9) = (t60 | t61);
    t62 = *((unsigned int *)t30);
    t63 = *((unsigned int *)t31);
    *((unsigned int *)t30) = (t62 | t63);
    goto LAB69;

LAB72:    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t17);
    *((unsigned int *)t9) = (t21 | t22);
    goto LAB74;

LAB76:    *((unsigned int *)t16) = 1;
    goto LAB79;

LAB78:    t8 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB79;

LAB80:    t18 = ((char*)((ng3)));
    goto LAB81;

LAB82:    t26 = ((char*)((ng1)));
    goto LAB83;

LAB84:    xsi_vlog_unsigned_bit_combine(t9, 32, t18, 32, t26, 32);
    goto LAB88;

LAB86:    memcpy(t9, t18, 8);
    goto LAB88;

LAB91:    t17 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB93;

LAB92:    *((unsigned int *)t28) = 1;
    goto LAB93;

LAB95:    *((unsigned int *)t16) = 1;
    goto LAB98;

LAB97:    t26 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB98;

LAB99:    t31 = ((char*)((ng3)));
    goto LAB100;

LAB101:    t32 = ((char*)((ng1)));
    goto LAB102;

LAB103:    xsi_vlog_unsigned_bit_combine(t9, 32, t31, 32, t32, 32);
    goto LAB107;

LAB105:    memcpy(t9, t31, 8);
    goto LAB107;

LAB111:    t30 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB113;

LAB112:    *((unsigned int *)t25) = 1;
    goto LAB113;

LAB115:    xsi_set_current_line(97, ng0);
    t32 = ((char*)((ng1)));
    t33 = (t0 + 1196);
    t34 = (t33 + 36U);
    t35 = *((char **)t34);
    memset(t28, 0, 8);
    t38 = (t28 + 4);
    t42 = (t35 + 4);
    t24 = *((unsigned int *)t35);
    t36 = (t24 >> 0);
    *((unsigned int *)t28) = t36;
    t39 = *((unsigned int *)t42);
    t43 = (t39 >> 0);
    *((unsigned int *)t38) = t43;
    t46 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t46 & 2147483647U);
    t48 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t48 & 2147483647U);
    xsi_vlogtype_concat(t27, 32, 32, 2U, t28, 31, t32, 1);
    t52 = (t0 + 1196);
    xsi_vlogvar_assign_value(t52, t27, 0, 0, 32);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng14)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t4, 32, t7, 32);
    t8 = (t0 + 1564);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB109;

LAB120:    t30 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB122;

LAB121:    *((unsigned int *)t25) = 1;
    goto LAB122;

LAB124:    xsi_set_current_line(104, ng0);
    t32 = (t0 + 1196);
    t33 = (t32 + 36U);
    t34 = *((char **)t33);
    memset(t28, 0, 8);
    t35 = (t28 + 4);
    t38 = (t34 + 4);
    t24 = *((unsigned int *)t34);
    t36 = (t24 >> 1);
    *((unsigned int *)t28) = t36;
    t39 = *((unsigned int *)t38);
    t43 = (t39 >> 1);
    *((unsigned int *)t35) = t43;
    t46 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t46 & 2147483647U);
    t48 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t48 & 2147483647U);
    t42 = (t0 + 1196);
    t52 = (t42 + 36U);
    t53 = *((char **)t52);
    memset(t29, 0, 8);
    t54 = (t29 + 4);
    t55 = (t53 + 4);
    t49 = *((unsigned int *)t53);
    t56 = (t49 >> 31);
    t57 = (t56 & 1);
    *((unsigned int *)t29) = t57;
    t58 = *((unsigned int *)t55);
    t59 = (t58 >> 31);
    t60 = (t59 & 1);
    *((unsigned int *)t54) = t60;
    xsi_vlogtype_concat(t27, 32, 32, 2U, t29, 1, t28, 31);
    t66 = (t0 + 1196);
    xsi_vlogvar_assign_value(t66, t27, 0, 0, 32);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng14)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t4, 32, t7, 32);
    t8 = (t0 + 1564);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB118;

LAB129:    t30 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB131;

LAB130:    *((unsigned int *)t25) = 1;
    goto LAB131;

LAB133:    xsi_set_current_line(111, ng0);
    t32 = (t0 + 1196);
    t33 = (t32 + 36U);
    t34 = *((char **)t33);
    memset(t28, 0, 8);
    t35 = (t28 + 4);
    t38 = (t34 + 4);
    t24 = *((unsigned int *)t34);
    t36 = (t24 >> 1);
    *((unsigned int *)t28) = t36;
    t39 = *((unsigned int *)t38);
    t43 = (t39 >> 1);
    *((unsigned int *)t35) = t43;
    t46 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t46 & 2147483647U);
    t48 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t48 & 2147483647U);
    t42 = ((char*)((ng1)));
    xsi_vlogtype_concat(t27, 32, 32, 2U, t42, 1, t28, 31);
    t52 = (t0 + 1196);
    xsi_vlogvar_assign_value(t52, t27, 0, 0, 32);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng14)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t4, 32, t7, 32);
    t8 = (t0 + 1564);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB127;

}


extern void work_m_00000000000938931948_2725559894_init()
{
	static char *pe[] = {(void *)Cont_35_0,(void *)Cont_36_1,(void *)Always_41_2};
	xsi_register_didat("work_m_00000000000938931948_2725559894", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000000938931948_2725559894.didat");
	xsi_register_executes(pe);
}
