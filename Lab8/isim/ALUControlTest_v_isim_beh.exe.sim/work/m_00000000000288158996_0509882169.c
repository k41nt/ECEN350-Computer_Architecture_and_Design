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
static const char *ng0 = "C:/Academic/Fall 2017/ECEN 350/Lab8/ALUControlTest.v";
static const char *ng1 = "%s passed";
static int ng2[] = {1, 0};
static const char *ng3 = "%s failed: %d should be %d";
static const char *ng4 = "All tests passed";
static const char *ng5 = "Some tests failed";
static int ng6[] = {0, 0};
static unsigned int ng7[] = {1112U, 0U};
static unsigned int ng8[] = {2U, 0U};
static int ng9[] = {1953066862, 0, 1953658211, 0, 541683315, 0, 4277316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng10[] = {4095U, 2047U};
static unsigned int ng11[] = {7U, 0U};
static int ng12[] = {1953066862, 0, 1953658211, 0, 541683315, 0, 4407898, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng13[] = {5720U, 0U};
static unsigned int ng14[] = {6U, 0U};
static int ng15[] = {1953066862, 0, 1953658211, 0, 541683315, 0, 5461314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng16[] = {5456U, 0U};
static unsigned int ng17[] = {1U, 0U};
static int ng18[] = {1953066862, 0, 1953658211, 0, 541683315, 0, 5198418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng19[] = {5208U, 0U};
static int ng20[] = {9, 0};



static int sp_passTest(char *t1, char *t2)
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
    char *t34;
    char *t35;
    char *t36;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(46, ng0);
    t5 = (t1 + 2792);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 2952);
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

LAB10:    xsi_set_current_line(47, ng0);
    t4 = (t1 + 3112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2792);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 2952);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t26 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 4, t26, (char)118, t6, 257, (char)118, t9, 6, (char)118, t13, 6);

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

LAB9:    xsi_set_current_line(46, ng0);

LAB12:    xsi_set_current_line(46, ng0);
    t33 = (t1 + 3112);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 2, t36, (char)118, t35, 257);
    xsi_set_current_line(46, ng0);
    t4 = (t1 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t6, 8, t7, 32);
    t8 = (t1 + 3272);
    xsi_vlogvar_assign_value(t8, t11, 0, 0, 8);
    goto LAB11;

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
    xsi_set_current_line(54, ng0);
    t5 = (t1 + 3432);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 3592);
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

LAB10:    xsi_set_current_line(55, ng0);
    t4 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t4);

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

LAB9:    xsi_set_current_line(54, ng0);
    t33 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t33);
    goto LAB11;

}

static void Initial_73_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
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
    int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 4512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);

LAB4:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 11);
    t4 = (t0 + 2312);
    xsi_vlogvar_assign_value(t4, t2, 11, 0, 2);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 4320);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t3 = ((char*)((ng8)));
    t6 = ((char*)((ng9)));
    t7 = (t0 + 2632);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4320);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 2792);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 6);
    t14 = (t0 + 2952);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 6);
    t15 = (t0 + 3112);
    xsi_vlogvar_assign_value(t15, t6, 0, 0, 257);
    t16 = (t0 + 3272);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB8:    t17 = (t0 + 4416);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);

LAB10:    if (t25 != 0)
        goto LAB11;

LAB6:    t18 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t18);

LAB7:    t26 = (t0 + 4416);
    t27 = *((char **)t26);
    t26 = (t0 + 3272);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2632);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4320);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 11);
    t4 = (t0 + 2312);
    xsi_vlogvar_assign_value(t4, t2, 11, 0, 2);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4320);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB9:;
LAB11:    t17 = (t0 + 4512U);
    *((char **)t17) = &&LAB8;
    goto LAB1;

LAB12:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t3 = ((char*)((ng11)));
    t6 = ((char*)((ng12)));
    t7 = (t0 + 2632);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4320);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 2792);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 6);
    t14 = (t0 + 2952);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 6);
    t15 = (t0 + 3112);
    xsi_vlogvar_assign_value(t15, t6, 0, 0, 257);
    t16 = (t0 + 3272);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB15:    t17 = (t0 + 4416);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);

