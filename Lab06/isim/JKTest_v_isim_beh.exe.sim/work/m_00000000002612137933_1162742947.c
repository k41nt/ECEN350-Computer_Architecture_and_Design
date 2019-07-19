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
static const char *ng0 = "C:/Academic/Fall 2017/ECEN 350/Lab06/JKTest.v";
static const char *ng1 = "%s passed";
static int ng2[] = {1, 0};
static const char *ng3 = "%s failed: %d should be %d";
static const char *ng4 = "All tests passed";
static const char *ng5 = "Some tests failed";
static int ng6[] = {0, 0};
static int ng7[] = {5465460, 0, 0, 0, 0, 0, 0, 0};
static int ng8[] = {1818566705, 0, 1416587111, 0, 0, 0, 0, 0};
static int ng9[] = {1818501169, 0, 18543, 0, 0, 0, 0, 0};
static int ng10[] = {1818566706, 0, 1416587111, 0, 0, 0, 0, 0};
static int ng11[] = {1818501170, 0, 18543, 0, 0, 0, 0, 0};
static int ng12[] = {1702061428, 0, 82, 0, 0, 0, 0, 0};
static int ng13[] = {6, 0};



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
    xsi_set_current_line(33, ng0);
    t5 = (t1 + 3112);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 3272);
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

LAB10:    xsi_set_current_line(34, ng0);
    t4 = (t1 + 3432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3112);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 3272);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t26 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 4, t26, (char)118, t6, 121, (char)118, t9, 1, (char)118, t13, 1);

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

LAB9:    xsi_set_current_line(33, ng0);

LAB12:    xsi_set_current_line(33, ng0);
    t33 = (t1 + 3432);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 2, t36, (char)118, t35, 121);
    xsi_set_current_line(33, ng0);
    t4 = (t1 + 3592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t6, 8, t7, 32);
    t8 = (t1 + 3592);
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
    xsi_set_current_line(41, ng0);
    t5 = (t1 + 3752);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 3912);
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

LAB10:    xsi_set_current_line(42, ng0);
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

LAB9:    xsi_set_current_line(41, ng0);
    t33 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t33);
    goto LAB11;

}

static void Initial_65_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 4832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);

LAB4:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 90000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 7000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 3000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 90000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    t4 = ((char*)((ng7)));
    t5 = (t0 + 2952);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 4640);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);
    t11 = (t0 + 3112);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 3272);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 1);
    t13 = (t0 + 3432);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 121);
    t14 = (t0 + 3592);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);

LAB12:    t15 = (t0 + 4736);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB14:    if (t23 != 0)
        goto LAB15;

LAB10:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB11:    t24 = (t0 + 4736);
    t25 = *((char **)t24);
    t24 = (t0 + 3592);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 2952);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 8);
    t29 = (t0 + 848);
    t30 = (t0 + 4640);
    t31 = 0;
    xsi_delete_subprogram_invocation(t29, t25, t0, t30, t31);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 90000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB13:;
LAB15:    t15 = (t0 + 4832U);
    *((char **)t15) = &&LAB12;
    goto LAB1;

LAB16:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 7000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 3000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 90000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    t4 = ((char*)((ng8)));
    t5 = (t0 + 2952);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 4640);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);
    t11 = (t0 + 3112);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 3272);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 1);
    t13 = (t0 + 3432);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 121);
    t14 = (t0 + 3592);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);

LAB22:    t15 = (t0 + 4736);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB24:    if (t23 != 0)
        goto LAB25;

LAB20:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB21:    t24 = (t0 + 4736);
    t25 = *((char **)t24);
    t24 = (t0 + 3592);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 2952);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 8);
    t29 = (t0 + 848);
    t30 = (t0 + 4640);
    t31 = 0;
    xsi_delete_subprogram_invocation(t29, t25, t0, t30, t31);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 90000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB23:;
LAB25:    t15 = (t0 + 4832U);
    *((char **)t15) = &&LAB22;
    goto LAB1;

LAB26:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 7000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 3000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 90000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    t4 = ((char*)((ng9)));
    t5 = (t0 + 2952);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 4640);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);
    t11 = (t0 + 3112);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 3272);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 1);
    t13 = (t0 + 3432);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 121);
    t14 = (t0 + 3592);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);

LAB32:    t15 = (t0 + 4736);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB34:    if (t23 != 0)
        goto LAB35;

