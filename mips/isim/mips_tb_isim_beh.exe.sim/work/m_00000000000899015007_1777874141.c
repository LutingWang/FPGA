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
static const char *ng0 = "C:/Users/ThinkPad/Documents/ISE/FPGA/mips/mips/cpu/expectation/expF.v";
static unsigned int ng1[] = {12288U, 0U};
static unsigned int ng2[] = {20480U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {31U, 0U};



static void Cont_29_0(char *t0)
{
    char t3[8];
    char t6[8];
    char t10[8];
    char t25[8];
    char t29[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;

LAB0:    t1 = (t0 + 1444U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 600U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t8 = (t2 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t5) < *((unsigned int *)t2))
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB7:    memset(t10, 0, 8);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t11) != 0)
        goto LAB11;

LAB12:    t18 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t18);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB13;

LAB14:    memcpy(t37, t10, 8);

LAB15:    memset(t3, 0, 8);
    t69 = (t37 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t37);
    t73 = (t72 & t71);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB31;

LAB29:    if (*((unsigned int *)t69) == 0)
        goto LAB28;

LAB30:    t75 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t75) = 1;

LAB31:    t76 = (t3 + 4);
    t77 = (t37 + 4);
    t78 = *((unsigned int *)t37);
    t79 = (~(t78));
    *((unsigned int *)t3) = t79;
    *((unsigned int *)t76) = 0;
    if (*((unsigned int *)t77) != 0)
        goto LAB33;

LAB32:    t84 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t84 & 1U);
    t85 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t85 & 1U);
    t86 = (t0 + 1836);
    t87 = (t86 + 32U);
    t88 = *((char **)t87);
    t89 = (t88 + 40U);
    t90 = *((char **)t89);
    memset(t90, 0, 8);
    t91 = 1U;
    t92 = t91;
    t93 = (t3 + 4);
    t94 = *((unsigned int *)t3);
    t91 = (t91 & t94);
    t95 = *((unsigned int *)t93);
    t92 = (t92 & t95);
    t96 = (t90 + 4);
    t97 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t97 | t91);
    t98 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t98 | t92);
    xsi_driver_vfirst_trans(t86, 0, 0);
    t99 = (t0 + 1784);
    *((int *)t99) = 1;

LAB1:    return;
LAB5:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t10) = 1;
    goto LAB12;

LAB11:    t17 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB12;

LAB13:    t23 = (t0 + 600U);
    t24 = *((char **)t23);
    t23 = ((char*)((ng2)));
    memset(t25, 0, 8);
    t26 = (t24 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB17;

LAB16:    t27 = (t23 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t24) < *((unsigned int *)t23))
        goto LAB18;

LAB19:    memset(t29, 0, 8);
    t30 = (t25 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t25);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t30) != 0)
        goto LAB23;

LAB24:    t38 = *((unsigned int *)t10);
    t39 = *((unsigned int *)t29);
    t40 = (t38 & t39);
    *((unsigned int *)t37) = t40;
    t41 = (t10 + 4);
    t42 = (t29 + 4);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t41);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB15;

LAB17:    t28 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB19;

LAB18:    *((unsigned int *)t25) = 1;
    goto LAB19;

LAB21:    *((unsigned int *)t29) = 1;
    goto LAB24;

LAB23:    t36 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB24;

LAB25:    t49 = *((unsigned int *)t37);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t37) = (t49 | t50);
    t51 = (t10 + 4);
    t52 = (t29 + 4);
    t53 = *((unsigned int *)t10);
    t54 = (~(t53));
    t55 = *((unsigned int *)t51);
    t56 = (~(t55));
    t57 = *((unsigned int *)t29);
    t58 = (~(t57));
    t59 = *((unsigned int *)t52);
    t60 = (~(t59));
    t61 = (t54 & t56);
    t62 = (t58 & t60);
    t63 = (~(t61));
    t64 = (~(t62));
    t65 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t65 & t63);
    t66 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t66 & t64);
    t67 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t67 & t63);
    t68 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t68 & t64);
    goto LAB27;

LAB28:    *((unsigned int *)t3) = 1;
    goto LAB31;

LAB33:    t80 = *((unsigned int *)t3);
    t81 = *((unsigned int *)t77);
    *((unsigned int *)t3) = (t80 | t81);
    t82 = *((unsigned int *)t76);
    t83 = *((unsigned int *)t77);
    *((unsigned int *)t76) = (t82 | t83);
    goto LAB32;

}

