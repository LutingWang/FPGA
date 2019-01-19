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
static const char *ng0 = "C:/Users/ThinkPad/Documents/ISE/FPGA/mips/mips/cpu/datapath/4_M/M.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {8192U, 0U};
static unsigned int ng3[] = {32512U, 0U};
static unsigned int ng4[] = {32580U, 0U};
static unsigned int ng5[] = {388169745U, 0U};



static void Cont_55_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3836U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2348U);
    t3 = *((char **)t2);
    t2 = (t0 + 4836);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 4752);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Cont_56_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 3980U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 784U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 2);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 2);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 1073741823U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 1073741823U);
    t12 = (t0 + 4872);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1073741823U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 29);
    t25 = (t0 + 4760);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_57_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 4124U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2348U);
    t3 = *((char **)t2);
    t2 = (t0 + 4908);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 4768);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Cont_58_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 4268U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2624U);
    t3 = *((char **)t2);
    t2 = (t0 + 4944);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 4776);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_60_4(char *t0)
{
    char t6[8];
    char t20[8];
    char t27[8];
    char t63[8];
    char t65[8];
    char t66[8];
    char t68[8];
    char t70[8];
    char t73[8];
    char t106[8];
    char t107[8];
    char t110[8];
    char t114[8];
    char t129[8];
    char t133[8];
    char t141[8];
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
    char *t69;
    char *t71;
    char *t72;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t109;
    char *t111;
    char *t112;
    char *t113;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t127;
    char *t128;
    char *t130;
    char *t131;
    char *t132;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    int t165;
    int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    char *t179;
    char *t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    char *t184;
    char *t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    char *t190;

LAB0:    t1 = (t0 + 4412U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 4784);
    *((int *)t2) = 1;
    t3 = (t0 + 4440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);

LAB5:    xsi_set_current_line(61, ng0);
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

LAB21:    xsi_set_current_line(66, ng0);

LAB24:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 3036);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 3128);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t0 + 3220);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2716U);
    t3 = *((char **)t2);
    memset(t20, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t2) != 0)
        goto LAB27;

LAB28:    t5 = (t20 + 4);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB29;

LAB30:    t17 = *((unsigned int *)t20);
    t21 = (~(t17));
    t22 = *((unsigned int *)t5);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t5) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t20) > 0)
        goto LAB35;

LAB36:    memcpy(t6, t27, 8);

LAB37:    t190 = (t0 + 3312);
    xsi_vlogvar_assign_value(t190, t6, 0, 0, 32);

LAB22:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 1612U);
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

LAB20:    xsi_set_current_line(61, ng0);

LAB23:    xsi_set_current_line(62, ng0);
    t61 = ((char*)((ng1)));
    t62 = (t0 + 3036);
    xsi_vlogvar_assign_value(t62, t61, 0, 0, 32);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3128);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3220);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB22;

LAB25:    *((unsigned int *)t20) = 1;
    goto LAB28;

LAB27:    t4 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB28;

LAB29:    t12 = (t0 + 1520U);
    t13 = *((char **)t12);
    goto LAB30;

LAB31:    t12 = (t0 + 784U);
    t18 = *((char **)t12);
    t12 = ((char*)((ng1)));
    memset(t65, 0, 8);
    t19 = (t18 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB39;

LAB38:    t26 = (t12 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB39;

LAB42:    if (*((unsigned int *)t18) < *((unsigned int *)t12))
        goto LAB41;

LAB40:    *((unsigned int *)t65) = 1;

LAB41:    memset(t66, 0, 8);
    t32 = (t65 + 4);
    t24 = *((unsigned int *)t32);
    t25 = (~(t24));
    t28 = *((unsigned int *)t65);
    t29 = (t28 & t25);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t32) != 0)
        goto LAB45;

LAB46:    t41 = (t66 + 4);
    t34 = *((unsigned int *)t66);
    t35 = *((unsigned int *)t41);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB47;

LAB48:    memcpy(t73, t66, 8);

LAB49:    memset(t63, 0, 8);
    t89 = (t73 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t73);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t89) != 0)
        goto LAB64;

LAB65:    t96 = (t63 + 4);
    t97 = *((unsigned int *)t63);
    t98 = *((unsigned int *)t96);
    t99 = (t97 || t98);
    if (t99 > 0)
        goto LAB66;

