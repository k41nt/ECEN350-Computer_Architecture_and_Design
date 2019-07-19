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
static const char *ng0 = "C:/Academic/Fall 2017/ECEN 350/Lab07/ALUTest(4).v";
static const char *ng1 = "%s passed";
static int ng2[] = {1, 0};
static const char *ng3 = "%s failed: %x should be %x";
static const char *ng4 = "All tests passed";
static const char *ng5 = "Some tests failed";
static int ng6[] = {0, 0, 0, 0};
static int ng7[] = {0, 0};
static unsigned int ng8[] = {3167748098U, 0U, 10U, 0U, 74560U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng9[] = {2882343476U, 0U, 0U, 0U, 0U, 0U};
static int ng10[] = {808464432, 0, 1094861636, 0, 875311224, 0, 2016490035, 0, 1145315376, 0, 65, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng11[] = {18U, 0U, 0U, 0U, 16U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng12[] = {2U, 0U, 0U, 0U, 0U, 0U};
static int ng13[] = {741374001, 0, 540047409, 0, 4277316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng14[] = {642U, 0U, 0U, 0U, 64000U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng15[] = {4040U, 0U, 0U, 0U, 0U, 0U};
static int ng16[] = {813183544, 0, 1093695532, 0, 1142960198, 0, 16708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng17[] = {1282U, 0U, 0U, 0U, 32000U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng18[] = {2080U, 0U, 0U, 0U, 0U, 0U};
static int ng19[] = {813184304, 0, 927215660, 0, 1142960248, 0, 16708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng20[] = {16U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng21[] = {0U, 0U, 0U, 0U, 0U, 0U};
static int ng22[] = {741374000, 0, 540047409, 0, 4279876, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng23[] = {16U, 0U, 0U, 0U, 64016U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng24[] = {1U, 0U, 0U, 0U, 0U, 0U};
static int ng25[] = {741374001, 0, 2017870129, 0, 1313087536, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng26[] = {160U, 0U, 0U, 0U, 240U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng27[] = {10U, 0U, 0U, 0U, 0U, 0U};
static int ng28[] = {741374017, 0, 540047430, 0, 4279876, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng29[] = {17U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static int ng30[] = {741374000, 0, 540047409, 0, 20306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng31[] = {17U, 0U, 0U, 0U, 64016U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng32[] = {4001U, 0U, 0U, 0U, 0U, 0U};
static int ng33[] = {741374001, 0, 2017870129, 0, 1330782256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng34[] = {161U, 0U, 0U, 0U, 240U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng35[] = {15U, 0U, 0U, 0U, 0U, 0U};
static int ng36[] = {741374017, 0, 540047430, 0, 20306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng37[] = {6U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static int ng38[] = {741374000, 0, 540047408, 0, 5461314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng39[] = {64006U, 0U, 0U, 0U, 64000U, 0U, 0U, 0U, 0U, 0U};
static int ng40[] = {2017870128, 0, 1093676080, 0, 540047430, 0, 5461314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng41[] = {326U, 0U, 0U, 0U, 480U, 0U, 0U, 0U, 0U, 0U};
static int ng42[] = {813183284, 0, 2016494892, 0, 1430396976, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng43[] = {23U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static int ng44[] = {741374001, 0, 540047408, 0, 1095979842, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng45[] = {32007U, 0U, 0U, 0U, 64000U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng46[] = {2000U, 0U, 0U, 0U, 0U, 0U};
static int ng47[] = {2016887856, 0, 1093676080, 0, 540047430, 0, 1095979842, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng48[] = {167U, 0U, 0U, 0U, 480U, 0U, 0U, 0U, 0U, 0U};
static int ng49[] = {741374017, 0, 813183301, 0, 1397965344, 0, 20545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng50[] = {19U, 0U, 0U, 0U, 160U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng51[] = {20U, 0U, 0U, 0U, 0U, 0U};
static int ng52[] = {741374001, 0, 540047425, 0, 5002060, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng53[] = {19U, 0U, 0U, 0U, 480U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng54[] = {60U, 0U, 0U, 0U, 0U, 0U};
static int ng55[] = {741374001, 0, 813183301, 0, 1280527392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng56[] = {19U, 0U, 0U, 0U, 176U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng57[] = {22U, 0U, 0U, 0U, 0U, 0U};
static int ng58[] = {741374001, 0, 540047426, 0, 5002060, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng59[] = {20U, 0U, 0U, 0U, 32U, 0U, 0U, 0U, 0U, 0U};
static int ng60[] = {741374001, 0, 540047410, 0, 5395276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng61[] = {20U, 0U, 0U, 0U, 480U, 0U, 0U, 0U, 0U, 0U};
static int ng62[] = {741374001, 0, 813183301, 0, 1381190688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng63[] = {20U, 0U, 0U, 0U, 176U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng64[] = {5U, 0U, 0U, 0U, 0U, 0U};
static int ng65[] = {741374001, 0, 540047426, 0, 5395276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng66[] = {22, 0};



static int sp_passTest(char *t1, char *t2)
{
    char t11[24];
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
    xsi_set_current_line(33, ng0);
    t5 = (t1 + 3112);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 3272);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    xsi_vlog_unsigned_equal(t11, 65, t7, 65, t10, 65);
    t12 = (t11 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t11);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(34, ng0);
    t4 = (t1 + 3432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3112);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 3272);
    t12 = (t10 + 56U);
    t18 = *((char **)t12);
    t19 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 4, t19, (char)118, t6, 257, (char)118, t9, 65, (char)118, t18, 65);

LAB7:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB5:    xsi_set_current_line(33, ng0);

LAB8:    xsi_set_current_line(33, ng0);
    t18 = (t1 + 3432);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 2, t21, (char)118, t20, 257);
    xsi_set_current_line(33, ng0);
    t4 = (t1 + 3592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t6, 8, t7, 32);
    t8 = (t1 + 3592);
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

static void Initial_64_0(char *t0)
{
    char t6[24];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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

LAB0:    t1 = (t0 + 4832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);

LAB4:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t2, 4, 0, 64);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 68, 0, 64);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2072U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 65, 65, 2U, t4, 1, t3, 64);
    t2 = ((char*)((ng9)));
    t5 = ((char*)((ng10)));
    t7 = (t0 + 2952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4640);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 3112);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 65);
    t14 = (t0 + 3272);
    xsi_vlogvar_assign_value(t14, t2, 0, 0, 65);
    t15 = (t0 + 3432);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 257);
    t16 = (t0 + 3592);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB8:    t17 = (t0 + 4736);
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

LAB7:    t26 = (t0 + 4736);
    t27 = *((char **)t26);
    t26 = (t0 + 3592);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2952);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4640);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t2, 4, 0, 64);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 68, 0, 64);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB9:;
LAB11:    t17 = (t0 + 4832U);
    *((char **)t17) = &&LAB8;
    goto LAB1;

LAB12:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2072U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 65, 65, 2U, t4, 1, t3, 64);
    t2 = ((char*)((ng12)));
    t5 = ((char*)((ng13)));
    t7 = (t0 + 2952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4640);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 3112);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 65);
    t14 = (t0 + 3272);
    xsi_vlogvar_assign_value(t14, t2, 0, 0, 65);
    t15 = (t0 + 3432);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 257);
    t16 = (t0 + 3592);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB15:    t17 = (t0 + 4736);
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

LAB14:    t26 = (t0 + 4736);
    t27 = *((char **)t26);
    t26 = (t0 + 3592);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2952);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4640);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t2, 4, 0, 64);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 68, 0, 64);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB16:;
LAB18:    t17 = (t0 + 4832U);
    *((char **)t17) = &&LAB15;
    goto LAB1;

LAB19:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2072U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 65, 65, 2U, t4, 1, t3, 64);
    t2 = ((char*)((ng15)));
    t5 = ((char*)((ng16)));
    t7 = (t0 + 2952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4640);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 3112);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 65);
    t14 = (t0 + 3272);
    xsi_vlogvar_assign_value(t14, t2, 0, 0, 65);
    t15 = (t0 + 3432);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 257);
    t16 = (t0 + 3592);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB22:    t17 = (t0 + 4736);
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

LAB21:    t26 = (t0 + 4736);
    t27 = *((char **)t26);
    t26 = (t0 + 3592);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2952);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4640);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t2, 4, 0, 64);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 68, 0, 64);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB23:;
LAB25:    t17 = (t0 + 4832U);
    *((char **)t17) = &&LAB22;
    goto LAB1;

LAB26:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2072U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 65, 65, 2U, t4, 1, t3, 64);
    t2 = ((char*)((ng18)));
    t5 = ((char*)((ng19)));
    t7 = (t0 + 2952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4640);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 3112);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 65);
    t14 = (t0 + 3272);
    xsi_vlogvar_assign_value(t14, t2, 0, 0, 65);
    t15 = (t0 + 3432);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 257);
    t16 = (t0 + 3592);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB29:    t17 = (t0 + 4736);
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

LAB28:    t26 = (t0 + 4736);
    t27 = *((char **)t26);
    t26 = (t0 + 3592);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2952);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4640);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t2, 4, 0, 64);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 68, 0, 64);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB30:;
LAB32:    t17 = (t0 + 4832U);
    *((char **)t17) = &&LAB29;
    goto LAB1;

LAB33:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2072U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 65, 65, 2U, t4, 1, t3, 64);
    t2 = ((char*)((ng21)));
    t5 = ((char*)((ng22)));
    t7 = (t0 + 2952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4640);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 3112);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 65);
    t14 = (t0 + 3272);
    xsi_vlogvar_assign_value(t14, t2, 0, 0, 65);
    t15 = (t0 + 3432);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 257);
    t16 = (t0 + 3592);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB36:    t17 = (t0 + 4736);
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

