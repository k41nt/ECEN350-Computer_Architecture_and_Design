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
static const char *ng0 = "C:/Academic/Fall 2017/ECEN 350/Lab9/DataMemory(4).v";
static int ng1[] = {1, 0, 0, 0};
static int ng2[] = {2, 0, 0, 0};
static int ng3[] = {3, 0, 0, 0};
static int ng4[] = {4, 0, 0, 0};
static int ng5[] = {5, 0, 0, 0};
static int ng6[] = {6, 0, 0, 0};
static int ng7[] = {7, 0, 0, 0};
static unsigned int ng8[] = {0U, 0U, 0U, 0U};
static unsigned int ng9[] = {1U, 0U, 0U, 0U};
static unsigned int ng10[] = {8U, 0U, 0U, 0U};
static unsigned int ng11[] = {10U, 0U, 0U, 0U};
static unsigned int ng12[] = {16U, 0U, 0U, 0U};
static unsigned int ng13[] = {5U, 0U, 0U, 0U};
static unsigned int ng14[] = {24U, 0U, 0U, 0U};
static unsigned int ng15[] = {3940282111U, 0U, 268167805U, 0U};
static unsigned int ng16[] = {32U, 0U, 0U, 0U};
static int ng17[] = {63, 0};
static int ng18[] = {56, 0};
static int ng19[] = {55, 0};
static int ng20[] = {48, 0};
static int ng21[] = {47, 0};
static int ng22[] = {40, 0};
static int ng23[] = {39, 0};
static int ng24[] = {32, 0};
static int ng25[] = {31, 0};
static int ng26[] = {24, 0};
static int ng27[] = {23, 0};
static int ng28[] = {16, 0};
static int ng29[] = {15, 0};
static int ng30[] = {8, 0};
static int ng31[] = {7, 0};
static int ng32[] = {0, 0};



