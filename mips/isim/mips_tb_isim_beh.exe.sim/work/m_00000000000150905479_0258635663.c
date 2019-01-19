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
static const char *ng0 = "C:/Users/ThinkPad/Documents/ISE/FPGA/mips/mips_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {4, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};
static unsigned int ng6[] = {128U, 0U};
static int ng7[] = {8, 0};



static void Initial_75_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);

LAB4:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    memcpy(t4, t2, 8);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t7 | t8);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t10 & 4294967295U);
    t11 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t11 & 4294967295U);
    t12 = (t0 + 1564);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    memcpy(t4, t2, 8);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t7 | t8);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t10 & 4294967295U);
    t11 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t11 & 4294967295U);
    t12 = (t0 + 1748);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    memcpy(t4, t2, 8);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t7 | t8);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t10 & 4294967295U);
    t11 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t11 & 4294967295U);
    t12 = (t0 + 1840);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng5)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    memcpy(t4, t2, 8);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t7 | t8);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t10 & 4294967295U);
    t11 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t11 & 4294967295U);
    t12 = (t0 + 1932);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng6)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    *((unsigned int *)t4) = t7;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB6;

LAB5:    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    t12 = (t0 + 2024);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    memcpy(t4, t2, 8);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t7 | t8);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t10 & 4294967295U);
    t11 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t11 & 4294967295U);
    t12 = (t0 + 2116);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng7)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    memcpy(t4, t2, 8);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t7 | t8);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t10 & 4294967295U);
    t11 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t11 & 4294967295U);
    t12 = (t0 + 2208);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    memcpy(t4, t2, 8);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t7 | t8);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t10 & 4294967295U);
    t11 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t11 & 4294967295U);
    t12 = (t0 + 2300);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng6)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    *((unsigned int *)t4) = t7;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB8;

LAB7:    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    t12 = (t0 + 2392);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    memcpy(t4, t2, 8);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t7 | t8);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t10 & 4294967295U);
    t11 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t11 & 4294967295U);
    t12 = (t0 + 2484);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2908);
    xsi_process_wait(t2, 600000LL);
    *((char **)t1) = &&LAB9;

LAB1:    return;
LAB6:    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    *((unsigned int *)t4) = (t8 | t9);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t5);
    *((unsigned int *)t3) = (t10 | t11);
    goto LAB5;

LAB8:    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    *((unsigned int *)t4) = (t8 | t9);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t5);
    *((unsigned int *)t3) = (t10 | t11);
    goto LAB7;

LAB9:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    memcpy(t4, t2, 8);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t7 | t8);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t10 & 4294967295U);
    t11 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t11 & 4294967295U);
    t12 = (t0 + 1564);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2908);
    xsi_process_wait(t2, 2000000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    memcpy(t4, t2, 8);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t7 | t8);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t10 & 4294967295U);
    t11 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t11 & 4294967295U);
    t12 = (t0 + 2484);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    goto LAB1;

}

static void Always_271_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
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
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(271, ng0);
    t2 = (t0 + 3052);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(271, ng0);
    t4 = (t0 + 1472);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1472);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}


extern void work_m_00000000000150905479_0258635663_init()
{
	static char *pe[] = {(void *)Initial_75_0,(void *)Always_271_1};
	xsi_register_didat("work_m_00000000000150905479_0258635663", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000000150905479_0258635663.didat");
	xsi_register_executes(pe);
}
