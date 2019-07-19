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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Academic/Fall 2017/ECEN 350/Lab9/SingleCycleProcTest(4).v";
static const char *ng1 = "%s passed";
static int ng2[] = {1, 0};
static const char *ng3 = "%s failed: 0x%x should be 0x%x";
static const char *ng4 = "All tests passed";
static const char *ng5 = "Some tests failed: %d of %d passed";
static int ng6[] = {0, 0, 0, 0};
static int ng7[] = {0, 0};
static unsigned int ng8[] = {64U, 0U, 0U, 0U};
static const char *ng9 = "CurrentPC:%h";
static unsigned int ng10[] = {15U, 0U, 0U, 0U};
static int ng11[] = {1634541617, 0, 1919903602, 0, 1868963920, 0, 1819570976, 0, 1382380405, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng12[] = {2, 0};
static unsigned int ng13[] = {65535U, 0U};



static int sp_passTest(char *t1, char *t2)
{
    char t11[16];
    char t22[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(37, ng0);
    t5 = (t1 + 3272);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 3432);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    xsi_vlog_unsigned_equal(t11, 64, t7, 64, t10, 64);
    t12 = (t11 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t11);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(38, ng0);
    t4 = (t1 + 3592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3272);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 3432);
    t12 = (t10 + 56U);
    t18 = *((char **)t12);
    t19 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 4, t19, (char)118, t6, 257, (char)118, t9, 64, (char)118, t18, 64);

LAB7:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB5:    xsi_set_current_line(37, ng0);

LAB8:    xsi_set_current_line(37, ng0);
    t18 = (t1 + 3592);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 2, t21, (char)118, t20, 257);
    xsi_set_current_line(37, ng0);
    t4 = (t1 + 3752);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t6, 8, t7, 32);
    t8 = (t1 + 3752);
    xsi_vlogvar_assign_value(t8, t22, 0, 0, 8);
    goto LAB7;

}

static int sp_allPassed(char *t1, char *t2)
{
    char t11[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
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
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(45, ng0);
    t5 = (t1 + 3912);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 4072);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t12 = (t7 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB8;

LAB5:    if (t23 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t11) = 1;

LAB8:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(46, ng0);
    t4 = (t1 + 3912);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4072);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng5, 3, t10, (char)118, t6, 8, (char)118, t9, 8);

LAB11:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(45, ng0);
    t33 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t33);
    goto LAB11;

}

static void Initial_72_0(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 4992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);

LAB4:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 120000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 120000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(99, ng0);

LAB8:    t2 = (t0 + 2072U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    xsi_vlog_unsigned_less(t5, 64, t3, 64, t2, 64);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 120000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB9:    xsi_set_current_line(100, ng0);

LAB11:    xsi_set_current_line(101, ng0);
    t11 = (t0 + 4800);
    xsi_process_wait(t11, 120000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2072U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)118, t3, 64);
    goto LAB8;

LAB13:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    t4 = ((char*)((ng11)));
    t11 = (t0 + 2952);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 4800);
    t15 = (t0 + 848);
    t16 = xsi_create_subprogram_invocation(t14, 0, t0, t15, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t15, t16);
    t17 = (t0 + 3272);
    xsi_vlogvar_assign_value(t17, t3, 0, 0, 64);
    t18 = (t0 + 3432);
    xsi_vlogvar_assign_value(t18, t2, 0, 0, 64);
    t19 = (t0 + 3592);
    xsi_vlogvar_assign_value(t19, t4, 0, 0, 257);
    t20 = (t0 + 3752);
    xsi_vlogvar_assign_value(t20, t13, 0, 0, 8);

LAB16:    t21 = (t0 + 4896);
    t22 = *((char **)t21);
    t23 = (t22 + 80U);
    t24 = *((char **)t23);
    t25 = (t24 + 272U);
    t26 = *((char **)t25);
    t27 = (t26 + 0U);
    t28 = *((char **)t27);
    t29 = ((int  (*)(char *, char *))t28)(t0, t22);

LAB18:    if (t29 != 0)
        goto LAB19;

LAB14:    t22 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t22);

LAB15:    t30 = (t0 + 4896);
    t31 = *((char **)t30);
    t30 = (t0 + 3752);
    t32 = (t30 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 2952);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 8);
    t35 = (t0 + 848);
    t36 = (t0 + 4800);
    t37 = 0;
    xsi_delete_subprogram_invocation(t35, t31, t0, t36, t37);
    xsi_set_current_line(125, ng0);

LAB20:    t2 = (t0 + 2072U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    xsi_vlog_unsigned_less(t5, 64, t3, 64, t2, 64);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 120000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB17:;
LAB19:    t21 = (t0 + 4992U);
    *((char **)t21) = &&LAB16;
    goto LAB1;

LAB21:    xsi_set_current_line(126, ng0);

LAB23:    xsi_set_current_line(127, ng0);
    t11 = (t0 + 4800);
    xsi_process_wait(t11, 120000LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2072U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)118, t3, 64);
    goto LAB20;