static int sp_initset(char *t1, char *t2)
{
    char t5[8];
    char t19[8];
    char t20[8];
    char t41[16];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
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
    unsigned int t31;
    int t32;
    char *t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    int t40;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t6 = (t1 + 3000);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t5, 0, 8);
    t9 = (t5 + 4);
    t10 = (t8 + 8);
    t11 = (t8 + 12);
    t12 = *((unsigned int *)t10);
    t13 = (t12 >> 24);
    *((unsigned int *)t5) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 24);
    *((unsigned int *)t9) = t15;
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 255U);
    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 & 255U);
    t18 = (t1 + 2680);
    t21 = (t1 + 2680);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = (t1 + 2680);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t27 = (t1 + 2840);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_convert_array_indices(t19, t20, t23, t26, 2, 1, t29, 64, 2);
    t30 = (t19 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t20 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(43, ng0);
    t4 = (t1 + 3000);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t5 + 4);
    t9 = (t7 + 8);
    t10 = (t7 + 12);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 16);
    *((unsigned int *)t5) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 16);
    *((unsigned int *)t8) = t15;
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 255U);
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 & 255U);
    t11 = (t1 + 2680);
    t18 = (t1 + 2680);
    t21 = (t18 + 72U);
    t22 = *((char **)t21);
    t23 = (t1 + 2680);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t1 + 2840);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng1)));
    xsi_vlog_unsigned_add(t41, 64, t28, 64, t29, 32);
    xsi_vlog_generic_convert_array_indices(t19, t20, t22, t25, 2, 1, t41, 64, 2);
    t30 = (t19 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t20 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(44, ng0);
    t4 = (t1 + 3000);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t5 + 4);
    t9 = (t7 + 8);
    t10 = (t7 + 12);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 8);
    *((unsigned int *)t5) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 8);
    *((unsigned int *)t8) = t15;
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 255U);
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 & 255U);
    t11 = (t1 + 2680);
    t18 = (t1 + 2680);
    t21 = (t18 + 72U);
    t22 = *((char **)t21);
    t23 = (t1 + 2680);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t1 + 2840);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng2)));
    xsi_vlog_unsigned_add(t41, 64, t28, 64, t29, 32);
    xsi_vlog_generic_convert_array_indices(t19, t20, t22, t25, 2, 1, t41, 64, 2);
    t30 = (t19 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t20 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(45, ng0);
    t4 = (t1 + 3000);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t5 + 4);
    t9 = (t7 + 8);
    t10 = (t7 + 12);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t5) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 0);
    *((unsigned int *)t8) = t15;
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 255U);
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 & 255U);
    t11 = (t1 + 2680);
    t18 = (t1 + 2680);
    t21 = (t18 + 72U);
    t22 = *((char **)t21);
    t23 = (t1 + 2680);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t1 + 2840);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng3)));
    xsi_vlog_unsigned_add(t41, 64, t28, 64, t29, 32);
    xsi_vlog_generic_convert_array_indices(t19, t20, t22, t25, 2, 1, t41, 64, 2);
    t30 = (t19 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t20 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(46, ng0);
    t4 = (t1 + 3000);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t5 + 4);
    t9 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 24);
    *((unsigned int *)t5) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 24);
    *((unsigned int *)t8) = t15;
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 255U);
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 & 255U);
    t10 = (t1 + 2680);
    t11 = (t1 + 2680);
    t18 = (t11 + 72U);
    t21 = *((char **)t18);
    t22 = (t1 + 2680);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t1 + 2840);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng4)));
    xsi_vlog_unsigned_add(t41, 64, t27, 64, t28, 32);
    xsi_vlog_generic_convert_array_indices(t19, t20, t21, t24, 2, 1, t41, 64, 2);
    t29 = (t19 + 4);
    t31 = *((unsigned int *)t29);
    t32 = (!(t31));
    t30 = (t20 + 4);
    t34 = *((unsigned int *)t30);
    t35 = (!(t34));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(47, ng0);
    t4 = (t1 + 3000);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t5 + 4);
    t9 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 16);
    *((unsigned int *)t5) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 16);
    *((unsigned int *)t8) = t15;
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 255U);
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 & 255U);
    t10 = (t1 + 2680);
    t11 = (t1 + 2680);
    t18 = (t11 + 72U);
    t21 = *((char **)t18);
    t22 = (t1 + 2680);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t1 + 2840);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng5)));
    xsi_vlog_unsigned_add(t41, 64, t27, 64, t28, 32);
    xsi_vlog_generic_convert_array_indices(t19, t20, t21, t24, 2, 1, t41, 64, 2);
    t29 = (t19 + 4);
    t31 = *((unsigned int *)t29);
    t32 = (!(t31));
    t30 = (t20 + 4);
    t34 = *((unsigned int *)t30);
    t35 = (!(t34));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(48, ng0);
    t4 = (t1 + 3000);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t5 + 4);
    t9 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 8);
    *((unsigned int *)t5) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 8);
    *((unsigned int *)t8) = t15;
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 255U);
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 & 255U);
    t10 = (t1 + 2680);
    t11 = (t1 + 2680);
    t18 = (t11 + 72U);
    t21 = *((char **)t18);
    t22 = (t1 + 2680);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t1 + 2840);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng6)));
    xsi_vlog_unsigned_add(t41, 64, t27, 64, t28, 32);
    xsi_vlog_generic_convert_array_indices(t19, t20, t21, t24, 2, 1, t41, 64, 2);
    t29 = (t19 + 4);
    t31 = *((unsigned int *)t29);
    t32 = (!(t31));
    t30 = (t20 + 4);
    t34 = *((unsigned int *)t30);
    t35 = (!(t34));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(49, ng0);
    t4 = (t1 + 3000);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t5 + 4);
    t9 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t5) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 0);
    *((unsigned int *)t8) = t15;
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 255U);
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 & 255U);
    t10 = (t1 + 2680);
    t11 = (t1 + 2680);
    t18 = (t11 + 72U);
    t21 = *((char **)t18);
    t22 = (t1 + 2680);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t1 + 2840);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng7)));
    xsi_vlog_unsigned_add(t41, 64, t27, 64, t28, 32);
    xsi_vlog_generic_convert_array_indices(t19, t20, t21, t24, 2, 1, t41, 64, 2);
    t29 = (t19 + 4);
    t31 = *((unsigned int *)t29);
    t32 = (!(t31));
    t30 = (t20 + 4);
    t34 = *((unsigned int *)t30);
    t35 = (!(t34));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB20;