LAB35:    t26 = (t0 + 4736);
    t27 = *((char **)t26);
    t26 = (t0 + 3592);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2952);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4640);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t2, 4, 0, 64);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 68, 0, 64);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB37:;
LAB39:    t17 = (t0 + 4832U);
    *((char **)t17) = &&LAB36;
    goto LAB1;

LAB40:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2072U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 65, 65, 2U, t4, 1, t3, 64);
    t2 = ((char*)((ng24)));
    t5 = ((char*)((ng25)));
    t7 = (t0 + 2952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4640);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 3112);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 65);
    t14 = (t0 + 3272);
    xsi_vlogvar_assign_value(t14, t2, 0, 0, 65);
    t15 = (t0 + 3432);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 257);
    t16 = (t0 + 3592);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB43:    t17 = (t0 + 4736);
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

LAB42:    t26 = (t0 + 4736);
    t27 = *((char **)t26);
    t26 = (t0 + 3592);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2952);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4640);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t2, 4, 0, 64);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 68, 0, 64);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB44:;
LAB46:    t17 = (t0 + 4832U);
    *((char **)t17) = &&LAB43;
    goto LAB1;

LAB47:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2072U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 65, 65, 2U, t4, 1, t3, 64);
    t2 = ((char*)((ng27)));
    t5 = ((char*)((ng28)));
    t7 = (t0 + 2952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4640);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 3112);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 65);
    t14 = (t0 + 3272);
    xsi_vlogvar_assign_value(t14, t2, 0, 0, 65);
    t15 = (t0 + 3432);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 257);
    t16 = (t0 + 3592);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB50:    t17 = (t0 + 4736);
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

