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
static const char *ng0 = "C:/Academic/Fall 2017/ECEN 350/Lab06/Mux21Test.v";
static const char *ng1 = "%s passed";
static int ng2[] = {1, 0};
static const char *ng3 = "%s failed: %d should be %d";
static const char *ng4 = "All tests passed";
static const char *ng5 = "Some tests failed";
static int ng6[] = {0, 0};
static int ng7[] = {1936990256, 0, 541485426, 0, 1818583924, 0, 21349, 0};
static int ng8[] = {1936990257, 0, 541485426, 0, 1818583924, 0, 21349, 0};
static int ng9[] = {2, 0};
static int ng10[] = {1936990258, 0, 541485426, 0, 1818583924, 0, 21349, 0};
static int ng11[] = {3, 0};
static int ng12[] = {1936990259, 0, 541485426, 0, 1818583924, 0, 21349, 0};
static int ng13[] = {1852055600, 0, 1399153519, 0, 1701016608, 0, 5465452, 0};
static int ng14[] = {1852055601, 0, 1399153519, 0, 1701016608, 0, 5465452, 0};
static int ng15[] = {1852055602, 0, 1399153519, 0, 1701016608, 0, 5465452, 0};
static int ng16[] = {1852055603, 0, 1399153519, 0, 1701016608, 0, 5465452, 0};
static int ng17[] = {8, 0};



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
    t5 = (t1 + 3224);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 3384);
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
    t4 = (t1 + 3544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3224);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 3384);
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
    t33 = (t1 + 3544);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 2, t36, (char)118, t35, 121);
    xsi_set_current_line(33, ng0);
    t4 = (t1 + 3704);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t6, 8, t7, 32);
    t8 = (t1 + 3704);
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
    t5 = (t1 + 3864);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 4024);
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

static int sp_stim(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 90000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(53, ng0);
    t4 = (t1 + 4184);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4504);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 2);
    xsi_set_current_line(54, ng0);
    t4 = (t1 + 4344);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4664);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    goto LAB4;

}

static void Initial_73_0(char *t0)
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
    int t17;
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
    char *t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 5584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);

LAB4:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng6)));
    t4 = (t0 + 5392);
    t5 = (t0 + 1712);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 4184);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 2);
    t8 = (t0 + 4344);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);

LAB7:    t9 = (t0 + 5488);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB9:    if (t17 != 0)
        goto LAB10;

LAB5:    t10 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t10);

LAB6:    t18 = (t0 + 5488);
    t19 = *((char **)t18);
    t18 = (t0 + 4504);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 2744);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 2);
    t23 = (t0 + 4664);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 2904);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 1);
    t27 = (t0 + 1712);
    t28 = (t0 + 5392);
    t29 = 0;
    xsi_delete_subprogram_invocation(t27, t19, t0, t28, t29);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 5392);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB11;

LAB1:    return;
LAB8:;
LAB10:    t9 = (t0 + 5584U);
    *((char **)t9) = &&LAB7;
    goto LAB1;

LAB11:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    t4 = ((char*)((ng7)));
    t5 = (t0 + 3064);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 5392);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);
    t11 = (t0 + 3224);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 3384);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 1);
    t13 = (t0 + 3544);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 121);
    t14 = (t0 + 3704);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);

LAB14:    t15 = (t0 + 5488);
    t16 = *((char **)t15);
    t18 = (t16 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t17 = ((int  (*)(char *, char *))t23)(t0, t16);

LAB16:    if (t17 != 0)
        goto LAB17;

LAB12:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB13:    t24 = (t0 + 5488);
    t25 = *((char **)t24);
    t24 = (t0 + 3704);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 3064);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 8);
    t29 = (t0 + 848);
    t30 = (t0 + 5392);
    t31 = 0;
    xsi_delete_subprogram_invocation(t29, t25, t0, t30, t31);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng2)));
    t3 = ((char*)((ng6)));
    t4 = (t0 + 5392);
    t5 = (t0 + 1712);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 4184);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 2);
    t8 = (t0 + 4344);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);

LAB20:    t9 = (t0 + 5488);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB22:    if (t17 != 0)
        goto LAB23;

LAB18:    t10 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t10);

LAB19:    t18 = (t0 + 5488);
    t19 = *((char **)t18);
    t18 = (t0 + 4504);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 2744);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 2);
    t23 = (t0 + 4664);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 2904);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 1);
    t27 = (t0 + 1712);
    t28 = (t0 + 5392);
    t29 = 0;
    xsi_delete_subprogram_invocation(t27, t19, t0, t28, t29);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 5392);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB15:;
