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
static const char *ng0 = "C:/Users/ThinkPad/Documents/ISE/FPGA/mips/mips/external/MiniUART/txd.v";
static unsigned int ng1[] = {2047U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {10, 0};
static int ng4[] = {9, 0};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {0U, 0U};
static int ng7[] = {1, 0};
static int ng8[] = {0, 0};



static void Cont_90_0(char *t0)
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

LAB0:    t1 = (t0 + 1904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 2296);
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
    t27 = (t0 + 2244);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_93_1(char *t0)
{
    char t13[8];
    char t19[8];
    char t20[8];
    char t41[8];
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
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
    int t21;
    int t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;

LAB0:    t1 = (t0 + 2048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2252);
    *((int *)t2) = 1;
    t3 = (t0 + 2076);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(94, ng0);
    t4 = (t0 + 1060U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB20;

LAB21:
LAB22:
LAB10:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(95, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 11, 0LL);
    goto LAB7;

LAB8:    xsi_set_current_line(98, ng0);

LAB11:    xsi_set_current_line(99, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1288);
    t11 = (t0 + 1288);
    t12 = (t11 + 44U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 1288);
    t4 = (t0 + 1288);
    t5 = (t4 + 44U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng4)));
    t14 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t13, t19, t20, ((int*)(t11)), 2, t12, 32, 1, t14, 32, 1);
    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t18 = (!(t6));
    t16 = (t19 + 4);
    t7 = *((unsigned int *)t16);
    t21 = (!(t7));
    t22 = (t18 && t21);
    t23 = (t20 + 4);
    t8 = *((unsigned int *)t23);
    t24 = (!(t8));
    t25 = (t22 && t24);
    if (t25 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1288);
    t4 = (t0 + 1288);
    t5 = (t4 + 44U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t14 = (t13 + 4);
    t6 = *((unsigned int *)t14);
    t18 = (!(t6));
    if (t18 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    t4 = (t0 + 1288);
    t5 = (t4 + 44U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t14 = (t13 + 4);
    t6 = *((unsigned int *)t14);
    t18 = (!(t6));
    if (t18 == 1)
        goto LAB18;

LAB19:    goto LAB10;

LAB12:    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB13;

LAB14:    t9 = *((unsigned int *)t20);
    t26 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t19);
    t27 = (t10 - t17);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t26, *((unsigned int *)t19), t28, 0LL);
    goto LAB15;

LAB16:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB17;

LAB18:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB19;

LAB20:    xsi_set_current_line(106, ng0);
    xsi_set_current_line(106, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t0 + 1380);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB23:    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_leq(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB24;

LAB25:    goto LAB22;

LAB24:    xsi_set_current_line(107, ng0);
    t12 = (t0 + 1288);
    t14 = (t12 + 36U);
    t15 = *((char **)t14);
    t16 = (t0 + 1288);
    t23 = (t16 + 44U);
    t29 = *((char **)t23);
    t30 = (t0 + 1380);
    t31 = (t30 + 36U);
    t32 = *((char **)t31);
    xsi_vlog_generic_get_index_select_value(t19, 1, t15, t29, 2, t32, 32, 1);
    t33 = (t0 + 1288);
    t34 = (t0 + 1288);
    t35 = (t34 + 44U);
    t36 = *((char **)t35);
    t37 = (t0 + 1380);
    t38 = (t37 + 36U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng7)));
    memset(t41, 0, 8);
    xsi_vlog_signed_minus(t41, 32, t39, 32, t40, 32);
    xsi_vlog_generic_convert_bit_index(t20, t36, 2, t41, 32, 1);
    t42 = (t20 + 4);
    t17 = *((unsigned int *)t42);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 1380);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB23;

LAB26:    xsi_vlogvar_wait_assign_value(t33, t19, 0, *((unsigned int *)t20), 1, 0LL);
    goto LAB27;

}


extern void work_m_00000000000463507127_1100204504_init()
{
	static char *pe[] = {(void *)Cont_90_0,(void *)Always_93_1};
	xsi_register_didat("work_m_00000000000463507127_1100204504", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000000463507127_1100204504.didat");
	xsi_register_executes(pe);
}