LAB49:    t26 = (t0 + 4736);
    t27 = *((char **)t26);
    t26 = (t0 + 3592);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2952);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4640);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t2, 4, 0, 64);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 68, 0, 64);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB51:;
LAB53:    t17 = (t0 + 4832U);
    *((char **)t17) = &&LAB50;
    goto LAB1;

LAB54:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2072U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 65, 65, 2U, t4, 1, t3, 64);
    t2 = ((char*)((ng24)));
    t5 = ((char*)((ng30)));
    t7 = (t0 + 2952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4640);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 3112);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 65);
    t14 = (t0 + 3272);
    xsi_vlogvar_assign_value(t14, t2, 0, 0, 65);
    t15 = (t0 + 3432);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 257);
    t16 = (t0 + 3592);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB57:    t17 = (t0 + 4736);
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

LAB56:    t26 = (t0 + 4736);
    t27 = *((char **)t26);
    t26 = (t0 + 3592);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2952);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4640);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng31)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t2, 4, 0, 64);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 68, 0, 64);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB58:;
LAB60:    t17 = (t0 + 4832U);
    *((char **)t17) = &&LAB57;
    goto LAB1;

LAB61:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2072U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 65, 65, 2U, t4, 1, t3, 64);
    t2 = ((char*)((ng32)));
    t5 = ((char*)((ng33)));
    t7 = (t0 + 2952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4640);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 3112);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 65);
    t14 = (t0 + 3272);
    xsi_vlogvar_assign_value(t14, t2, 0, 0, 65);
    t15 = (t0 + 3432);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 257);
    t16 = (t0 + 3592);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB64:    t17 = (t0 + 4736);
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

