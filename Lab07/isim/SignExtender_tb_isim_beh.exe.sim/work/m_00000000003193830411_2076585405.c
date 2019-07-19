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
static const char *ng0 = "C:/Academic/Fall 2017/ECEN 350/Lab07/SignExtender_tb.v";
static const char *ng1 = "%0t - Test Passed.";
static const char *ng2 = "actualOut - %B";
static const char *ng3 = "expectedOut - %B";
static const char *ng4 = " ";
static const char *ng5 = "%0t - Test Failed.";
static int ng6[] = {0, 0};
static unsigned int ng7[] = {0U, 0U, 0U, 0U};
static unsigned int ng8[] = {357913941U, 0U};
static unsigned int ng9[] = {89478484U, 0U, 0U, 0U};
static unsigned int ng10[] = {2527767210U, 0U};
static unsigned int ng11[] = {4205488808U, 0U, 4294967295U, 0U};
static unsigned int ng12[] = {3048559936U, 0U};
static unsigned int ng13[] = {4294355624U, 0U, 4294967295U, 0U};
static unsigned int ng14[] = {4161445888U, 0U};
static unsigned int ng15[] = {170U, 0U, 0U, 0U};
static unsigned int ng16[] = {4166340608U, 0U};
static unsigned int ng17[] = {4294967125U, 0U, 4294967295U, 0U};
static unsigned int ng18[] = {3546288747U, 0U};
static unsigned int ng19[] = {4U, 0U, 0U, 0U};
static unsigned int ng20[] = {2432697641U, 0U};
static unsigned int ng21[] = {1U, 0U, 0U, 0U};



static int sp_passTest(char *t1, char *t2)
{
    char t11[16];
    char t18[16];
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
    char *t19;
    char *t20;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(12, ng0);
    t5 = (t1 + 2200);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 2360);
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

LAB6:    xsi_set_current_line(20, ng0);

LAB9:    xsi_set_current_line(21, ng0);
    t4 = xsi_vlog_time(t11, 1000.0000000000000, 1000.0000000000000);
    t5 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t5, (char)118, t11, 64);
    xsi_set_current_line(22, ng0);
    t4 = (t1 + 2200);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng2, 2, t7, (char)118, t6, 64);
    xsi_set_current_line(23, ng0);
    t4 = (t1 + 2360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 2, t7, (char)118, t6, 64);
    xsi_set_current_line(24, ng0);
    t4 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t4);

LAB7:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB5:    xsi_set_current_line(13, ng0);

LAB8:    xsi_set_current_line(14, ng0);
    t19 = xsi_vlog_time(t18, 1000.0000000000000, 1000.0000000000000);
    t20 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 2, t20, (char)118, t18, 64);
    xsi_set_current_line(15, ng0);
    t4 = (t1 + 2200);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng2, 2, t7, (char)118, t6, 64);
    xsi_set_current_line(16, ng0);
    t4 = (t1 + 2360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 2, t7, (char)118, t6, 64);
    xsi_set_current_line(17, ng0);
    t4 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t4);
    goto LAB7;

}

static void Initial_28_0(char *t0)
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
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 3280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);

LAB4:    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 2040);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3088);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 2200);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 64);
    t11 = (t0 + 2360);
    xsi_vlogvar_assign_value(t11, t6, 0, 0, 64);

LAB9:    t12 = (t0 + 3184);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t20 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB11:    if (t20 != 0)
        goto LAB12;

LAB7:    t13 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t13);

LAB8:    t21 = (t0 + 3184);
    t22 = *((char **)t21);
    t21 = (t0 + 848);
    t23 = (t0 + 3088);
    t24 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t0, t23, t24);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB10:;
LAB12:    t12 = (t0 + 3280U);
    *((char **)t12) = &&LAB9;
    goto LAB1;

LAB13:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 2040);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3088);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 2200);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 64);
    t11 = (t0 + 2360);
    xsi_vlogvar_assign_value(t11, t6, 0, 0, 64);

LAB17:    t12 = (t0 + 3184);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t20 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB19:    if (t20 != 0)
        goto LAB20;