LAB21:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    t37 = *((unsigned int *)t19);
    t38 = *((unsigned int *)t20);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(t18, t5, 0, *((unsigned int *)t20), t40);
    goto LAB7;

LAB8:    t37 = *((unsigned int *)t19);
    t38 = *((unsigned int *)t20);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(t11, t5, 0, *((unsigned int *)t20), t40);
    goto LAB9;

LAB10:    t37 = *((unsigned int *)t19);
    t38 = *((unsigned int *)t20);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(t11, t5, 0, *((unsigned int *)t20), t40);
    goto LAB11;

LAB12:    t37 = *((unsigned int *)t19);
    t38 = *((unsigned int *)t20);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(t11, t5, 0, *((unsigned int *)t20), t40);
    goto LAB13;

LAB14:    t37 = *((unsigned int *)t19);
    t38 = *((unsigned int *)t20);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(t10, t5, 0, *((unsigned int *)t20), t40);
    goto LAB15;

LAB16:    t37 = *((unsigned int *)t19);
    t38 = *((unsigned int *)t20);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(t10, t5, 0, *((unsigned int *)t20), t40);
    goto LAB17;

LAB18:    t37 = *((unsigned int *)t19);
    t38 = *((unsigned int *)t20);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(t10, t5, 0, *((unsigned int *)t20), t40);
    goto LAB19;

LAB20:    t37 = *((unsigned int *)t19);
    t38 = *((unsigned int *)t20);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(t10, t5, 0, *((unsigned int *)t20), t40);
    goto LAB21;

}

static void Initial_54_0(char *t0)
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

LAB0:    t1 = (t0 + 3920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);

LAB4:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng9)));
    t4 = (t0 + 3728);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2840);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 64);
    t8 = (t0 + 3000);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 64);

LAB7:    t9 = (t0 + 3824);
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

LAB5:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB6:    t18 = (t0 + 3824);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 3728);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng10)));
    t3 = ((char*)((ng11)));
    t4 = (t0 + 3728);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2840);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 64);
    t8 = (t0 + 3000);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 64);

LAB13:    t9 = (t0 + 3824);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB15:    if (t17 != 0)
        goto LAB16;

LAB11:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB12:    t18 = (t0 + 3824);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 3728);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng12)));
    t3 = ((char*)((ng13)));
    t4 = (t0 + 3728);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2840);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 64);
    t8 = (t0 + 3000);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 64);

LAB19:    t9 = (t0 + 3824);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB21:    if (t17 != 0)
        goto LAB22;

LAB17:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB18:    t18 = (t0 + 3824);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 3728);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng14)));
    t3 = ((char*)((ng15)));
    t4 = (t0 + 3728);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2840);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 64);
    t8 = (t0 + 3000);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 64);

LAB25:    t9 = (t0 + 3824);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB27:    if (t17 != 0)
        goto LAB28;

LAB23:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB24:    t18 = (t0 + 3824);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 3728);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng16)));
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3728);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2840);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 64);
    t8 = (t0 + 3000);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 64);

LAB31:    t9 = (t0 + 3824);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB33:    if (t17 != 0)
        goto LAB34;

LAB29:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB30:    t18 = (t0 + 3824);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 3728);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);

LAB1:    return;
LAB8:;
LAB10:    t9 = (t0 + 3920U);
    *((char **)t9) = &&LAB7;
    goto LAB1;

LAB14:;
LAB16:    t9 = (t0 + 3920U);
    *((char **)t9) = &&LAB13;
    goto LAB1;

LAB20:;
LAB22:    t9 = (t0 + 3920U);
    *((char **)t9) = &&LAB19;
    goto LAB1;

