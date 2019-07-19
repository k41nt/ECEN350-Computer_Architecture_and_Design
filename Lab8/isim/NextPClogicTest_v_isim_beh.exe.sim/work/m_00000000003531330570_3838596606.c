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
static const char *ng0 = "C:/Academic/Fall 2017/ECEN 350/Lab8/NextPCLogicTest (1).v";
static const char *ng1 = "%s passed";
static int ng2[] = {1, 0};
static const char *ng3 = "%s failed: %d should be %d";
static const char *ng4 = "All tests passed";
static const char *ng5 = "Some tests failed";
static int ng6[] = {0, 0};
static int ng7[] = {0, 0, 0, 0};
static unsigned int ng8[] = {8U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static const char *ng9 = "Test case 1, CurrentPC = %b, SignExtImm64 = %b, Branch = %b, ALUZero = %b, Uncondbranch = %b";
static unsigned int ng10[] = {4U, 0U, 0U, 0U};
static int ng11[] = {1936007217, 0, 1948271457, 0, 5530995, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng12[] = {20U, 0U, 0U, 0U, 64U, 0U, 0U, 0U, 0U, 0U};
static const char *ng13 = "Test case 2, CurrentPC = %b, SignExtImm64 = %b, Branch = %b, ALUZero = %b, Uncondbranch = %b";
static unsigned int ng14[] = {12U, 0U, 0U, 0U};
static int ng15[] = {1936007218, 0, 1948271457, 0, 5530995, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng16[] = {22U, 0U, 0U, 0U, 64U, 0U, 0U, 0U, 0U, 0U};
static const char *ng17 = "Test case 3, CurrentPC = %b, SignExtImm64 = %b, Branch = %b, ALUZero = %b, Uncondbranch = %b";
static unsigned int ng18[] = {16U, 0U, 0U, 0U};
static int ng19[] = {1936007219, 0, 1948271457, 0, 5530995, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng20[] = {23U, 0U, 0U, 0U, 64U, 0U, 0U, 0U, 0U, 0U};
static const char *ng21 = "Test case 4, CurrentPC = %b, SignExtImm64 = %b, Branch = %b, ALUZero = %b, Uncondbranch = %b";
static int ng22[] = {1936007220, 0, 1948271457, 0, 5530995, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng23[] = {21U, 0U, 0U, 0U, 64U, 0U, 0U, 0U, 0U, 0U};
static const char *ng24 = "Test case 5, CurrentPC = %b, SignExtImm64 = %b, Branch = %b, ALUZero = %b, Uncondbranch = %b";
static int ng25[] = {1936007221, 0, 1948271457, 0, 5530995, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng26[] = {19U, 0U, 0U, 0U, 64U, 0U, 0U, 0U, 0U, 0U};
static const char *ng27 = "Test case 6, CurrentPC = %b, SignExtImm64 = %b, Branch = %b, ALUZero = %b, Uncondbranch = %b";
static int ng28[] = {1936007222, 0, 1948271457, 0, 5530995, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng29[] = {17U, 0U, 0U, 0U, 64U, 0U, 0U, 0U, 0U, 0U};
static const char *ng30 = "Test case 7, CurrentPC = %b, SignExtImm64 = %b, Branch = %b, ALUZero = %b, Uncondbranch = %b";
static int ng31[] = {1936007223, 0, 1948271457, 0, 5530995, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng32[] = {7, 0};



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
    xsi_set_current_line(10, ng0);
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

LAB10:    xsi_set_current_line(11, ng0);
    t4 = (t1 + 3592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3272);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 3432);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t26 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 4, t26, (char)118, t6, 257, (char)118, t9, 4, (char)118, t13, 4);

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

LAB9:    xsi_set_current_line(10, ng0);

LAB12:    xsi_set_current_line(10, ng0);
    t33 = (t1 + 3592);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 2, t36, (char)118, t35, 257);
    xsi_set_current_line(10, ng0);
    t4 = (t1 + 3752);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t6, 8, t7, 32);
    t8 = (t1 + 3752);
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
    xsi_set_current_line(18, ng0);
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

LAB10:    xsi_set_current_line(19, ng0);
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

LAB9:    xsi_set_current_line(18, ng0);
    t33 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t33);
    goto LAB11;

}

static void Initial_37_0(char *t0)
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
    char *t23;
    int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 4992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);

LAB4:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 2792);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 2632);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2472);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 64);
    t8 = (t0 + 2312);
    xsi_vlogvar_assign_value(t8, t3, 67, 0, 64);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 2312);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2472);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 2632);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 2792);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 2952);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlogfile_write(1, 0, 0, ng9, 6, t0, (char)118, t5, 64, (char)118, t8, 64, (char)118, t11, 1, (char)118, t14, 1, (char)118, t17, 1);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng10)));
    t5 = ((char*)((ng11)));
    t6 = (t0 + 3112);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 4800);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3272);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 4);
    t13 = (t0 + 3432);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 4);
    t14 = (t0 + 3592);
    xsi_vlogvar_assign_value(t14, t5, 0, 0, 257);
    t15 = (t0 + 3752);
    xsi_vlogvar_assign_value(t15, t8, 0, 0, 8);