LAB67:    t102 = *((unsigned int *)t63);
    t103 = (~(t102));
    t104 = *((unsigned int *)t96);
    t105 = (t103 || t104);
    if (t105 > 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t96) > 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t63) > 0)
        goto LAB72;

LAB73:    memcpy(t27, t106, 8);

LAB74:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t6, 32, t13, 32, t27, 32);
    goto LAB37;

LAB35:    memcpy(t6, t13, 8);
    goto LAB37;

LAB39:    t31 = (t65 + 4);
    *((unsigned int *)t65) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB41;

LAB43:    *((unsigned int *)t66) = 1;
    goto LAB46;

LAB45:    t33 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB46;

LAB47:    t42 = (t0 + 784U);
    t55 = *((char **)t42);
    t42 = ((char*)((ng2)));
    memset(t68, 0, 8);
    t61 = (t55 + 4);
    if (*((unsigned int *)t61) != 0)
        goto LAB51;

LAB50:    t62 = (t42 + 4);
    if (*((unsigned int *)t62) != 0)
        goto LAB51;

LAB54:    if (*((unsigned int *)t55) < *((unsigned int *)t42))
        goto LAB52;

LAB53:    memset(t70, 0, 8);
    t71 = (t68 + 4);
    t37 = *((unsigned int *)t71);
    t38 = (~(t37));
    t39 = *((unsigned int *)t68);
    t40 = (t39 & t38);
    t43 = (t40 & 1U);
    if (t43 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t71) != 0)
        goto LAB57;

LAB58:    t44 = *((unsigned int *)t66);
    t45 = *((unsigned int *)t70);
    t47 = (t44 & t45);
    *((unsigned int *)t73) = t47;
    t74 = (t66 + 4);
    t75 = (t70 + 4);
    t76 = (t73 + 4);
    t48 = *((unsigned int *)t74);
    t49 = *((unsigned int *)t75);
    t51 = (t48 | t49);
    *((unsigned int *)t76) = t51;
    t52 = *((unsigned int *)t76);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB59;

LAB60:
LAB61:    goto LAB49;

LAB51:    t69 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB53;

LAB52:    *((unsigned int *)t68) = 1;
    goto LAB53;

LAB55:    *((unsigned int *)t70) = 1;
    goto LAB58;

LAB57:    t72 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB58;

LAB59:    t54 = *((unsigned int *)t73);
    t56 = *((unsigned int *)t76);
    *((unsigned int *)t73) = (t54 | t56);
    t77 = (t66 + 4);
    t78 = (t70 + 4);
    t57 = *((unsigned int *)t66);
    t58 = (~(t57));
    t59 = *((unsigned int *)t77);
    t60 = (~(t59));
    t79 = *((unsigned int *)t70);
    t80 = (~(t79));
    t81 = *((unsigned int *)t78);
    t82 = (~(t81));
    t46 = (t58 & t60);
    t50 = (t80 & t82);
    t83 = (~(t46));
    t84 = (~(t50));
    t85 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t85 & t83);
    t86 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t86 & t84);
    t87 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t87 & t83);
    t88 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t88 & t84);
    goto LAB61;

LAB62:    *((unsigned int *)t63) = 1;
    goto LAB65;

LAB64:    t95 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB65;

LAB66:    t100 = (t0 + 2440U);
    t101 = *((char **)t100);
    goto LAB67;

LAB68:    t100 = (t0 + 784U);
    t109 = *((char **)t100);
    t100 = ((char*)((ng3)));
    memset(t110, 0, 8);
    t111 = (t109 + 4);
    if (*((unsigned int *)t111) != 0)
        goto LAB76;

LAB75:    t112 = (t100 + 4);
    if (*((unsigned int *)t112) != 0)
        goto LAB76;

LAB79:    if (*((unsigned int *)t109) < *((unsigned int *)t100))
        goto LAB78;

LAB77:    *((unsigned int *)t110) = 1;

LAB78:    memset(t114, 0, 8);
    t115 = (t110 + 4);
    t116 = *((unsigned int *)t115);
    t117 = (~(t116));
    t118 = *((unsigned int *)t110);
    t119 = (t118 & t117);
    t120 = (t119 & 1U);
    if (t120 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t115) != 0)
        goto LAB82;

LAB83:    t122 = (t114 + 4);
    t123 = *((unsigned int *)t114);
    t124 = *((unsigned int *)t122);
    t125 = (t123 || t124);
    if (t125 > 0)
        goto LAB84;