LAB26:;
LAB28:    t9 = (t0 + 3920U);
    *((char **)t9) = &&LAB25;
    goto LAB1;

LAB32:;
LAB34:    t9 = (t0 + 3920U);
    *((char **)t9) = &&LAB31;
    goto LAB1;

}

static void Always_71_1(char *t0)
{
    char t14[8];
    char t23[8];
    char t24[8];
    char t25[8];
    char t48[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    int t33;
    char *t34;
    unsigned int t35;
    int t36;
    int t37;
    char *t38;
    unsigned int t39;
    int t40;
    int t41;
    unsigned int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;

LAB0:    t1 = (t0 + 4168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4736);
    *((int *)t2) = 1;
    t3 = (t0 + 4200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(72, ng0);

LAB5:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 1960U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(74, ng0);

LAB9:    xsi_set_current_line(75, ng0);
    t11 = (t0 + 2680);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = (t0 + 2680);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2680);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1640U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_array_select_value(t14, 8, t13, t17, t20, 2, 1, t22, 64, 2);
    t21 = (t0 + 2520);
    t26 = (t0 + 2520);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng17)));
    t30 = ((char*)((ng18)));
    xsi_vlog_convert_partindices(t23, t24, t25, ((int*)(t28)), 2, t29, 32, 1, t30, 32, 1);
    t31 = (t23 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t24 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    t38 = (t25 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (!(t39));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2680);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 2680);
    t15 = (t13 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 1640U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng1)));
    xsi_vlog_unsigned_add(t48, 64, t18, 64, t17, 32);
    xsi_vlog_generic_get_array_select_value(t14, 8, t4, t12, t16, 2, 1, t48, 64, 2);
    t19 = (t0 + 2520);
    t20 = (t0 + 2520);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t26 = ((char*)((ng19)));
    t27 = ((char*)((ng20)));
    xsi_vlog_convert_partindices(t23, t24, t25, ((int*)(t22)), 2, t26, 32, 1, t27, 32, 1);
    t28 = (t23 + 4);
    t6 = *((unsigned int *)t28);
    t33 = (!(t6));
    t29 = (t24 + 4);
    t7 = *((unsigned int *)t29);
    t36 = (!(t7));
    t37 = (t33 && t36);
    t30 = (t25 + 4);
    t8 = *((unsigned int *)t30);
    t40 = (!(t8));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2680);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 2680);
    t15 = (t13 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 1640U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng2)));
    xsi_vlog_unsigned_add(t48, 64, t18, 64, t17, 32);
    xsi_vlog_generic_get_array_select_value(t14, 8, t4, t12, t16, 2, 1, t48, 64, 2);
    t19 = (t0 + 2520);
    t20 = (t0 + 2520);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t26 = ((char*)((ng21)));
    t27 = ((char*)((ng22)));
    xsi_vlog_convert_partindices(t23, t24, t25, ((int*)(t22)), 2, t26, 32, 1, t27, 32, 1);
    t28 = (t23 + 4);
    t6 = *((unsigned int *)t28);
    t33 = (!(t6));
    t29 = (t24 + 4);
    t7 = *((unsigned int *)t29);
    t36 = (!(t7));
    t37 = (t33 && t36);
    t30 = (t25 + 4);
    t8 = *((unsigned int *)t30);
    t40 = (!(t8));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2680);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 2680);
    t15 = (t13 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 1640U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng3)));
    xsi_vlog_unsigned_add(t48, 64, t18, 64, t17, 32);
    xsi_vlog_generic_get_array_select_value(t14, 8, t4, t12, t16, 2, 1, t48, 64, 2);
    t19 = (t0 + 2520);
    t20 = (t0 + 2520);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t26 = ((char*)((ng23)));
    t27 = ((char*)((ng24)));
    xsi_vlog_convert_partindices(t23, t24, t25, ((int*)(t22)), 2, t26, 32, 1, t27, 32, 1);
    t28 = (t23 + 4);
    t6 = *((unsigned int *)t28);
    t33 = (!(t6));
    t29 = (t24 + 4);
    t7 = *((unsigned int *)t29);
    t36 = (!(t7));
    t37 = (t33 && t36);
    t30 = (t25 + 4);
    t8 = *((unsigned int *)t30);
    t40 = (!(t8));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2680);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 2680);
    t15 = (t13 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 1640U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng4)));
    xsi_vlog_unsigned_add(t48, 64, t18, 64, t17, 32);
    xsi_vlog_generic_get_array_select_value(t14, 8, t4, t12, t16, 2, 1, t48, 64, 2);
    t19 = (t0 + 2520);
    t20 = (t0 + 2520);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t26 = ((char*)((ng25)));
    t27 = ((char*)((ng26)));
    xsi_vlog_convert_partindices(t23, t24, t25, ((int*)(t22)), 2, t26, 32, 1, t27, 32, 1);
    t28 = (t23 + 4);
    t6 = *((unsigned int *)t28);
    t33 = (!(t6));
    t29 = (t24 + 4);
    t7 = *((unsigned int *)t29);
    t36 = (!(t7));
    t37 = (t33 && t36);
    t30 = (t25 + 4);
    t8 = *((unsigned int *)t30);
    t40 = (!(t8));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2680);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 2680);
    t15 = (t13 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 1640U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng5)));
    xsi_vlog_unsigned_add(t48, 64, t18, 64, t17, 32);
    xsi_vlog_generic_get_array_select_value(t14, 8, t4, t12, t16, 2, 1, t48, 64, 2);
    t19 = (t0 + 2520);
    t20 = (t0 + 2520);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t26 = ((char*)((ng27)));
    t27 = ((char*)((ng28)));
    xsi_vlog_convert_partindices(t23, t24, t25, ((int*)(t22)), 2, t26, 32, 1, t27, 32, 1);
    t28 = (t23 + 4);
    t6 = *((unsigned int *)t28);
    t33 = (!(t6));
    t29 = (t24 + 4);
    t7 = *((unsigned int *)t29);
    t36 = (!(t7));
    t37 = (t33 && t36);
    t30 = (t25 + 4);
    t8 = *((unsigned int *)t30);
    t40 = (!(t8));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2680);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 2680);
    t15 = (t13 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 1640U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng6)));
    xsi_vlog_unsigned_add(t48, 64, t18, 64, t17, 32);
    xsi_vlog_generic_get_array_select_value(t14, 8, t4, t12, t16, 2, 1, t48, 64, 2);
    t19 = (t0 + 2520);
    t20 = (t0 + 2520);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t26 = ((char*)((ng29)));
    t27 = ((char*)((ng30)));
    xsi_vlog_convert_partindices(t23, t24, t25, ((int*)(t22)), 2, t26, 32, 1, t27, 32, 1);
    t28 = (t23 + 4);
    t6 = *((unsigned int *)t28);
    t33 = (!(t6));
    t29 = (t24 + 4);
    t7 = *((unsigned int *)t29);
    t36 = (!(t7));
    t37 = (t33 && t36);
    t30 = (t25 + 4);
    t8 = *((unsigned int *)t30);
    t40 = (!(t8));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2680);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 2680);
    t15 = (t13 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 1640U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng7)));
    xsi_vlog_unsigned_add(t48, 64, t18, 64, t17, 32);
    xsi_vlog_generic_get_array_select_value(t14, 8, t4, t12, t16, 2, 1, t48, 64, 2);
    t19 = (t0 + 2520);
    t20 = (t0 + 2520);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t26 = ((char*)((ng31)));
    t27 = ((char*)((ng32)));
    xsi_vlog_convert_partindices(t23, t24, t25, ((int*)(t22)), 2, t26, 32, 1, t27, 32, 1);
    t28 = (t23 + 4);
    t6 = *((unsigned int *)t28);
    t33 = (!(t6));
    t29 = (t24 + 4);
    t7 = *((unsigned int *)t29);
    t36 = (!(t7));
    t37 = (t33 && t36);
    t30 = (t25 + 4);
    t8 = *((unsigned int *)t30);
    t40 = (!(t8));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB24;