LAB63:    t26 = (t0 + 4736);
    t27 = *((char **)t26);
    t26 = (t0 + 3592);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2952);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4640);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng34)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t2, 4, 0, 64);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 68, 0, 64);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB68;
    goto LAB1;

LAB65:;
LAB67:    t17 = (t0 + 4832U);
    *((char **)t17) = &&LAB64;
    goto LAB1;

LAB68:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2072U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 65, 65, 2U, t4, 1, t3, 64);
    t2 = ((char*)((ng35)));
    t5 = ((char*)((ng36)));
    t7 = (t0 + 2952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4640);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 3112);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 65);
    t14 = (t0 + 3272);
    xsi_vlogvar_assign_value(t14, t2, 0, 0, 65);
    t15 = (t0 + 3432);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 257);
    t16 = (t0 + 3592);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB71:    t17 = (t0 + 4736);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);

LAB73:    if (t25 != 0)
        goto LAB74;

LAB69:    t18 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t18);

LAB70:    t26 = (t0 + 4736);
    t27 = *((char **)t26);
    t26 = (t0 + 3592);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2952);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4640);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng37)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t2, 4, 0, 64);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 68, 0, 64);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB72:;
LAB74:    t17 = (t0 + 4832U);
    *((char **)t17) = &&LAB71;
    goto LAB1;

LAB75:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2072U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 65, 65, 2U, t4, 1, t3, 64);
    t2 = ((char*)((ng21)));
    t5 = ((char*)((ng38)));
    t7 = (t0 + 2952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4640);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 3112);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 65);
    t14 = (t0 + 3272);
    xsi_vlogvar_assign_value(t14, t2, 0, 0, 65);
    t15 = (t0 + 3432);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 257);
    t16 = (t0 + 3592);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB78:    t17 = (t0 + 4736);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);

LAB80:    if (t25 != 0)
        goto LAB81;

LAB76:    t18 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t18);

LAB77:    t26 = (t0 + 4736);
    t27 = *((char **)t26);
    t26 = (t0 + 3592);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2952);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4640);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng39)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t2, 4, 0, 64);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 68, 0, 64);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB82;
    goto LAB1;

LAB79:;
LAB81:    t17 = (t0 + 4832U);
    *((char **)t17) = &&LAB78;
    goto LAB1;