LAB17:    t15 = (t0 + 5584U);
    *((char **)t15) = &&LAB14;
    goto LAB1;

LAB21:;
LAB23:    t9 = (t0 + 5584U);
    *((char **)t9) = &&LAB20;
    goto LAB1;

LAB24:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    t4 = ((char*)((ng8)));
    t5 = (t0 + 3064);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 5392);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);
    t11 = (t0 + 3224);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 3384);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 1);
    t13 = (t0 + 3544);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 121);
    t14 = (t0 + 3704);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);

LAB27:    t15 = (t0 + 5488);
    t16 = *((char **)t15);
    t18 = (t16 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t17 = ((int  (*)(char *, char *))t23)(t0, t16);

LAB29:    if (t17 != 0)
        goto LAB30;

LAB25:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB26:    t24 = (t0 + 5488);
    t25 = *((char **)t24);
    t24 = (t0 + 3704);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 3064);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 8);
    t29 = (t0 + 848);
    t30 = (t0 + 5392);
    t31 = 0;
    xsi_delete_subprogram_invocation(t29, t25, t0, t30, t31);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng9)));
    t3 = ((char*)((ng6)));
    t4 = (t0 + 5392);
    t5 = (t0 + 1712);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 4184);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 2);
    t8 = (t0 + 4344);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);

LAB33:    t9 = (t0 + 5488);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB35:    if (t17 != 0)
        goto LAB36;

LAB31:    t10 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t10);

LAB32:    t18 = (t0 + 5488);
    t19 = *((char **)t18);
    t18 = (t0 + 4504);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 2744);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 2);
    t23 = (t0 + 4664);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 2904);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 1);
    t27 = (t0 + 1712);
    t28 = (t0 + 5392);
    t29 = 0;
    xsi_delete_subprogram_invocation(t27, t19, t0, t28, t29);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 5392);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB28:;
LAB30:    t15 = (t0 + 5584U);
    *((char **)t15) = &&LAB27;
    goto LAB1;

LAB34:;
LAB36:    t9 = (t0 + 5584U);
    *((char **)t9) = &&LAB33;
    goto LAB1;

LAB37:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    t4 = ((char*)((ng10)));
    t5 = (t0 + 3064);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 5392);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);
    t11 = (t0 + 3224);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 3384);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 1);
    t13 = (t0 + 3544);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 121);
    t14 = (t0 + 3704);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);

LAB40:    t15 = (t0 + 5488);
    t16 = *((char **)t15);
    t18 = (t16 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t17 = ((int  (*)(char *, char *))t23)(t0, t16);

LAB42:    if (t17 != 0)
        goto LAB43;

LAB38:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB39:    t24 = (t0 + 5488);
    t25 = *((char **)t24);
    t24 = (t0 + 3704);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 3064);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 8);
    t29 = (t0 + 848);
    t30 = (t0 + 5392);
    t31 = 0;
    xsi_delete_subprogram_invocation(t29, t25, t0, t30, t31);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng11)));
    t3 = ((char*)((ng6)));
    t4 = (t0 + 5392);
    t5 = (t0 + 1712);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 4184);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 2);
    t8 = (t0 + 4344);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);

LAB46:    t9 = (t0 + 5488);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB48:    if (t17 != 0)
        goto LAB49;

LAB44:    t10 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t10);

LAB45:    t18 = (t0 + 5488);
    t19 = *((char **)t18);
    t18 = (t0 + 4504);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 2744);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 2);
    t23 = (t0 + 4664);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 2904);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 1);
    t27 = (t0 + 1712);
    t28 = (t0 + 5392);
    t29 = 0;
    xsi_delete_subprogram_invocation(t27, t19, t0, t28, t29);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 5392);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB41:;
LAB43:    t15 = (t0 + 5584U);
    *((char **)t15) = &&LAB40;
    goto LAB1;

LAB47:;
LAB49:    t9 = (t0 + 5584U);
    *((char **)t9) = &&LAB46;
    goto LAB1;

LAB50:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    t4 = ((char*)((ng12)));
    t5 = (t0 + 3064);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 5392);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);
    t11 = (t0 + 3224);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 3384);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 1);
    t13 = (t0 + 3544);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 121);
    t14 = (t0 + 3704);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);