LAB15:    t13 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t13);

LAB16:    t21 = (t0 + 3184);
    t22 = *((char **)t21);
    t21 = (t0 + 848);
    t23 = (t0 + 3088);
    t24 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t0, t23, t24);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB18:;
LAB20:    t12 = (t0 + 3280U);
    *((char **)t12) = &&LAB17;
    goto LAB1;

LAB21:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 2040);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3088);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 2200);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 64);
    t11 = (t0 + 2360);
    xsi_vlogvar_assign_value(t11, t6, 0, 0, 64);

LAB25:    t12 = (t0 + 3184);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t20 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB27:    if (t20 != 0)
        goto LAB28;

LAB23:    t13 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t13);

LAB24:    t21 = (t0 + 3184);
    t22 = *((char **)t21);
    t21 = (t0 + 848);
    t23 = (t0 + 3088);
    t24 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t0, t23, t24);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB26:;
LAB28:    t12 = (t0 + 3280U);
    *((char **)t12) = &&LAB25;
    goto LAB1;

LAB29:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB30:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 2040);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3088);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 2200);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 64);
    t11 = (t0 + 2360);
    xsi_vlogvar_assign_value(t11, t6, 0, 0, 64);

LAB33:    t12 = (t0 + 3184);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t20 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB35:    if (t20 != 0)
        goto LAB36;

LAB31:    t13 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t13);

LAB32:    t21 = (t0 + 3184);
    t22 = *((char **)t21);
    t21 = (t0 + 848);
    t23 = (t0 + 3088);
    t24 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t0, t23, t24);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB34:;
LAB36:    t12 = (t0 + 3280U);
    *((char **)t12) = &&LAB33;
    goto LAB1;

LAB37:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB38:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 2040);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3088);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 2200);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 64);
    t11 = (t0 + 2360);
    xsi_vlogvar_assign_value(t11, t6, 0, 0, 64);

LAB41:    t12 = (t0 + 3184);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t20 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB43:    if (t20 != 0)
        goto LAB44;

LAB39:    t13 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t13);

LAB40:    t21 = (t0 + 3184);
    t22 = *((char **)t21);
    t21 = (t0 + 848);
    t23 = (t0 + 3088);
    t24 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t0, t23, t24);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB42:;
LAB44:    t12 = (t0 + 3280U);
    *((char **)t12) = &&LAB41;
    goto LAB1;

LAB45:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB46:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 2040);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3088);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 2200);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 64);
    t11 = (t0 + 2360);
    xsi_vlogvar_assign_value(t11, t6, 0, 0, 64);

LAB49:    t12 = (t0 + 3184);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t20 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB51:    if (t20 != 0)
        goto LAB52;

LAB47:    t13 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t13);

LAB48:    t21 = (t0 + 3184);
    t22 = *((char **)t21);
    t21 = (t0 + 848);
    t23 = (t0 + 3088);
    t24 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t0, t23, t24);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB50:;
LAB52:    t12 = (t0 + 3280U);
    *((char **)t12) = &&LAB49;
    goto LAB1;

LAB53:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 1880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB54:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 2040);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3088);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 2200);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 64);
    t11 = (t0 + 2360);
    xsi_vlogvar_assign_value(t11, t6, 0, 0, 64);

LAB57:    t12 = (t0 + 3184);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t20 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB59:    if (t20 != 0)
        goto LAB60;

LAB55:    t13 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t13);

LAB56:    t21 = (t0 + 3184);
    t22 = *((char **)t21);
    t21 = (t0 + 848);
    t23 = (t0 + 3088);
    t24 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t0, t23, t24);
    xsi_set_current_line(76, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB58:;
LAB60:    t12 = (t0 + 3280U);
    *((char **)t12) = &&LAB57;
    goto LAB1;

}


extern void work_m_00000000003193830411_2076585405_init()
{
	static char *pe[] = {(void *)Initial_28_0};
	static char *se[] = {(void *)sp_passTest};
	xsi_register_didat("work_m_00000000003193830411_2076585405", "isim/SignExtender_tb_isim_beh.exe.sim/work/m_00000000003193830411_2076585405.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