LAB82:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2072U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 65, 65, 2U, t4, 1, t3, 64);
    t2 = ((char*)((ng21)));
    t5 = ((char*)((ng40)));
    t7 = (t0 + 2952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4640);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 3112);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 65);
    t14 = (t0 + 3272);
    xsi_vlogvar_assign_value(t14, t2, 0, 0, 65);
    t15 = (t0 + 3432);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 257);
    t16 = (t0 + 3592);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB85:    t17 = (t0 + 4736);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);

LAB87:    if (t25 != 0)
        goto LAB88;

LAB83:    t18 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t18);

LAB84:    t26 = (t0 + 4736);
    t27 = *((char **)t26);
    t26 = (t0 + 3592);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2952);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4640);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng41)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t2, 4, 0, 64);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 68, 0, 64);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB89;
    goto LAB1;

LAB86:;
LAB88:    t17 = (t0 + 4832U);
    *((char **)t17) = &&LAB85;
    goto LAB1;

LAB89:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2072U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 65, 65, 2U, t4, 1, t3, 64);
    t2 = ((char*)((ng27)));
    t5 = ((char*)((ng42)));
    t7 = (t0 + 2952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4640);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 3112);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 65);
    t14 = (t0 + 3272);
    xsi_vlogvar_assign_value(t14, t2, 0, 0, 65);
    t15 = (t0 + 3432);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 257);
    t16 = (t0 + 3592);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB92:    t17 = (t0 + 4736);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);

LAB94:    if (t25 != 0)
        goto LAB95;

LAB90:    t18 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t18);

LAB91:    t26 = (t0 + 4736);
    t27 = *((char **)t26);
    t26 = (t0 + 3592);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2952);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4640);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng43)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t2, 4, 0, 64);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 68, 0, 64);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB96;
    goto LAB1;

LAB93:;
LAB95:    t17 = (t0 + 4832U);
    *((char **)t17) = &&LAB92;
    goto LAB1;

LAB96:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2072U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 65, 65, 2U, t4, 1, t3, 64);
    t2 = ((char*)((ng24)));
    t5 = ((char*)((ng44)));
    t7 = (t0 + 2952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4640);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 3112);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 65);
    t14 = (t0 + 3272);
    xsi_vlogvar_assign_value(t14, t2, 0, 0, 65);
    t15 = (t0 + 3432);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 257);
    t16 = (t0 + 3592);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB99:    t17 = (t0 + 4736);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);

LAB101:    if (t25 != 0)
        goto LAB102;

LAB97:    t18 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t18);

LAB98:    t26 = (t0 + 4736);
    t27 = *((char **)t26);
    t26 = (t0 + 3592);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2952);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4640);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng45)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t2, 4, 0, 64);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 68, 0, 64);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB100:;
LAB102:    t17 = (t0 + 4832U);
    *((char **)t17) = &&LAB99;
    goto LAB1;

LAB103:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2072U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 65, 65, 2U, t4, 1, t3, 64);
    t2 = ((char*)((ng46)));
    t5 = ((char*)((ng47)));
    t7 = (t0 + 2952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4640);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 3112);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 65);
    t14 = (t0 + 3272);
    xsi_vlogvar_assign_value(t14, t2, 0, 0, 65);
    t15 = (t0 + 3432);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 257);
    t16 = (t0 + 3592);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB106:    t17 = (t0 + 4736);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);

LAB108:    if (t25 != 0)
        goto LAB109;

LAB104:    t18 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t18);

LAB105:    t26 = (t0 + 4736);
    t27 = *((char **)t26);
    t26 = (t0 + 3592);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2952);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4640);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng48)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t2, 4, 0, 64);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 68, 0, 64);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB110;
    goto LAB1;

LAB107:;
LAB109:    t17 = (t0 + 4832U);
    *((char **)t17) = &&LAB106;
    goto LAB1;