LAB85:    memcpy(t141, t114, 8);

LAB86:    memset(t107, 0, 8);
    t173 = (t141 + 4);
    t174 = *((unsigned int *)t173);
    t175 = (~(t174));
    t176 = *((unsigned int *)t141);
    t177 = (t176 & t175);
    t178 = (t177 & 1U);
    if (t178 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t173) != 0)
        goto LAB101;

LAB102:    t180 = (t107 + 4);
    t181 = *((unsigned int *)t107);
    t182 = *((unsigned int *)t180);
    t183 = (t181 || t182);
    if (t183 > 0)
        goto LAB103;

LAB104:    t186 = *((unsigned int *)t107);
    t187 = (~(t186));
    t188 = *((unsigned int *)t180);
    t189 = (t187 || t188);
    if (t189 > 0)
        goto LAB105;

LAB106:    if (*((unsigned int *)t180) > 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t107) > 0)
        goto LAB109;

LAB110:    memcpy(t106, t184, 8);

LAB111:    goto LAB69;

LAB70:    xsi_vlog_unsigned_bit_combine(t27, 32, t101, 32, t106, 32);
    goto LAB74;

LAB72:    memcpy(t27, t101, 8);
    goto LAB74;

LAB76:    t113 = (t110 + 4);
    *((unsigned int *)t110) = 1;
    *((unsigned int *)t113) = 1;
    goto LAB78;

LAB80:    *((unsigned int *)t114) = 1;
    goto LAB83;

LAB82:    t121 = (t114 + 4);
    *((unsigned int *)t114) = 1;
    *((unsigned int *)t121) = 1;
    goto LAB83;

LAB84:    t127 = (t0 + 784U);
    t128 = *((char **)t127);
    t127 = ((char*)((ng4)));
    memset(t129, 0, 8);
    t130 = (t128 + 4);
    if (*((unsigned int *)t130) != 0)
        goto LAB88;

LAB87:    t131 = (t127 + 4);
    if (*((unsigned int *)t131) != 0)
        goto LAB88;

LAB91:    if (*((unsigned int *)t128) < *((unsigned int *)t127))
        goto LAB89;

LAB90:    memset(t133, 0, 8);
    t134 = (t129 + 4);
    t135 = *((unsigned int *)t134);
    t136 = (~(t135));
    t137 = *((unsigned int *)t129);
    t138 = (t137 & t136);
    t139 = (t138 & 1U);
    if (t139 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t134) != 0)
        goto LAB94;

LAB95:    t142 = *((unsigned int *)t114);
    t143 = *((unsigned int *)t133);
    t144 = (t142 & t143);
    *((unsigned int *)t141) = t144;
    t145 = (t114 + 4);
    t146 = (t133 + 4);
    t147 = (t141 + 4);
    t148 = *((unsigned int *)t145);
    t149 = *((unsigned int *)t146);
    t150 = (t148 | t149);
    *((unsigned int *)t147) = t150;
    t151 = *((unsigned int *)t147);
    t152 = (t151 != 0);
    if (t152 == 1)
        goto LAB96;

LAB97:
LAB98:    goto LAB86;

LAB88:    t132 = (t129 + 4);
    *((unsigned int *)t129) = 1;
    *((unsigned int *)t132) = 1;
    goto LAB90;

LAB89:    *((unsigned int *)t129) = 1;
    goto LAB90;

LAB92:    *((unsigned int *)t133) = 1;
    goto LAB95;

LAB94:    t140 = (t133 + 4);
    *((unsigned int *)t133) = 1;
    *((unsigned int *)t140) = 1;
    goto LAB95;

LAB96:    t153 = *((unsigned int *)t141);
    t154 = *((unsigned int *)t147);
    *((unsigned int *)t141) = (t153 | t154);
    t155 = (t114 + 4);
    t156 = (t133 + 4);
    t157 = *((unsigned int *)t114);
    t158 = (~(t157));
    t159 = *((unsigned int *)t155);
    t160 = (~(t159));
    t161 = *((unsigned int *)t133);
    t162 = (~(t161));
    t163 = *((unsigned int *)t156);
    t164 = (~(t163));
    t165 = (t158 & t160);
    t166 = (t162 & t164);
    t167 = (~(t165));
    t168 = (~(t166));
    t169 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t169 & t167);
    t170 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t170 & t168);
    t171 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t171 & t167);
    t172 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t172 & t168);
    goto LAB98;

