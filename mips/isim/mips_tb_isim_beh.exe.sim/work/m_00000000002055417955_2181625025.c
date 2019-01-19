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
static int ng0[] = {4, 0};



static void implSig1_execute(char *t0)
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

LAB0:    t1 = (t0 + 2364U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 2604);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 2560);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000002055417955_2181625025_init()
{
	static char *pe[] = {(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000002055417955_2181625025", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000002055417955_2181625025.didat");
	xsi_register_executes(pe);
}