LAB17:    if (t25 != 0)
        goto LAB18;

LAB13:    t18 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t18);

LAB14:    t26 = (t0 + 4416);
    t27 = *((char **)t26);
    t26 = (t0 + 3272);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2632);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4320);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 11);
    t4 = (t0 + 2312);
    xsi_vlogvar_assign_value(t4, t2, 11, 0, 2);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 4320);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB16:;
LAB18:    t17 = (t0 + 4512U);
    *((char **)t17) = &&LAB15;
    goto LAB1;

LAB19:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t3 = ((char*)((ng14)));
    t6 = ((char*)((ng15)));
    t7 = (t0 + 2632);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4320);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 2792);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 6);
    t14 = (t0 + 2952);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 6);
    t15 = (t0 + 3112);
    xsi_vlogvar_assign_value(t15, t6, 0, 0, 257);
    t16 = (t0 + 3272);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB22:    t17 = (t0 + 4416);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);

LAB24:    if (t25 != 0)
        goto LAB25;

LAB20:    t18 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t18);

LAB21:    t26 = (t0 + 4416);
    t27 = *((char **)t26);
    t26 = (t0 + 3272);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2632);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4320);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 11);
    t4 = (t0 + 2312);
    xsi_vlogvar_assign_value(t4, t2, 11, 0, 2);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4320);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB23:;
LAB25:    t17 = (t0 + 4512U);
    *((char **)t17) = &&LAB22;
    goto LAB1;

LAB26:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t3 = ((char*)((ng17)));
    t6 = ((char*)((ng18)));
    t7 = (t0 + 2632);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4320);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 2792);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 6);
    t14 = (t0 + 2952);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 6);
    t15 = (t0 + 3112);
    xsi_vlogvar_assign_value(t15, t6, 0, 0, 257);
    t16 = (t0 + 3272);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB29:    t17 = (t0 + 4416);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);

LAB31:    if (t25 != 0)
        goto LAB32;

LAB27:    t18 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t18);

LAB28:    t26 = (t0 + 4416);
    t27 = *((char **)t26);
    t26 = (t0 + 3272);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2632);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4320);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 11);
    t4 = (t0 + 2312);
    xsi_vlogvar_assign_value(t4, t2, 11, 0, 2);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 4320);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB30:;
LAB32:    t17 = (t0 + 4512U);
    *((char **)t17) = &&LAB29;
    goto LAB1;

LAB33:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t3 = ((char*)((ng8)));
    t6 = ((char*)((ng9)));
    t7 = (t0 + 2632);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4320);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 2792);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 6);
    t14 = (t0 + 2952);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 6);
    t15 = (t0 + 3112);
    xsi_vlogvar_assign_value(t15, t6, 0, 0, 257);
    t16 = (t0 + 3272);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB36:    t17 = (t0 + 4416);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);

LAB38:    if (t25 != 0)
        goto LAB39;

LAB34:    t18 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t18);

LAB35:    t26 = (t0 + 4416);
    t27 = *((char **)t26);
    t26 = (t0 + 3272);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2632);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4320);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 11);
    t4 = (t0 + 2312);
    xsi_vlogvar_assign_value(t4, t2, 11, 0, 2);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 4320);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB37:;
LAB39:    t17 = (t0 + 4512U);
    *((char **)t17) = &&LAB36;
    goto LAB1;

LAB40:    xsi_set_current_line(99, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t3 = ((char*)((ng14)));
    t6 = ((char*)((ng15)));
    t7 = (t0 + 2632);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4320);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 2792);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 6);
    t14 = (t0 + 2952);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 6);
    t15 = (t0 + 3112);
    xsi_vlogvar_assign_value(t15, t6, 0, 0, 257);
    t16 = (t0 + 3272);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB43:    t17 = (t0 + 4416);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);

LAB45:    if (t25 != 0)
        goto LAB46;

LAB41:    t18 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t18);

LAB42:    t26 = (t0 + 4416);
    t27 = *((char **)t26);
    t26 = (t0 + 3272);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2632);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4320);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 11);
    t4 = (t0 + 2312);
    xsi_vlogvar_assign_value(t4, t2, 11, 0, 2);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 4320);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB44:;