LAB30:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB31:    t24 = (t0 + 4736);
    t25 = *((char **)t24);
    t24 = (t0 + 3592);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 2952);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 8);
    t29 = (t0 + 848);
    t30 = (t0 + 4640);
    t31 = 0;
    xsi_delete_subprogram_invocation(t29, t25, t0, t30, t31);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 90000LL);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB33:;
LAB35:    t15 = (t0 + 4832U);
    *((char **)t15) = &&LAB32;
    goto LAB1;

LAB36:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 7000LL);
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB37:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 3000LL);
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB38:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 90000LL);
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB39:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    t4 = ((char*)((ng10)));
    t5 = (t0 + 2952);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 4640);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);
    t11 = (t0 + 3112);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 3272);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 1);
    t13 = (t0 + 3432);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 121);
    t14 = (t0 + 3592);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);

LAB42:    t15 = (t0 + 4736);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB44:    if (t23 != 0)
        goto LAB45;

LAB40:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB41:    t24 = (t0 + 4736);
    t25 = *((char **)t24);
    t24 = (t0 + 3592);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 2952);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 8);
    t29 = (t0 + 848);
    t30 = (t0 + 4640);
    t31 = 0;
    xsi_delete_subprogram_invocation(t29, t25, t0, t30, t31);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 90000LL);
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB43:;
LAB45:    t15 = (t0 + 4832U);
    *((char **)t15) = &&LAB42;
    goto LAB1;

LAB46:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 7000LL);
    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB47:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 3000LL);
    *((char **)t1) = &&LAB48;
    goto LAB1;

LAB48:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 90000LL);
    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB49:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    t4 = ((char*)((ng11)));
    t5 = (t0 + 2952);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 4640);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);
    t11 = (t0 + 3112);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 3272);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 1);
    t13 = (t0 + 3432);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 121);
    t14 = (t0 + 3592);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);

LAB52:    t15 = (t0 + 4736);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB54:    if (t23 != 0)
        goto LAB55;

LAB50:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB51:    t24 = (t0 + 4736);
    t25 = *((char **)t24);
    t24 = (t0 + 3592);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 2952);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 8);
    t29 = (t0 + 848);
    t30 = (t0 + 4640);
    t31 = 0;
    xsi_delete_subprogram_invocation(t29, t25, t0, t30, t31);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 90000LL);
    *((char **)t1) = &&LAB56;
    goto LAB1;

LAB53:;
LAB55:    t15 = (t0 + 4832U);
    *((char **)t15) = &&LAB52;
    goto LAB1;

LAB56:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 7000LL);
    *((char **)t1) = &&LAB57;
    goto LAB1;

LAB57:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 3000LL);
    *((char **)t1) = &&LAB58;
    goto LAB1;

LAB58:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 90000LL);
    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB59:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    t4 = ((char*)((ng12)));
    t5 = (t0 + 2952);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 4640);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);
    t11 = (t0 + 3112);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 3272);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 1);
    t13 = (t0 + 3432);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 121);
    t14 = (t0 + 3592);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);

LAB62:    t15 = (t0 + 4736);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB64:    if (t23 != 0)
        goto LAB65;

LAB60:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB61:    t24 = (t0 + 4736);
    t25 = *((char **)t24);
    t24 = (t0 + 3592);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 2952);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 8);
    t29 = (t0 + 848);
    t30 = (t0 + 4640);
    t31 = 0;
    xsi_delete_subprogram_invocation(t29, t25, t0, t30, t31);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 90000LL);
    *((char **)t1) = &&LAB66;
    goto LAB1;

LAB63:;
LAB65:    t15 = (t0 + 4832U);
    *((char **)t15) = &&LAB62;
    goto LAB1;

LAB66:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2952);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng13)));
    t6 = (t0 + 4640);
    t7 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 3752);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 8);
    t10 = (t0 + 3912);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 8);

LAB69:    t11 = (t0 + 4736);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t23 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB71:    if (t23 != 0)
        goto LAB72;

LAB67:    t12 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t12);

LAB68:    t19 = (t0 + 4736);
    t20 = *((char **)t19);
    t19 = (t0 + 1280);
    t21 = (t0 + 4640);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    goto LAB1;

LAB70:;
LAB72:    t11 = (t0 + 4832U);
    *((char **)t11) = &&LAB69;
    goto LAB1;

}


extern void work_m_00000000002612137933_1162742947_init()
{
	static char *pe[] = {(void *)Initial_65_0};
	static char *se[] = {(void *)sp_passTest,(void *)sp_allPassed};
	xsi_register_didat("work_m_00000000002612137933_1162742947", "isim/JKTest_v_isim_beh.exe.sim/work/m_00000000002612137933_1162742947.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