LAB25:    goto LAB8;

LAB10:    t42 = *((unsigned int *)t25);
    t43 = (t42 + 0);
    t44 = *((unsigned int *)t23);
    t45 = *((unsigned int *)t24);
    t46 = (t44 - t45);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t21, t14, t43, *((unsigned int *)t24), t47, 20000LL);
    goto LAB11;

LAB12:    t9 = *((unsigned int *)t25);
    t43 = (t9 + 0);
    t10 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t24);
    t46 = (t10 - t32);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t19, t14, t43, *((unsigned int *)t24), t47, 20000LL);
    goto LAB13;

LAB14:    t9 = *((unsigned int *)t25);
    t43 = (t9 + 0);
    t10 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t24);
    t46 = (t10 - t32);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t19, t14, t43, *((unsigned int *)t24), t47, 20000LL);
    goto LAB15;

LAB16:    t9 = *((unsigned int *)t25);
    t43 = (t9 + 0);
    t10 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t24);
    t46 = (t10 - t32);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t19, t14, t43, *((unsigned int *)t24), t47, 20000LL);
    goto LAB17;

LAB18:    t9 = *((unsigned int *)t25);
    t43 = (t9 + 0);
    t10 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t24);
    t46 = (t10 - t32);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t19, t14, t43, *((unsigned int *)t24), t47, 20000LL);
    goto LAB19;