LAB46:    t17 = (t0 + 4512U);
    *((char **)t17) = &&LAB43;
    goto LAB1;

LAB47:    xsi_set_current_line(103, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t3 = ((char*)((ng17)));
    t6 = ((char*)((ng18)));
    t7 = (t0 + 2632);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4320);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 2792);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 6);
    t14 = (t0 + 2952);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 6);
    t15 = (t0 + 3112);
    xsi_vlogvar_assign_value(t15, t6, 0, 0, 257);
    t16 = (t0 + 3272);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB50:    t17 = (t0 + 4416);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);

LAB52:    if (t25 != 0)
        goto LAB53;

LAB48:    t18 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t18);

LAB49:    t26 = (t0 + 4416);
    t27 = *((char **)t26);
    t26 = (t0 + 3272);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2632);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4320);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 11);
    t4 = (t0 + 2312);
    xsi_vlogvar_assign_value(t4, t2, 11, 0, 2);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 4320);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB51:;
LAB53:    t17 = (t0 + 4512U);
    *((char **)t17) = &&LAB50;
    goto LAB1;

LAB54:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t3 = ((char*)((ng8)));
    t6 = ((char*)((ng9)));
    t7 = (t0 + 2632);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4320);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 2792);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 6);
    t14 = (t0 + 2952);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 6);
    t15 = (t0 + 3112);
    xsi_vlogvar_assign_value(t15, t6, 0, 0, 257);
    t16 = (t0 + 3272);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB57:    t17 = (t0 + 4416);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);

LAB59:    if (t25 != 0)
        goto LAB60;

LAB55:    t18 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t18);

LAB56:    t26 = (t0 + 4416);
    t27 = *((char **)t26);
    t26 = (t0 + 3272);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2632);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4320);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 11);
    t4 = (t0 + 2312);
    xsi_vlogvar_assign_value(t4, t2, 11, 0, 2);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 4320);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB58:;
LAB60:    t17 = (t0 + 4512U);
    *((char **)t17) = &&LAB57;
    goto LAB1;

LAB61:    xsi_set_current_line(111, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t3 = ((char*)((ng14)));
    t6 = ((char*)((ng15)));
    t7 = (t0 + 2632);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4320);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 2792);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 6);
    t14 = (t0 + 2952);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 6);
    t15 = (t0 + 3112);
    xsi_vlogvar_assign_value(t15, t6, 0, 0, 257);
    t16 = (t0 + 3272);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB64:    t17 = (t0 + 4416);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);

LAB66:    if (t25 != 0)
        goto LAB67;

LAB62:    t18 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t18);

LAB63:    t26 = (t0 + 4416);
    t27 = *((char **)t26);
    t26 = (t0 + 3272);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2632);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4320);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng20)));
    t7 = (t0 + 4320);
    t8 = (t0 + 1280);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 3432);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 8);
    t11 = (t0 + 3592);
    xsi_vlogvar_assign_value(t11, t6, 0, 0, 8);

LAB70:    t12 = (t0 + 4416);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t25 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB72:    if (t25 != 0)
        goto LAB73;

LAB68:    t13 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t13);

LAB69:    t20 = (t0 + 4416);
    t21 = *((char **)t20);
    t20 = (t0 + 1280);
    t22 = (t0 + 4320);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB1;

LAB65:;
LAB67:    t17 = (t0 + 4512U);
    *((char **)t17) = &&LAB64;
    goto LAB1;

LAB71:;
LAB73:    t12 = (t0 + 4512U);
    *((char **)t12) = &&LAB70;
    goto LAB1;

}


extern void work_m_00000000000288158996_0509882169_init()
{
	static char *pe[] = {(void *)Initial_73_0};
	static char *se[] = {(void *)sp_passTest,(void *)sp_allPassed};
	xsi_register_didat("work_m_00000000000288158996_0509882169", "isim/ALUControlTest_v_isim_beh.exe.sim/work/m_00000000000288158996_0509882169.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