static void Cont_30_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t15[8];
    char t31[8];
    char t46[8];
    char t53[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
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
    int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;

LAB0:    t1 = (t0 + 1588U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 600U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 3U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 3U);
    t14 = ((char*)((ng3)));
    memset(t15, 0, 8);
    t16 = (t5 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB5;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB7:    memset(t31, 0, 8);
    t32 = (t15 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t15);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t32) != 0)
        goto LAB10;

LAB11:    t39 = (t31 + 4);
    t40 = *((unsigned int *)t31);
    t41 = (!(t40));
    t42 = *((unsigned int *)t39);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB12;

LAB13:    memcpy(t53, t31, 8);

LAB14:    memset(t4, 0, 8);
    t81 = (t53 + 4);
    t82 = *((unsigned int *)t81);
    t83 = (~(t82));
    t84 = *((unsigned int *)t53);
    t85 = (t84 & t83);
    t86 = (t85 & 1U);
    if (t86 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t81) != 0)
        goto LAB24;

LAB25:    t88 = (t4 + 4);
    t89 = *((unsigned int *)t4);
    t90 = *((unsigned int *)t88);
    t91 = (t89 || t90);
    if (t91 > 0)
        goto LAB26;

LAB27:    t93 = *((unsigned int *)t4);
    t94 = (~(t93));
    t95 = *((unsigned int *)t88);
    t96 = (t94 || t95);
    if (t96 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t88) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t4) > 0)
        goto LAB32;

LAB33:    memcpy(t3, t97, 8);

LAB34:    t98 = (t0 + 1872);
    t99 = (t98 + 32U);
    t100 = *((char **)t99);
    t101 = (t100 + 40U);
    t102 = *((char **)t101);
    memset(t102, 0, 8);
    t103 = 31U;
    t104 = t103;
    t105 = (t3 + 4);
    t106 = *((unsigned int *)t3);
    t103 = (t103 & t106);
    t107 = *((unsigned int *)t105);
    t104 = (t104 & t107);
    t108 = (t102 + 4);
    t109 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t109 | t103);
    t110 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t110 | t104);
    xsi_driver_vfirst_trans(t98, 0, 4);
    t111 = (t0 + 1792);
    *((int *)t111) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t15) = 1;
    goto LAB7;

LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t31) = 1;
    goto LAB11;

LAB10:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB11;

LAB12:    t44 = (t0 + 784U);
    t45 = *((char **)t44);
    memset(t46, 0, 8);
    t44 = (t45 + 4);
    t47 = *((unsigned int *)t44);
    t48 = (~(t47));
    t49 = *((unsigned int *)t45);
    t50 = (t49 & t48);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t44) != 0)
        goto LAB17;

LAB18:    t54 = *((unsigned int *)t31);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    *((unsigned int *)t53) = t56;
    t57 = (t31 + 4);
    t58 = (t46 + 4);
    t59 = (t53 + 4);
    t60 = *((unsigned int *)t57);
    t61 = *((unsigned int *)t58);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = *((unsigned int *)t59);
    t64 = (t63 != 0);
    if (t64 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB14;

LAB15:    *((unsigned int *)t46) = 1;
    goto LAB18;

LAB17:    t52 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB18;

LAB19:    t65 = *((unsigned int *)t53);
    t66 = *((unsigned int *)t59);
    *((unsigned int *)t53) = (t65 | t66);
    t67 = (t31 + 4);
    t68 = (t46 + 4);
    t69 = *((unsigned int *)t67);
    t70 = (~(t69));
    t71 = *((unsigned int *)t31);
    t72 = (t71 & t70);
    t73 = *((unsigned int *)t68);
    t74 = (~(t73));
    t75 = *((unsigned int *)t46);
    t76 = (t75 & t74);
    t77 = (~(t72));
    t78 = (~(t76));
    t79 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t79 & t77);
    t80 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t80 & t78);
    goto LAB21;

LAB22:    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB24:    t87 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t87) = 1;
    goto LAB25;

LAB26:    t92 = ((char*)((ng4)));
    goto LAB27;

LAB28:    t97 = ((char*)((ng5)));
    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t3, 5, t92, 5, t97, 5);
    goto LAB34;

LAB32:    memcpy(t3, t92, 8);
    goto LAB34;

}


extern void work_m_00000000000899015007_1777874141_init()
{
	static char *pe[] = {(void *)Cont_29_0,(void *)Cont_30_1};
	xsi_register_didat("work_m_00000000000899015007_1777874141", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000000899015007_1777874141.didat");
	xsi_register_executes(pe);
}