LAB99:    *((unsigned int *)t107) = 1;
    goto LAB102;

LAB101:    t179 = (t107 + 4);
    *((unsigned int *)t107) = 1;
    *((unsigned int *)t179) = 1;
    goto LAB102;

LAB103:    t184 = (t0 + 1980U);
    t185 = *((char **)t184);
    goto LAB104;

LAB105:    t184 = ((char*)((ng5)));
    goto LAB106;

LAB107:    xsi_vlog_unsigned_bit_combine(t106, 32, t185, 32, t184, 32);
    goto LAB111;

LAB109:    memcpy(t106, t185, 8);
    goto LAB111;

}

static void implSig1_execute(char *t0)
{
    char t4[8];
    char t15[8];
    char t34[8];
    char t42[8];
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
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
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
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;

LAB0:    t1 = (t0 + 4556U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2624U);
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
    t13 = *((unsigned int *)t11);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB8;

LAB9:    memcpy(t42, t4, 8);

LAB10:    t74 = (t0 + 4980);
    t75 = (t74 + 32U);
    t76 = *((char **)t75);
    t77 = (t76 + 40U);
    t78 = *((char **)t77);
    memset(t78, 0, 8);
    t79 = 1U;
    t80 = t79;
    t81 = (t42 + 4);
    t82 = *((unsigned int *)t42);
    t79 = (t79 & t82);
    t83 = *((unsigned int *)t81);
    t80 = (t80 & t83);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t85 | t79);
    t86 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t86 | t80);
    xsi_driver_vfirst_trans(t74, 0, 0);
    t87 = (t0 + 4792);
    *((int *)t87) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 1612U);
    t17 = *((char **)t16);
    memset(t15, 0, 8);
    t16 = (t17 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (~(t18));
    t20 = *((unsigned int *)t17);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t16) == 0)
        goto LAB11;

LAB13:    t23 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t23) = 1;

LAB14:    t24 = (t15 + 4);
    t25 = (t17 + 4);
    t26 = *((unsigned int *)t17);
    t27 = (~(t26));
    *((unsigned int *)t15) = t27;
    *((unsigned int *)t24) = 0;
    if (*((unsigned int *)t25) != 0)
        goto LAB16;

LAB15:    t32 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t32 & 1U);
    t33 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t33 & 1U);
    memset(t34, 0, 8);
    t35 = (t15 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t15);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t35) != 0)
        goto LAB19;

LAB20:    t43 = *((unsigned int *)t4);
    t44 = *((unsigned int *)t34);
    t45 = (t43 & t44);
    *((unsigned int *)t42) = t45;
    t46 = (t4 + 4);
    t47 = (t34 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t46);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB10;

LAB11:    *((unsigned int *)t15) = 1;
    goto LAB14;

LAB16:    t28 = *((unsigned int *)t15);
    t29 = *((unsigned int *)t25);
    *((unsigned int *)t15) = (t28 | t29);
    t30 = *((unsigned int *)t24);
    t31 = *((unsigned int *)t25);
    *((unsigned int *)t24) = (t30 | t31);
    goto LAB15;

LAB17:    *((unsigned int *)t34) = 1;
    goto LAB20;

LAB19:    t41 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB20;

LAB21:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t42) = (t54 | t55);
    t56 = (t4 + 4);
    t57 = (t34 + 4);
    t58 = *((unsigned int *)t4);
    t59 = (~(t58));
    t60 = *((unsigned int *)t56);
    t61 = (~(t60));
    t62 = *((unsigned int *)t34);
    t63 = (~(t62));
    t64 = *((unsigned int *)t57);
    t65 = (~(t64));
    t66 = (t59 & t61);
    t67 = (t63 & t65);
    t68 = (~(t66));
    t69 = (~(t67));
    t70 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t70 & t68);
    t71 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t68);
    t73 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t73 & t69);
    goto LAB23;

}


extern void work_m_00000000001546405449_2137656763_init()
{
	static char *pe[] = {(void *)Cont_55_0,(void *)Cont_56_1,(void *)Cont_57_2,(void *)Cont_58_3,(void *)Always_60_4,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000001546405449_2137656763", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000001546405449_2137656763.didat");
	xsi_register_executes(pe);
}