LAB53:    t15 = (t0 + 5488);
    t16 = *((char **)t15);
    t18 = (t16 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t17 = ((int  (*)(char *, char *))t23)(t0, t16);

LAB55:    if (t17 != 0)
        goto LAB56;

LAB51:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB52:    t24 = (t0 + 5488);
    t25 = *((char **)t24);
    t24 = (t0 + 3704);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 3064);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 8);
    t29 = (t0 + 848);
    t30 = (t0 + 5392);
    t31 = 0;
    xsi_delete_subprogram_invocation(t29, t25, t0, t30, t31);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5392);
    t5 = (t0 + 1712);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 4184);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 2);
    t8 = (t0 + 4344);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);

LAB59:    t9 = (t0 + 5488);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB61:    if (t17 != 0)
        goto LAB62;

LAB57:    t10 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t10);

LAB58:    t18 = (t0 + 5488);
    t19 = *((char **)t18);
    t18 = (t0 + 4504);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 2744);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 2);
    t23 = (t0 + 4664);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 2904);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 1);
    t27 = (t0 + 1712);
    t28 = (t0 + 5392);
    t29 = 0;
    xsi_delete_subprogram_invocation(t27, t19, t0, t28, t29);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 5392);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB54:;
LAB56:    t15 = (t0 + 5584U);
    *((char **)t15) = &&LAB53;
    goto LAB1;

LAB60:;
LAB62:    t9 = (t0 + 5584U);
    *((char **)t9) = &&LAB59;
    goto LAB1;

LAB63:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    t4 = ((char*)((ng13)));
    t5 = (t0 + 3064);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 5392);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);
    t11 = (t0 + 3224);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 3384);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 1);
    t13 = (t0 + 3544);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 121);
    t14 = (t0 + 3704);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);

LAB66:    t15 = (t0 + 5488);
    t16 = *((char **)t15);
    t18 = (t16 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t17 = ((int  (*)(char *, char *))t23)(t0, t16);

LAB68:    if (t17 != 0)
        goto LAB69;

LAB64:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB65:    t24 = (t0 + 5488);
    t25 = *((char **)t24);
    t24 = (t0 + 3704);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 3064);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 8);
    t29 = (t0 + 848);
    t30 = (t0 + 5392);
    t31 = 0;
    xsi_delete_subprogram_invocation(t29, t25, t0, t30, t31);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5392);
    t5 = (t0 + 1712);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 4184);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 2);
    t8 = (t0 + 4344);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);

LAB72:    t9 = (t0 + 5488);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB74:    if (t17 != 0)
        goto LAB75;

LAB70:    t10 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t10);

LAB71:    t18 = (t0 + 5488);
    t19 = *((char **)t18);
    t18 = (t0 + 4504);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 2744);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 2);
    t23 = (t0 + 4664);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 2904);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 1);
    t27 = (t0 + 1712);
    t28 = (t0 + 5392);
    t29 = 0;
    xsi_delete_subprogram_invocation(t27, t19, t0, t28, t29);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 5392);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB76;
    goto LAB1;

LAB67:;
LAB69:    t15 = (t0 + 5584U);
    *((char **)t15) = &&LAB66;
    goto LAB1;

LAB73:;
LAB75:    t9 = (t0 + 5584U);
    *((char **)t9) = &&LAB72;
    goto LAB1;

LAB76:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    t4 = ((char*)((ng14)));
    t5 = (t0 + 3064);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 5392);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);
    t11 = (t0 + 3224);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 3384);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 1);
    t13 = (t0 + 3544);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 121);
    t14 = (t0 + 3704);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);

LAB79:    t15 = (t0 + 5488);
    t16 = *((char **)t15);
    t18 = (t16 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t17 = ((int  (*)(char *, char *))t23)(t0, t16);

LAB81:    if (t17 != 0)
        goto LAB82;

LAB77:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB78:    t24 = (t0 + 5488);
    t25 = *((char **)t24);
    t24 = (t0 + 3704);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 3064);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 8);
    t29 = (t0 + 848);
    t30 = (t0 + 5392);
    t31 = 0;
    xsi_delete_subprogram_invocation(t29, t25, t0, t30, t31);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng9)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5392);
    t5 = (t0 + 1712);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 4184);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 2);
    t8 = (t0 + 4344);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);

LAB85:    t9 = (t0 + 5488);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB87:    if (t17 != 0)
        goto LAB88;

LAB83:    t10 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t10);