LAB10:    t16 = (t0 + 4896);
    t17 = *((char **)t16);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t24 = ((int  (*)(char *, char *))t23)(t0, t17);

LAB12:    if (t24 != 0)
        goto LAB13;

LAB8:    t17 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t17);

LAB9:    t25 = (t0 + 4896);
    t26 = *((char **)t25);
    t25 = (t0 + 3752);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t29 = (t0 + 3112);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 8);
    t30 = (t0 + 848);
    t31 = (t0 + 4800);
    t32 = 0;
    xsi_delete_subprogram_invocation(t30, t26, t0, t31, t32);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB11:;
LAB13:    t16 = (t0 + 4992U);
    *((char **)t16) = &&LAB10;
    goto LAB1;

LAB14:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 2792);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 2632);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2472);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 64);
    t8 = (t0 + 2312);
    xsi_vlogvar_assign_value(t8, t3, 67, 0, 64);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 2312);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2472);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 2632);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 2792);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 2952);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlogfile_write(1, 0, 0, ng13, 6, t0, (char)118, t5, 64, (char)118, t8, 64, (char)118, t11, 1, (char)118, t14, 1, (char)118, t17, 1);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng14)));
    t5 = ((char*)((ng15)));
    t6 = (t0 + 3112);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 4800);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3272);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 4);
    t13 = (t0 + 3432);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 4);
    t14 = (t0 + 3592);
    xsi_vlogvar_assign_value(t14, t5, 0, 0, 257);
    t15 = (t0 + 3752);
    xsi_vlogvar_assign_value(t15, t8, 0, 0, 8);

LAB19:    t16 = (t0 + 4896);
    t17 = *((char **)t16);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t24 = ((int  (*)(char *, char *))t23)(t0, t17);

LAB21:    if (t24 != 0)
        goto LAB22;

LAB17:    t17 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t17);

LAB18:    t25 = (t0 + 4896);
    t26 = *((char **)t25);
    t25 = (t0 + 3752);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t29 = (t0 + 3112);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 8);
    t30 = (t0 + 848);
    t31 = (t0 + 4800);
    t32 = 0;
    xsi_delete_subprogram_invocation(t30, t26, t0, t31, t32);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB20:;
LAB22:    t16 = (t0 + 4992U);
    *((char **)t16) = &&LAB19;
    goto LAB1;

LAB23:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 2792);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 2632);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2472);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 64);
    t8 = (t0 + 2312);
    xsi_vlogvar_assign_value(t8, t3, 67, 0, 64);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 2312);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2472);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 2632);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 2792);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 2952);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlogfile_write(1, 0, 0, ng17, 6, t0, (char)118, t5, 64, (char)118, t8, 64, (char)118, t11, 1, (char)118, t14, 1, (char)118, t17, 1);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng18)));
    t5 = ((char*)((ng19)));
    t6 = (t0 + 3112);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 4800);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3272);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 4);
    t13 = (t0 + 3432);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 4);
    t14 = (t0 + 3592);
    xsi_vlogvar_assign_value(t14, t5, 0, 0, 257);
    t15 = (t0 + 3752);
    xsi_vlogvar_assign_value(t15, t8, 0, 0, 8);