LAB110:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2072U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 65, 65, 2U, t4, 1, t3, 64);
    t2 = ((char*)((ng27)));
    t5 = ((char*)((ng49)));
    t7 = (t0 + 2952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4640);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 3112);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 65);
    t14 = (t0 + 3272);
    xsi_vlogvar_assign_value(t14, t2, 0, 0, 65);
    t15 = (t0 + 3432);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 257);
    t16 = (t0 + 3592);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB113:    t17 = (t0 + 4736);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);

LAB115:    if (t25 != 0)
        goto LAB116;

LAB111:    t18 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t18);

LAB112:    t26 = (t0 + 4736);
    t27 = *((char **)t26);
    t26 = (t0 + 3592);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2952);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4640);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng50)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t2, 4, 0, 64);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 68, 0, 64);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB117;
    goto LAB1;

LAB114:;
LAB116:    t17 = (t0 + 4832U);
    *((char **)t17) = &&LAB113;
    goto LAB1;

LAB117:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2072U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 65, 65, 2U, t4, 1, t3, 64);
    t2 = ((char*)((ng51)));
    t5 = ((char*)((ng52)));
    t7 = (t0 + 2952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4640);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 3112);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 65);
    t14 = (t0 + 3272);
    xsi_vlogvar_assign_value(t14, t2, 0, 0, 65);
    t15 = (t0 + 3432);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 257);
    t16 = (t0 + 3592);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB120:    t17 = (t0 + 4736);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);

LAB122:    if (t25 != 0)
        goto LAB123;

LAB118:    t18 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t18);

LAB119:    t26 = (t0 + 4736);
    t27 = *((char **)t26);
    t26 = (t0 + 3592);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2952);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4640);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng53)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t2, 4, 0, 64);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 68, 0, 64);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB124;
    goto LAB1;

LAB121:;
LAB123:    t17 = (t0 + 4832U);
    *((char **)t17) = &&LAB120;
    goto LAB1;

LAB124:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2072U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 65, 65, 2U, t4, 1, t3, 64);
    t2 = ((char*)((ng54)));
    t5 = ((char*)((ng55)));
    t7 = (t0 + 2952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4640);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 3112);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 65);
    t14 = (t0 + 3272);
    xsi_vlogvar_assign_value(t14, t2, 0, 0, 65);
    t15 = (t0 + 3432);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 257);
    t16 = (t0 + 3592);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB127:    t17 = (t0 + 4736);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);

LAB129:    if (t25 != 0)
        goto LAB130;

LAB125:    t18 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t18);

LAB126:    t26 = (t0 + 4736);
    t27 = *((char **)t26);
    t26 = (t0 + 3592);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2952);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4640);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng56)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t2, 4, 0, 64);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 68, 0, 64);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB131;
    goto LAB1;

LAB128:;
LAB130:    t17 = (t0 + 4832U);
    *((char **)t17) = &&LAB127;
    goto LAB1;

LAB131:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2072U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 65, 65, 2U, t4, 1, t3, 64);
    t2 = ((char*)((ng57)));
    t5 = ((char*)((ng58)));
    t7 = (t0 + 2952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4640);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 3112);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 65);
    t14 = (t0 + 3272);
    xsi_vlogvar_assign_value(t14, t2, 0, 0, 65);
    t15 = (t0 + 3432);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 257);
    t16 = (t0 + 3592);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB134:    t17 = (t0 + 4736);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);

LAB136:    if (t25 != 0)
        goto LAB137;

LAB132:    t18 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t18);

LAB133:    t26 = (t0 + 4736);
    t27 = *((char **)t26);
    t26 = (t0 + 3592);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2952);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4640);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng59)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t2, 4, 0, 64);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 68, 0, 64);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB138;
    goto LAB1;

LAB135:;
LAB137:    t17 = (t0 + 4832U);
    *((char **)t17) = &&LAB134;
    goto LAB1;