LAB84:    t18 = (t0 + 5488);
    t19 = *((char **)t18);
    t18 = (t0 + 4504);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 2744);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 2);
    t23 = (t0 + 4664);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 2904);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 1);
    t27 = (t0 + 1712);
    t28 = (t0 + 5392);
    t29 = 0;
    xsi_delete_subprogram_invocation(t27, t19, t0, t28, t29);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 5392);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB89;
    goto LAB1;

LAB80:;
LAB82:    t15 = (t0 + 5584U);
    *((char **)t15) = &&LAB79;
    goto LAB1;

LAB86:;
LAB88:    t9 = (t0 + 5584U);
    *((char **)t9) = &&LAB85;
    goto LAB1;

LAB89:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    t4 = ((char*)((ng15)));
    t5 = (t0 + 3064);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 5392);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);
    t11 = (t0 + 3224);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 3384);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 1);
    t13 = (t0 + 3544);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 121);
    t14 = (t0 + 3704);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);

LAB92:    t15 = (t0 + 5488);
    t16 = *((char **)t15);
    t18 = (t16 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t17 = ((int  (*)(char *, char *))t23)(t0, t16);

LAB94:    if (t17 != 0)
        goto LAB95;

LAB90:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB91:    t24 = (t0 + 5488);
    t25 = *((char **)t24);
    t24 = (t0 + 3704);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 3064);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 8);
    t29 = (t0 + 848);
    t30 = (t0 + 5392);
    t31 = 0;
    xsi_delete_subprogram_invocation(t29, t25, t0, t30, t31);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng11)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5392);
    t5 = (t0 + 1712);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 4184);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 2);
    t8 = (t0 + 4344);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);

LAB98:    t9 = (t0 + 5488);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB100:    if (t17 != 0)
        goto LAB101;

LAB96:    t10 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t10);

LAB97:    t18 = (t0 + 5488);
    t19 = *((char **)t18);
    t18 = (t0 + 4504);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 2744);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 2);
    t23 = (t0 + 4664);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 2904);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 1);
    t27 = (t0 + 1712);
    t28 = (t0 + 5392);
    t29 = 0;
    xsi_delete_subprogram_invocation(t27, t19, t0, t28, t29);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 5392);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB102;
    goto LAB1;

LAB93:;
LAB95:    t15 = (t0 + 5584U);
    *((char **)t15) = &&LAB92;
    goto LAB1;

LAB99:;
LAB101:    t9 = (t0 + 5584U);
    *((char **)t9) = &&LAB98;
    goto LAB1;

LAB102:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    t4 = ((char*)((ng16)));
    t5 = (t0 + 3064);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 5392);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);
    t11 = (t0 + 3224);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 3384);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 1);
    t13 = (t0 + 3544);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 121);
    t14 = (t0 + 3704);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);

LAB105:    t15 = (t0 + 5488);
    t16 = *((char **)t15);
    t18 = (t16 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t17 = ((int  (*)(char *, char *))t23)(t0, t16);

LAB107:    if (t17 != 0)
        goto LAB108;

LAB103:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB104:    t24 = (t0 + 5488);
    t25 = *((char **)t24);
    t24 = (t0 + 3704);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 3064);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 8);
    t29 = (t0 + 848);
    t30 = (t0 + 5392);
    t31 = 0;
    xsi_delete_subprogram_invocation(t29, t25, t0, t30, t31);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng17)));
    t6 = (t0 + 5392);
    t7 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 3864);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 8);
    t10 = (t0 + 4024);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 8);

LAB111:    t11 = (t0 + 5488);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t18 = (t16 + 0U);
    t19 = *((char **)t18);
    t17 = ((int  (*)(char *, char *))t19)(t0, t12);

LAB113:    if (t17 != 0)
        goto LAB114;

LAB109:    t12 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t12);

LAB110:    t20 = (t0 + 5488);
    t21 = *((char **)t20);
    t20 = (t0 + 1280);
    t22 = (t0 + 5392);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB1;

LAB106:;
LAB108:    t15 = (t0 + 5584U);
    *((char **)t15) = &&LAB105;
    goto LAB1;

LAB112:;
LAB114:    t11 = (t0 + 5584U);
    *((char **)t11) = &&LAB111;
    goto LAB1;

}


extern void work_m_00000000004213517751_3303075563_init()
{
	static char *pe[] = {(void *)Initial_73_0};
	static char *se[] = {(void *)sp_passTest,(void *)sp_allPassed,(void *)sp_stim};
	xsi_register_didat("work_m_00000000004213517751_3303075563", "isim/Mux21Test_v_isim_beh.exe.sim/work/m_00000000004213517751_3303075563.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