LAB28:    t16 = (t0 + 4896);
    t17 = *((char **)t16);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t24 = ((int  (*)(char *, char *))t23)(t0, t17);

LAB30:    if (t24 != 0)
        goto LAB31;

LAB26:    t17 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t17);

LAB27:    t25 = (t0 + 4896);
    t26 = *((char **)t25);
    t25 = (t0 + 3752);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t29 = (t0 + 3112);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 8);
    t30 = (t0 + 848);
    t31 = (t0 + 4800);
    t32 = 0;
    xsi_delete_subprogram_invocation(t30, t26, t0, t31, t32);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB29:;
LAB31:    t16 = (t0 + 4992U);
    *((char **)t16) = &&LAB28;
    goto LAB1;

LAB32:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 2792);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 2632);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2472);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 64);
    t8 = (t0 + 2312);
    xsi_vlogvar_assign_value(t8, t3, 67, 0, 64);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB33:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 2312);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2472);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 2632);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 2792);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 2952);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlogfile_write(1, 0, 0, ng21, 6, t0, (char)118, t5, 64, (char)118, t8, 64, (char)118, t11, 1, (char)118, t14, 1, (char)118, t17, 1);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB34:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng18)));
    t5 = ((char*)((ng22)));
    t6 = (t0 + 3112);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 4800);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3272);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 4);
    t13 = (t0 + 3432);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 4);
    t14 = (t0 + 3592);
    xsi_vlogvar_assign_value(t14, t5, 0, 0, 257);
    t15 = (t0 + 3752);
    xsi_vlogvar_assign_value(t15, t8, 0, 0, 8);

LAB37:    t16 = (t0 + 4896);
    t17 = *((char **)t16);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t24 = ((int  (*)(char *, char *))t23)(t0, t17);

LAB39:    if (t24 != 0)
        goto LAB40;

LAB35:    t17 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t17);

LAB36:    t25 = (t0 + 4896);
    t26 = *((char **)t25);
    t25 = (t0 + 3752);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t29 = (t0 + 3112);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 8);
    t30 = (t0 + 848);
    t31 = (t0 + 4800);
    t32 = 0;
    xsi_delete_subprogram_invocation(t30, t26, t0, t31, t32);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB38:;
LAB40:    t16 = (t0 + 4992U);
    *((char **)t16) = &&LAB37;
    goto LAB1;

LAB41:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng23)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 2792);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 2632);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2472);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 64);
    t8 = (t0 + 2312);
    xsi_vlogvar_assign_value(t8, t3, 67, 0, 64);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB42:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 2312);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2472);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 2632);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 2792);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 2952);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlogfile_write(1, 0, 0, ng24, 6, t0, (char)118, t5, 64, (char)118, t8, 64, (char)118, t11, 1, (char)118, t14, 1, (char)118, t17, 1);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB43:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng18)));
    t5 = ((char*)((ng25)));
    t6 = (t0 + 3112);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 4800);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3272);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 4);
    t13 = (t0 + 3432);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 4);
    t14 = (t0 + 3592);
    xsi_vlogvar_assign_value(t14, t5, 0, 0, 257);
    t15 = (t0 + 3752);
    xsi_vlogvar_assign_value(t15, t8, 0, 0, 8);

LAB46:    t16 = (t0 + 4896);
    t17 = *((char **)t16);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t24 = ((int  (*)(char *, char *))t23)(t0, t17);

LAB48:    if (t24 != 0)
        goto LAB49;

LAB44:    t17 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t17);

LAB45:    t25 = (t0 + 4896);
    t26 = *((char **)t25);
    t25 = (t0 + 3752);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t29 = (t0 + 3112);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 8);
    t30 = (t0 + 848);
    t31 = (t0 + 4800);
    t32 = 0;
    xsi_delete_subprogram_invocation(t30, t26, t0, t31, t32);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB47:;
LAB49:    t16 = (t0 + 4992U);
    *((char **)t16) = &&LAB46;
    goto LAB1;