LAB138:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2072U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 65, 65, 2U, t4, 1, t3, 64);
    t2 = ((char*)((ng24)));
    t5 = ((char*)((ng60)));
    t7 = (t0 + 2952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4640);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 3112);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 65);
    t14 = (t0 + 3272);
    xsi_vlogvar_assign_value(t14, t2, 0, 0, 65);
    t15 = (t0 + 3432);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 257);
    t16 = (t0 + 3592);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB141:    t17 = (t0 + 4736);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);

LAB143:    if (t25 != 0)
        goto LAB144;

LAB139:    t18 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t18);

LAB140:    t26 = (t0 + 4736);
    t27 = *((char **)t26);
    t26 = (t0 + 3592);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2952);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4640);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng61)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t2, 4, 0, 64);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 68, 0, 64);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB145;
    goto LAB1;

LAB142:;
LAB144:    t17 = (t0 + 4832U);
    *((char **)t17) = &&LAB141;
    goto LAB1;

LAB145:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2072U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 65, 65, 2U, t4, 1, t3, 64);
    t2 = ((char*)((ng35)));
    t5 = ((char*)((ng62)));
    t7 = (t0 + 2952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4640);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 3112);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 65);
    t14 = (t0 + 3272);
    xsi_vlogvar_assign_value(t14, t2, 0, 0, 65);
    t15 = (t0 + 3432);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 257);
    t16 = (t0 + 3592);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB148:    t17 = (t0 + 4736);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);

LAB150:    if (t25 != 0)
        goto LAB151;

LAB146:    t18 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t18);

LAB147:    t26 = (t0 + 4736);
    t27 = *((char **)t26);
    t26 = (t0 + 3592);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2952);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4640);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng63)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t2, 4, 0, 64);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t2, 68, 0, 64);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB152;
    goto LAB1;

LAB149:;
LAB151:    t17 = (t0 + 4832U);
    *((char **)t17) = &&LAB148;
    goto LAB1;

LAB152:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2072U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 65, 65, 2U, t4, 1, t3, 64);
    t2 = ((char*)((ng64)));
    t5 = ((char*)((ng65)));
    t7 = (t0 + 2952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4640);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 3112);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 65);
    t14 = (t0 + 3272);
    xsi_vlogvar_assign_value(t14, t2, 0, 0, 65);
    t15 = (t0 + 3432);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 257);
    t16 = (t0 + 3592);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 8);

LAB155:    t17 = (t0 + 4736);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);

LAB157:    if (t25 != 0)
        goto LAB158;

LAB153:    t18 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t18);

LAB154:    t26 = (t0 + 4736);
    t27 = *((char **)t26);
    t26 = (t0 + 3592);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2952);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    t31 = (t0 + 848);
    t32 = (t0 + 4640);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2952);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng66)));
    t7 = (t0 + 4640);
    t8 = (t0 + 1280);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 3752);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 8);
    t11 = (t0 + 3912);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 8);

LAB161:    t12 = (t0 + 4736);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t25 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB163:    if (t25 != 0)
        goto LAB164;

LAB159:    t13 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t13);

LAB160:    t20 = (t0 + 4736);
    t21 = *((char **)t20);
    t20 = (t0 + 1280);
    t22 = (t0 + 4640);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB1;

LAB156:;
LAB158:    t17 = (t0 + 4832U);
    *((char **)t17) = &&LAB155;
    goto LAB1;

LAB162:;
LAB164:    t12 = (t0 + 4832U);
    *((char **)t12) = &&LAB161;
    goto LAB1;

}


extern void work_m_00000000003964407164_0040851485_init()
{
	static char *pe[] = {(void *)Initial_64_0};
	static char *se[] = {(void *)sp_passTest,(void *)sp_allPassed};
	xsi_register_didat("work_m_00000000003964407164_0040851485", "isim/ALUTest_v_isim_beh.exe.sim/work/m_00000000003964407164_0040851485.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