LAB20:    t9 = *((unsigned int *)t25);
    t43 = (t9 + 0);
    t10 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t24);
    t46 = (t10 - t32);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t19, t14, t43, *((unsigned int *)t24), t47, 20000LL);
    goto LAB21;

LAB22:    t9 = *((unsigned int *)t25);
    t43 = (t9 + 0);
    t10 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t24);
    t46 = (t10 - t32);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t19, t14, t43, *((unsigned int *)t24), t47, 20000LL);
    goto LAB23;

LAB24:    t9 = *((unsigned int *)t25);
    t43 = (t9 + 0);
    t10 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t24);
    t46 = (t10 - t32);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t19, t14, t43, *((unsigned int *)t24), t47, 20000LL);
    goto LAB25;

}

static void Always_88_2(char *t0)
{
    char t11[8];
    char t23[8];
    char t24[8];
    char t43[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    int t34;
    char *t35;
    unsigned int t36;
    int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    int t41;
    int t42;

LAB0:    t1 = (t0 + 4416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4752);
    *((int *)t2) = 1;
    t3 = (t0 + 4448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(89, ng0);

LAB5:    xsi_set_current_line(90, ng0);
    t4 = (t0 + 2120U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(91, ng0);

LAB9:    xsi_set_current_line(92, ng0);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    memset(t11, 0, 8);
    t12 = (t11 + 4);
    t14 = (t13 + 8);
    t15 = (t13 + 12);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 24);
    *((unsigned int *)t11) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 24);
    *((unsigned int *)t12) = t19;
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 255U);
    t21 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t21 & 255U);
    t22 = (t0 + 2680);
    t25 = (t0 + 2680);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = (t0 + 2680);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = (t0 + 1640U);
    t32 = *((char **)t31);
    xsi_vlog_generic_convert_array_indices(t23, t24, t27, t30, 2, 1, t32, 64, 2);
    t31 = (t23 + 4);
    t33 = *((unsigned int *)t31);
    t34 = (!(t33));
    t35 = (t24 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = (t34 && t37);
    if (t38 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 8);
    t5 = (t3 + 12);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 16);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 255U);
    t12 = (t0 + 2680);
    t13 = (t0 + 2680);
    t14 = (t13 + 72U);
    t15 = *((char **)t14);
    t22 = (t0 + 2680);
    t25 = (t22 + 64U);
    t26 = *((char **)t25);
    t27 = (t0 + 1640U);
    t28 = *((char **)t27);
    t27 = ((char*)((ng1)));
    xsi_vlog_unsigned_add(t43, 64, t28, 64, t27, 32);
    xsi_vlog_generic_convert_array_indices(t23, t24, t15, t26, 2, 1, t43, 64, 2);
    t29 = (t23 + 4);
    t17 = *((unsigned int *)t29);
    t34 = (!(t17));
    t30 = (t24 + 4);
    t18 = *((unsigned int *)t30);
    t37 = (!(t18));
    t38 = (t34 && t37);
    if (t38 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 8);
    t5 = (t3 + 12);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 8);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 255U);
    t12 = (t0 + 2680);
    t13 = (t0 + 2680);
    t14 = (t13 + 72U);
    t15 = *((char **)t14);
    t22 = (t0 + 2680);
    t25 = (t22 + 64U);
    t26 = *((char **)t25);
    t27 = (t0 + 1640U);
    t28 = *((char **)t27);
    t27 = ((char*)((ng2)));
    xsi_vlog_unsigned_add(t43, 64, t28, 64, t27, 32);
    xsi_vlog_generic_convert_array_indices(t23, t24, t15, t26, 2, 1, t43, 64, 2);
    t29 = (t23 + 4);
    t17 = *((unsigned int *)t29);
    t34 = (!(t17));
    t30 = (t24 + 4);
    t18 = *((unsigned int *)t30);
    t37 = (!(t18));
    t38 = (t34 && t37);
    if (t38 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 8);
    t5 = (t3 + 12);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 255U);
    t12 = (t0 + 2680);
    t13 = (t0 + 2680);
    t14 = (t13 + 72U);
    t15 = *((char **)t14);
    t22 = (t0 + 2680);
    t25 = (t22 + 64U);
    t26 = *((char **)t25);
    t27 = (t0 + 1640U);
    t28 = *((char **)t27);
    t27 = ((char*)((ng3)));
    xsi_vlog_unsigned_add(t43, 64, t28, 64, t27, 32);
    xsi_vlog_generic_convert_array_indices(t23, t24, t15, t26, 2, 1, t43, 64, 2);
    t29 = (t23 + 4);
    t17 = *((unsigned int *)t29);
    t34 = (!(t17));
    t30 = (t24 + 4);
    t18 = *((unsigned int *)t30);
    t37 = (!(t18));
    t38 = (t34 && t37);
    if (t38 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 24);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 24);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 255U);
    t5 = (t0 + 2680);
    t12 = (t0 + 2680);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 2680);
    t22 = (t15 + 64U);
    t25 = *((char **)t22);
    t26 = (t0 + 1640U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng4)));
    xsi_vlog_unsigned_add(t43, 64, t27, 64, t26, 32);
    xsi_vlog_generic_convert_array_indices(t23, t24, t14, t25, 2, 1, t43, 64, 2);
    t28 = (t23 + 4);
    t17 = *((unsigned int *)t28);
    t34 = (!(t17));
    t29 = (t24 + 4);
    t18 = *((unsigned int *)t29);
    t37 = (!(t18));
    t38 = (t34 && t37);
    if (t38 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 16);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 255U);
    t5 = (t0 + 2680);
    t12 = (t0 + 2680);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 2680);
    t22 = (t15 + 64U);
    t25 = *((char **)t22);
    t26 = (t0 + 1640U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng5)));
    xsi_vlog_unsigned_add(t43, 64, t27, 64, t26, 32);
    xsi_vlog_generic_convert_array_indices(t23, t24, t14, t25, 2, 1, t43, 64, 2);
    t28 = (t23 + 4);
    t17 = *((unsigned int *)t28);
    t34 = (!(t17));
    t29 = (t24 + 4);
    t18 = *((unsigned int *)t29);
    t37 = (!(t18));
    t38 = (t34 && t37);
    if (t38 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 8);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 8);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 255U);
    t5 = (t0 + 2680);
    t12 = (t0 + 2680);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 2680);
    t22 = (t15 + 64U);
    t25 = *((char **)t22);
    t26 = (t0 + 1640U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng6)));
    xsi_vlog_unsigned_add(t43, 64, t27, 64, t26, 32);
    xsi_vlog_generic_convert_array_indices(t23, t24, t14, t25, 2, 1, t43, 64, 2);
    t28 = (t23 + 4);
    t17 = *((unsigned int *)t28);
    t34 = (!(t17));
    t29 = (t24 + 4);
    t18 = *((unsigned int *)t29);
    t37 = (!(t18));
    t38 = (t34 && t37);
    if (t38 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 255U);
    t5 = (t0 + 2680);
    t12 = (t0 + 2680);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 2680);
    t22 = (t15 + 64U);
    t25 = *((char **)t22);
    t26 = (t0 + 1640U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng7)));
    xsi_vlog_unsigned_add(t43, 64, t27, 64, t26, 32);
    xsi_vlog_generic_convert_array_indices(t23, t24, t14, t25, 2, 1, t43, 64, 2);
    t28 = (t23 + 4);
    t17 = *((unsigned int *)t28);
    t34 = (!(t17));
    t29 = (t24 + 4);
    t18 = *((unsigned int *)t29);
    t37 = (!(t18));
    t38 = (t34 && t37);
    if (t38 == 1)
        goto LAB24;