LAB25:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    t4 = ((char*)((ng11)));
    t11 = (t0 + 2952);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 4800);
    t15 = (t0 + 848);
    t16 = xsi_create_subprogram_invocation(t14, 0, t0, t15, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t15, t16);
    t17 = (t0 + 3272);
    xsi_vlogvar_assign_value(t17, t3, 0, 0, 64);
    t18 = (t0 + 3432);
    xsi_vlogvar_assign_value(t18, t2, 0, 0, 64);
    t19 = (t0 + 3592);
    xsi_vlogvar_assign_value(t19, t4, 0, 0, 257);
    t20 = (t0 + 3752);
    xsi_vlogvar_assign_value(t20, t13, 0, 0, 8);

LAB28:    t21 = (t0 + 4896);
    t22 = *((char **)t21);
    t23 = (t22 + 80U);
    t24 = *((char **)t23);
    t25 = (t24 + 272U);
    t26 = *((char **)t25);
    t27 = (t26 + 0U);
    t28 = *((char **)t27);
    t29 = ((int  (*)(char *, char *))t28)(t0, t22);

LAB30:    if (t29 != 0)
        goto LAB31;

LAB26:    t22 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t22);

LAB27:    t30 = (t0 + 4896);
    t31 = *((char **)t30);
    t30 = (t0 + 3752);
    t32 = (t30 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 2952);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 8);
    t35 = (t0 + 848);
    t36 = (t0 + 4800);
    t37 = 0;
    xsi_delete_subprogram_invocation(t35, t31, t0, t36, t37);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 2952);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng12)));
    t12 = (t0 + 4800);
    t13 = (t0 + 1280);
    t14 = xsi_create_subprogram_invocation(t12, 0, t0, t13, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t13, t14);
    t15 = (t0 + 3912);
    xsi_vlogvar_assign_value(t15, t4, 0, 0, 8);
    t16 = (t0 + 4072);
    xsi_vlogvar_assign_value(t16, t11, 0, 0, 8);

LAB34:    t17 = (t0 + 4896);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t29 = ((int  (*)(char *, char *))t24)(t0, t18);

LAB36:    if (t29 != 0)
        goto LAB37;

LAB32:    t18 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t18);

LAB33:    t25 = (t0 + 4896);
    t26 = *((char **)t25);
    t25 = (t0 + 1280);
    t27 = (t0 + 4800);
    t28 = 0;
    xsi_delete_subprogram_invocation(t25, t26, t0, t27, t28);
    xsi_set_current_line(138, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

LAB29:;
LAB31:    t21 = (t0 + 4992U);
    *((char **)t21) = &&LAB28;
    goto LAB1;

LAB35:;
LAB37:    t17 = (t0 + 4992U);
    *((char **)t17) = &&LAB34;
    goto LAB1;

}

static void Initial_141_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(141, ng0);

LAB2:    xsi_set_current_line(142, ng0);
    t1 = ((char*)((ng7)));
    t2 = (t0 + 2472);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_146_2(char *t0)
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

LAB0:    t1 = (t0 + 5488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(146, ng0);

LAB4:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 5296);
    xsi_process_wait(t2, 60000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(147, ng0);
    t4 = (t0 + 2472);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t7) == 0)
        goto LAB6;

LAB8:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB9:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB11;

LAB10:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2472);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 5296);
    xsi_process_wait(t2, 60000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB6:    *((unsigned int *)t3) = 1;
    goto LAB9;

LAB11:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB10;

LAB12:    xsi_set_current_line(148, ng0);
    t4 = (t0 + 2472);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t7) == 0)
        goto LAB13;

LAB15:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB16:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB18;

LAB17:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2472);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 3112);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng2)));
    memset(t3, 0, 8);
    xsi_vlog_unsigned_add(t3, 32, t5, 16, t6, 32);
    t7 = (t0 + 3112);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 16);
    goto LAB2;

LAB13:    *((unsigned int *)t3) = 1;
    goto LAB16;

LAB18:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB17;

}

static void Always_154_3(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;

LAB0:    t1 = (t0 + 5736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 6056);
    *((int *)t2) = 1;
    t3 = (t0 + 5768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(155, ng0);
    t4 = (t0 + 3112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng13)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB8;

LAB5:    if (t20 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t8) = 1;

LAB8:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(156, ng0);
    xsi_vlog_stop(1);
    goto LAB11;

}


extern void work_m_00000000001180101307_0367453480_init()
{
	static char *pe[] = {(void *)Initial_72_0,(void *)Initial_141_1,(void *)Always_146_2,(void *)Always_154_3};
	static char *se[] = {(void *)sp_passTest,(void *)sp_allPassed};
	xsi_register_didat("work_m_00000000001180101307_0367453480", "isim/SingleCycleProcTest_v_isim_beh.exe.sim/work/m_00000000001180101307_0367453480.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
