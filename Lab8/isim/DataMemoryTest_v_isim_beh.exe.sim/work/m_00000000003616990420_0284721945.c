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
static const char *ng0 = "C:/Academic/Fall 2017/ECEN 350/Lab8/DataMemoryTest(1)(4).v";
static const char *ng1 = "%s passed";
static int ng2[] = {1, 0};
static const char *ng3 = "%s failed: %d should be %d";
static const char *ng4 = "All tests passed";
static const char *ng5 = "Some tests failed";
static int ng6[] = {0, 0, 0, 0};
static int ng7[] = {0, 0};
static const char *ng8 = "Init Memory with some useful data";
static unsigned int ng9[] = {18U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng10[] = {14U, 0U, 0U, 0U, 16U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng11[] = {202U, 0U, 0U, 0U, 32U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng12[] = {162U, 0U, 0U, 0U, 48U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng13[] = {122U, 0U, 0U, 0U, 64U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng14[] = {2U, 0U, 0U, 0U, 80U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng15[] = {2U, 0U, 0U, 0U, 128U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng16[] = {1226U, 0U, 0U, 0U, 120U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng17[] = {65743738U, 0U, 0U, 0U, 128U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng18[] = {2863398910U, 0U, 2U, 0U, 200U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng19[] = {1431829506U, 0U, 1U, 0U, 204U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng20[] = {4294705154U, 0U, 3U, 0U, 240U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng21[] = {4294705153U, 0U, 3U, 0U, 80U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng22[] = {0U, 0U, 0U, 0U};
static int ng23[] = {813183284, 0, 1702064928, 0, 1633969266, 0, 1700881440, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng24[] = {4294705153U, 0U, 3U, 0U, 240U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng25[] = {4294901760U, 0U, 0U, 0U};
static int ng26[] = {813196848, 0, 1702064928, 0, 1633969266, 0, 1700881440, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng27[] = {4294705153U, 0U, 3U, 0U, 204U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng28[] = {1431699200U, 0U, 0U, 0U};
static int ng29[] = {813196131, 0, 1702064928, 0, 1633969266, 0, 1700881440, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng30[] = {4294705153U, 0U, 3U, 0U, 200U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng31[] = {2863333375U, 0U, 0U, 0U};
static int ng32[] = {813196088, 0, 1702064928, 0, 1633969266, 0, 1700881440, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng33[] = {4294705153U, 0U, 3U, 0U, 48U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng34[] = {40U, 0U, 0U, 0U};
static int ng35[] = {540047459, 0, 1919251315, 0, 543253604, 0, 1382375780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng36[] = {5, 0};



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
    xsi_set_current_line(34, ng0);
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

LAB6:    xsi_set_current_line(35, ng0);
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
LAB5:    xsi_set_current_line(34, ng0);

LAB8:    xsi_set_current_line(34, ng0);
    t18 = (t1 + 3592);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 2, t21, (char)118, t20, 257);
    xsi_set_current_line(34, ng0);
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
    xsi_set_current_line(42, ng0);
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

LAB10:    xsi_set_current_line(43, ng0);
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

LAB9:    xsi_set_current_line(42, ng0);
    t33 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t33);
    goto LAB11;

}

static void Initial_68_0(char *t0)
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

LAB0:    t1 = (t0 + 4992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);

LAB4:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(78, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2792);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 64);
    t6 = (t0 + 2312);
    xsi_vlogvar_assign_value(t6, t2, 66, 0, 64);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(80, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2792);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 64);
    t6 = (t0 + 2312);
    xsi_vlogvar_assign_value(t6, t2, 66, 0, 64);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(80, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2792);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 64);
    t6 = (t0 + 2312);
    xsi_vlogvar_assign_value(t6, t2, 66, 0, 64);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2792);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 64);
    t6 = (t0 + 2312);
    xsi_vlogvar_assign_value(t6, t2, 66, 0, 64);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2792);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 64);
    t6 = (t0 + 2312);
    xsi_vlogvar_assign_value(t6, t2, 66, 0, 64);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2792);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 64);
    t6 = (t0 + 2312);
    xsi_vlogvar_assign_value(t6, t2, 66, 0, 64);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(85, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2792);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 64);
    t6 = (t0 + 2312);
    xsi_vlogvar_assign_value(t6, t2, 66, 0, 64);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(85, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(86, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2792);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 64);
    t6 = (t0 + 2312);
    xsi_vlogvar_assign_value(t6, t2, 66, 0, 64);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(86, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2792);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 64);
    t6 = (t0 + 2312);
    xsi_vlogvar_assign_value(t6, t2, 66, 0, 64);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    xsi_set_current_line(88, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2792);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 64);
    t6 = (t0 + 2312);
    xsi_vlogvar_assign_value(t6, t2, 66, 0, 64);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(88, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2792);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 64);
    t6 = (t0 + 2312);
    xsi_vlogvar_assign_value(t6, t2, 66, 0, 64);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB26:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(90, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2792);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 64);
    t6 = (t0 + 2312);
    xsi_vlogvar_assign_value(t6, t2, 66, 0, 64);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(90, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    xsi_set_current_line(92, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2792);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 64);
    t6 = (t0 + 2312);
    xsi_vlogvar_assign_value(t6, t2, 66, 0, 64);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB30:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB31:    xsi_set_current_line(96, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng22)));
    t4 = ((char*)((ng23)));
    t5 = (t0 + 3112);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 4800);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);
    t11 = (t0 + 3272);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 64);
    t12 = (t0 + 3432);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 64);
    t13 = (t0 + 3592);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 257);
    t14 = (t0 + 3752);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);

LAB34:    t15 = (t0 + 4896);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB36:    if (t23 != 0)
        goto LAB37;