LAB50:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng26)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 2792);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 2632);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2472);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 64);
    t8 = (t0 + 2312);
    xsi_vlogvar_assign_value(t8, t3, 67, 0, 64);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB51:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 2312);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2472);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 2632);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 2792);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 2952);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlogfile_write(1, 0, 0, ng27, 6, t0, (char)118, t5, 64, (char)118, t8, 64, (char)118, t11, 1, (char)118, t14, 1, (char)118, t17, 1);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB52:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng18)));
    t5 = ((char*)((ng28)));
    t6 = (t0 + 3112);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 4800);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3272);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 4);
    t13 = (t0 + 3432);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 4);
    t14 = (t0 + 3592);
    xsi_vlogvar_assign_value(t14, t5, 0, 0, 257);
    t15 = (t0 + 3752);
    xsi_vlogvar_assign_value(t15, t8, 0, 0, 8);

LAB55:    t16 = (t0 + 4896);
    t17 = *((char **)t16);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t24 = ((int  (*)(char *, char *))t23)(t0, t17);

LAB57:    if (t24 != 0)
        goto LAB58;

LAB53:    t17 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t17);

LAB54:    t25 = (t0 + 4896);
    t26 = *((char **)t25);
    t25 = (t0 + 3752);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t29 = (t0 + 3112);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 8);
    t30 = (t0 + 848);
    t31 = (t0 + 4800);
    t32 = 0;
    xsi_delete_subprogram_invocation(t30, t26, t0, t31, t32);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB56:;
LAB58:    t16 = (t0 + 4992U);
    *((char **)t16) = &&LAB55;
    goto LAB1;

LAB59:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng29)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 2792);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 2632);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2472);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 64);
    t8 = (t0 + 2312);
    xsi_vlogvar_assign_value(t8, t3, 67, 0, 64);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB60;
    goto LAB1;

LAB60:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 2312);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2472);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 2632);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 2792);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 2952);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlogfile_write(1, 0, 0, ng30, 6, t0, (char)118, t5, 64, (char)118, t8, 64, (char)118, t11, 1, (char)118, t14, 1, (char)118, t17, 1);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB61:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng18)));
    t5 = ((char*)((ng31)));
    t6 = (t0 + 3112);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 4800);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3272);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 4);
    t13 = (t0 + 3432);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 4);
    t14 = (t0 + 3592);
    xsi_vlogvar_assign_value(t14, t5, 0, 0, 257);
    t15 = (t0 + 3752);
    xsi_vlogvar_assign_value(t15, t8, 0, 0, 8);

LAB64:    t16 = (t0 + 4896);
    t17 = *((char **)t16);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t24 = ((int  (*)(char *, char *))t23)(t0, t17);

LAB66:    if (t24 != 0)
        goto LAB67;

LAB62:    t17 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t17);

LAB63:    t25 = (t0 + 4896);
    t26 = *((char **)t25);
    t25 = (t0 + 3752);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t29 = (t0 + 3112);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 8);
    t30 = (t0 + 848);
    t31 = (t0 + 4800);
    t32 = 0;
    xsi_delete_subprogram_invocation(t30, t26, t0, t31, t32);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB68;
    goto LAB1;

LAB65:;
LAB67:    t16 = (t0 + 4992U);
    *((char **)t16) = &&LAB64;
    goto LAB1;

LAB68:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 3112);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng32)));
    t7 = (t0 + 4800);
    t8 = (t0 + 1280);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 3912);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 8);
    t11 = (t0 + 4072);
    xsi_vlogvar_assign_value(t11, t6, 0, 0, 8);

LAB71:    t12 = (t0 + 4896);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t24 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB73:    if (t24 != 0)
        goto LAB74;

LAB69:    t13 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t13);

LAB70:    t20 = (t0 + 4896);
    t21 = *((char **)t20);
    t20 = (t0 + 1280);
    t22 = (t0 + 4800);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB1;

LAB72:;
LAB74:    t12 = (t0 + 4992U);
    *((char **)t12) = &&LAB71;
    goto LAB1;

}


extern void work_m_00000000003531330570_3838596606_init()
{
	static char *pe[] = {(void *)Initial_37_0};
	static char *se[] = {(void *)sp_passTest,(void *)sp_allPassed};
	xsi_register_didat("work_m_00000000003531330570_3838596606", "isim/NextPClogicTest_v_isim_beh.exe.sim/work/m_00000000003531330570_3838596606.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