LAB25:    goto LAB8;

LAB10:    t39 = *((unsigned int *)t23);
    t40 = *((unsigned int *)t24);
    t41 = (t39 - t40);
    t42 = (t41 + 1);
    xsi_vlogvar_wait_assign_value(t22, t11, 0, *((unsigned int *)t24), t42, 20000LL);
    goto LAB11;

LAB12:    t19 = *((unsigned int *)t23);
    t20 = *((unsigned int *)t24);
    t41 = (t19 - t20);
    t42 = (t41 + 1);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, *((unsigned int *)t24), t42, 20000LL);
    goto LAB13;

LAB14:    t19 = *((unsigned int *)t23);
    t20 = *((unsigned int *)t24);
    t41 = (t19 - t20);
    t42 = (t41 + 1);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, *((unsigned int *)t24), t42, 20000LL);
    goto LAB15;

LAB16:    t19 = *((unsigned int *)t23);
    t20 = *((unsigned int *)t24);
    t41 = (t19 - t20);
    t42 = (t41 + 1);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, *((unsigned int *)t24), t42, 20000LL);
    goto LAB17;

LAB18:    t19 = *((unsigned int *)t23);
    t20 = *((unsigned int *)t24);
    t41 = (t19 - t20);
    t42 = (t41 + 1);
    xsi_vlogvar_wait_assign_value(t5, t11, 0, *((unsigned int *)t24), t42, 20000LL);
    goto LAB19;

