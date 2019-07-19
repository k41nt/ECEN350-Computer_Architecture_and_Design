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
static const char *ng0 = "C:/Academic/Fall 2017/ECEN 350/Lab06/Decode24Test.v";
static const char *ng1 = "%s passed";
static int ng2[] = {1, 0};
static const char *ng3 = "%s failed: %d should be %d";
static const char *ng4 = "All tests passed";
static const char *ng5 = "Some tests failed";
static int ng6[] = {0, 0};
static int ng7[] = {1970544688, 0, 4812400, 0, 0, 0, 0, 0};
static int ng8[] = {2, 0};
static int ng9[] = {1970544689, 0, 4812400, 0, 0, 0, 0, 0};
static int ng10[] = {4, 0};
static int ng11[] = {1970544690, 0, 4812400, 0, 0, 0, 0, 0};
static int ng12[] = {3, 0};
static int ng13[] = {8, 0};
static int ng14[] = {1970544691, 0, 4812400, 0, 0, 0, 0, 0};



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
    t5 = (t1 + 2632);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 2792);
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
    t4 = (t1 + 2952);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2632);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 2792);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t26 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 4, t26, (char)118, t6, 121, (char)118, t9, 4, (char)118, t13, 4);

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
    t33 = (t1 + 2952);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 2, t36, (char)118, t35, 121);
    xsi_set_current_line(33, ng0);
    t4 = (t1 + 3112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t6, 8, t7, 32);
    t8 = (t1 + 3112);
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
    t5 = (t1 + 3272);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 3432);
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

static void Initial_58_0(char *t0)
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

LAB0:    t1 = (t0 + 4352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);

LAB4:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4160);
    xsi_process_wait(t2, 90000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    t4 = ((char*)((ng7)));
    t5 = (t0 + 2472);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 4160);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);
    t11 = (t0 + 2632);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 4);
    t12 = (t0 + 2792);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 4);
    t13 = (t0 + 2952);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 121);
    t14 = (t0 + 3112);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);

LAB9:    t15 = (t0 + 4256);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB11:    if (t23 != 0)
        goto LAB12;

LAB7:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB8:    t24 = (t0 + 4256);
    t25 = *((char **)t24);
    t24 = (t0 + 3112);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 2472);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 8);
    t29 = (t0 + 848);
    t30 = (t0 + 4160);
    t31 = 0;
    xsi_delete_subprogram_invocation(t29, t25, t0, t30, t31);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 4160);
    xsi_process_wait(t2, 90000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB10:;
LAB12:    t15 = (t0 + 4352U);
    *((char **)t15) = &&LAB9;
    goto LAB1;

LAB13:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 4160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    t4 = ((char*)((ng9)));
    t5 = (t0 + 2472);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 4160);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);
    t11 = (t0 + 2632);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 4);
    t12 = (t0 + 2792);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 4);
    t13 = (t0 + 2952);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 121);
    t14 = (t0 + 3112);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);

LAB17:    t15 = (t0 + 4256);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB19:    if (t23 != 0)
        goto LAB20;

LAB15:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB16:    t24 = (t0 + 4256);
    t25 = *((char **)t24);
    t24 = (t0 + 3112);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 2472);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 8);
    t29 = (t0 + 848);
    t30 = (t0 + 4160);
    t31 = 0;
    xsi_delete_subprogram_invocation(t29, t25, t0, t30, t31);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4160);
    xsi_process_wait(t2, 90000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB18:;
LAB20:    t15 = (t0 + 4352U);
    *((char **)t15) = &&LAB17;
    goto LAB1;

LAB21:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    t4 = ((char*)((ng11)));
    t5 = (t0 + 2472);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 4160);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);
    t11 = (t0 + 2632);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 4);
    t12 = (t0 + 2792);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 4);
    t13 = (t0 + 2952);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 121);
    t14 = (t0 + 3112);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);

LAB25:    t15 = (t0 + 4256);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB27:    if (t23 != 0)
        goto LAB28;

LAB23:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB24:    t24 = (t0 + 4256);
    t25 = *((char **)t24);
    t24 = (t0 + 3112);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 2472);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 8);
    t29 = (t0 + 848);
    t30 = (t0 + 4160);
    t31 = 0;
    xsi_delete_subprogram_invocation(t29, t25, t0, t30, t31);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 4160);
    xsi_process_wait(t2, 90000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB26:;
LAB28:    t15 = (t0 + 4352U);
    *((char **)t15) = &&LAB25;
    goto LAB1;

LAB29:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 4160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB30:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng13)));
    t4 = ((char*)((ng14)));
    t5 = (t0 + 2472);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 4160);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);
    t11 = (t0 + 2632);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 4);
    t12 = (t0 + 2792);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 4);
    t13 = (t0 + 2952);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 121);
    t14 = (t0 + 3112);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);

LAB33:    t15 = (t0 + 4256);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB35:    if (t23 != 0)
        goto LAB36;

LAB31:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB32:    t24 = (t0 + 4256);
    t25 = *((char **)t24);
    t24 = (t0 + 3112);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 2472);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 8);
    t29 = (t0 + 848);
    t30 = (t0 + 4160);
    t31 = 0;
    xsi_delete_subprogram_invocation(t29, t25, t0, t30, t31);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    t6 = (t0 + 4160);
    t7 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 3272);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 8);
    t10 = (t0 + 3432);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 8);

LAB39:    t11 = (t0 + 4256);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t23 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB41:    if (t23 != 0)
        goto LAB42;

LAB37:    t12 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t12);

LAB38:    t19 = (t0 + 4256);
    t20 = *((char **)t19);
    t19 = (t0 + 1280);
    t21 = (t0 + 4160);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    goto LAB1;

LAB34:;
LAB36:    t15 = (t0 + 4352U);
    *((char **)t15) = &&LAB33;
    goto LAB1;

LAB40:;
LAB42:    t11 = (t0 + 4352U);
    *((char **)t11) = &&LAB39;
    goto LAB1;

}


extern void work_m_00000000002100179852_0561300785_init()
{
	static char *pe[] = {(void *)Initial_58_0};
	static char *se[] = {(void *)sp_passTest,(void *)sp_allPassed};
	xsi_register_didat("work_m_00000000002100179852_0561300785", "isim/Decode24Test_v_isim_beh.exe.sim/work/m_00000000002100179852_0561300785.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