LAB32:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB33:    t24 = (t0 + 4896);
    t25 = *((char **)t24);
    t24 = (t0 + 3752);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 3112);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 8);
    t29 = (t0 + 848);
    t30 = (t0 + 4800);
    t31 = 0;
    xsi_delete_subprogram_invocation(t29, t25, t0, t30, t31);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2792);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 64);
    t6 = (t0 + 2312);
    xsi_vlogvar_assign_value(t6, t2, 66, 0, 64);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB35:;
LAB37:    t15 = (t0 + 4992U);
    *((char **)t15) = &&LAB34;
    goto LAB1;

LAB38:    xsi_set_current_line(100, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB39:    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng25)));
    t4 = ((char*)((ng26)));
    t5 = (t0 + 3112);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 4800);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);
    t11 = (t0 + 3272);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 64);
    t12 = (t0 + 3432);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 64);
    t13 = (t0 + 3592);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 257);
    t14 = (t0 + 3752);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);

LAB42:    t15 = (t0 + 4896);
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

LAB41:    t24 = (t0 + 4896);
    t25 = *((char **)t24);
    t24 = (t0 + 3752);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 3112);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 8);
    t29 = (t0 + 848);
    t30 = (t0 + 4800);
    t31 = 0;
    xsi_delete_subprogram_invocation(t29, t25, t0, t30, t31);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2792);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 64);
    t6 = (t0 + 2312);
    xsi_vlogvar_assign_value(t6, t2, 66, 0, 64);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB43:;
LAB45:    t15 = (t0 + 4992U);
    *((char **)t15) = &&LAB42;
    goto LAB1;

LAB46:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB47:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng28)));
    t4 = ((char*)((ng29)));
    t5 = (t0 + 3112);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 4800);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);
    t11 = (t0 + 3272);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 64);
    t12 = (t0 + 3432);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 64);
    t13 = (t0 + 3592);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 257);
    t14 = (t0 + 3752);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);

LAB50:    t15 = (t0 + 4896);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB52:    if (t23 != 0)
        goto LAB53;

LAB48:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB49:    t24 = (t0 + 4896);
    t25 = *((char **)t24);
    t24 = (t0 + 3752);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 3112);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 8);
    t29 = (t0 + 848);
    t30 = (t0 + 4800);
    t31 = 0;
    xsi_delete_subprogram_invocation(t29, t25, t0, t30, t31);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng30)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2792);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 64);
    t6 = (t0 + 2312);
    xsi_vlogvar_assign_value(t6, t2, 66, 0, 64);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB51:;
LAB53:    t15 = (t0 + 4992U);
    *((char **)t15) = &&LAB50;
    goto LAB1;

LAB54:    xsi_set_current_line(110, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB55:    xsi_set_current_line(111, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng31)));
    t4 = ((char*)((ng32)));
    t5 = (t0 + 3112);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 4800);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);
    t11 = (t0 + 3272);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 64);
    t12 = (t0 + 3432);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 64);
    t13 = (t0 + 3592);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 257);
    t14 = (t0 + 3752);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);

LAB58:    t15 = (t0 + 4896);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB60:    if (t23 != 0)
        goto LAB61;

LAB56:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB57:    t24 = (t0 + 4896);
    t25 = *((char **)t24);
    t24 = (t0 + 3752);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 3112);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 8);
    t29 = (t0 + 848);
    t30 = (t0 + 4800);
    t31 = 0;
    xsi_delete_subprogram_invocation(t29, t25, t0, t30, t31);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng33)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2792);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 64);
    t6 = (t0 + 2312);
    xsi_vlogvar_assign_value(t6, t2, 66, 0, 64);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB62;
    goto LAB1;

LAB59:;
LAB61:    t15 = (t0 + 4992U);
    *((char **)t15) = &&LAB58;
    goto LAB1;

LAB62:    xsi_set_current_line(115, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB63:    xsi_set_current_line(116, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng34)));
    t4 = ((char*)((ng35)));
    t5 = (t0 + 3112);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 4800);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);
    t11 = (t0 + 3272);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 64);
    t12 = (t0 + 3432);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 64);
    t13 = (t0 + 3592);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 257);
    t14 = (t0 + 3752);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);

LAB66:    t15 = (t0 + 4896);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB68:    if (t23 != 0)
        goto LAB69;

LAB64:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB65:    t24 = (t0 + 4896);
    t25 = *((char **)t24);
    t24 = (t0 + 3752);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 3112);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 8);
    t29 = (t0 + 848);
    t30 = (t0 + 4800);
    t31 = 0;
    xsi_delete_subprogram_invocation(t29, t25, t0, t30, t31);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng36)));
    t6 = (t0 + 4800);
    t7 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 3912);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 8);
    t10 = (t0 + 4072);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 8);

LAB72:    t11 = (t0 + 4896);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t23 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB74:    if (t23 != 0)
        goto LAB75;

LAB70:    t12 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t12);

LAB71:    t19 = (t0 + 4896);
    t20 = *((char **)t19);
    t19 = (t0 + 1280);
    t21 = (t0 + 4800);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    goto LAB1;

LAB67:;
LAB69:    t15 = (t0 + 4992U);
    *((char **)t15) = &&LAB66;
    goto LAB1;

LAB73:;
LAB75:    t11 = (t0 + 4992U);
    *((char **)t11) = &&LAB72;
    goto LAB1;

}


extern void work_m_00000000003616990420_0284721945_init()
{
	static char *pe[] = {(void *)Initial_68_0};
	static char *se[] = {(void *)sp_passTest,(void *)sp_allPassed};
	xsi_register_didat("work_m_00000000003616990420_0284721945", "isim/DataMemoryTest_v_isim_beh.exe.sim/work/m_00000000003616990420_0284721945.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