LAB20:    t19 = *((unsigned int *)t23);
    t20 = *((unsigned int *)t24);
    t41 = (t19 - t20);
    t42 = (t41 + 1);
    xsi_vlogvar_wait_assign_value(t5, t11, 0, *((unsigned int *)t24), t42, 20000LL);
    goto LAB21;

LAB22:    t19 = *((unsigned int *)t23);
    t20 = *((unsigned int *)t24);
    t41 = (t19 - t20);
    t42 = (t41 + 1);
    xsi_vlogvar_wait_assign_value(t5, t11, 0, *((unsigned int *)t24), t42, 20000LL);
    goto LAB23;

LAB24:    t19 = *((unsigned int *)t23);
    t20 = *((unsigned int *)t24);
    t41 = (t19 - t20);
    t42 = (t41 + 1);
    xsi_vlogvar_wait_assign_value(t5, t11, 0, *((unsigned int *)t24), t42, 20000LL);
    goto LAB25;

}


extern void work_m_00000000003157760408_2461264495_init()
{
	static char *pe[] = {(void *)Initial_54_0,(void *)Always_71_1,(void *)Always_88_2};
	static char *se[] = {(void *)sp_initset};
	xsi_register_didat("work_m_00000000003157760408_2461264495", "isim/SingleCycleProc_isim_beh.exe.sim/work/m_00000000003157760408_2461264495.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
