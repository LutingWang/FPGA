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
static const char *ng0 = "C:/Users/ThinkPad/Documents/ISE/FPGA/mips/mips/external/key.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};



static void Cont_30_0(char *t0)
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

LAB0:    t1 = (t0 + 1720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1196);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng1)));
    xsi_vlogtype_concat(t3, 32, 32, 2U, t6, 24, t5, 8);
    t7 = (t0 + 2112);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 8);
    xsi_driver_vfirst_trans(t7, 0, 31);
    t12 = (t0 + 2060);
    *((int *)t12) = 1;

LAB1:    return;
}

static void Always_32_1(char *t0)
{
    char t12[8];
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
    char *t13;
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

LAB0:    t1 = (t0 + 1864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2068);
    *((int *)t2) = 1;
    t3 = (t0 + 1892);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1104);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 600U);
    t11 = *((char **)t5);
    memset(t12, 0, 8);
    t5 = (t4 + 4);
    t13 = (t11 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t13);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t13);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB10;

LAB9:    if (t18 != 0)
        goto LAB11;

LAB12:    t22 = (t12 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t12);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB13;

LAB14:
LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(34, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1196);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB8;

LAB10:    *((unsigned int *)t12) = 1;
    goto LAB12;

LAB11:    t21 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(35, ng0);

LAB16:    xsi_set_current_line(36, ng0);
    t28 = (t0 + 600U);
    t29 = *((char **)t28);
    t28 = (t0 + 1196);
    xsi_vlogvar_assign_value(t28, t29, 0, 0, 8);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB15;

}


extern void work_m_00000000002577516321_2006437090_init()
{
	static char *pe[] = {(void *)Cont_30_0,(void *)Always_32_1};
	xsi_register_didat("work_m_00000000002577516321_2006437090", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000002577516321_2006437090.didat");
	xsi_register_executes(pe);
}
