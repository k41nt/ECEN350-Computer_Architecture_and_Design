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
static const char *ng0 = "C:/Academic/Fall 2017/ECEN 350/Lab9/InstructionMemory(4).v";
static unsigned int ng1[] = {0U, 0U, 0U, 0U};
static unsigned int ng2[] = {4164944873U, 0U};
static unsigned int ng3[] = {4U, 0U, 0U, 0U};
static unsigned int ng4[] = {4164977642U, 0U};
static unsigned int ng5[] = {8U, 0U, 0U, 0U};
static unsigned int ng6[] = {4165010411U, 0U};
static unsigned int ng7[] = {12U, 0U, 0U, 0U};
static unsigned int ng8[] = {4165043180U, 0U};
static unsigned int ng9[] = {16U, 0U, 0U, 0U};
static unsigned int ng10[] = {4165075949U, 0U};
static unsigned int ng11[] = {20U, 0U, 0U, 0U};
static unsigned int ng12[] = {2852847946U, 0U};
static unsigned int ng13[] = {24U, 0U, 0U, 0U};
static unsigned int ng14[] = {2315911564U, 0U};
static unsigned int ng15[] = {28U, 0U, 0U, 0U};
static unsigned int ng16[] = {3019899020U, 0U};
static unsigned int ng17[] = {32U, 0U, 0U, 0U};
static unsigned int ng18[] = {2332623277U, 0U};
static unsigned int ng19[] = {36U, 0U, 0U, 0U};
static unsigned int ng20[] = {3406365068U, 0U};
static unsigned int ng21[] = {40U, 0U, 0U, 0U};
static unsigned int ng22[] = {402653181U, 0U};
static unsigned int ng23[] = {44U, 0U, 0U, 0U};
static unsigned int ng24[] = {4160881645U, 0U};
static unsigned int ng25[] = {48U, 0U, 0U, 0U};
static unsigned int ng26[] = {4294967295U, 4294967295U};



static void Always_21_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 2640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 2960);
    *((int *)t2) = 1;
    t3 = (t0 + 2672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(21, ng0);

LAB5:    xsi_set_current_line(22, ng0);
    t4 = (t0 + 1320U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 64, t4, 64);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 64, t2, 64);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 64, t2, 64);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 64, t2, 64);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 64, t2, 64);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 64, t2, 64);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 64, t2, 64);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 64, t2, 64);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 64, t2, 64);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 64, t2, 64);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 64, t2, 64);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 64, t2, 64);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 64, t2, 64);
    if (t6 == 1)
        goto LAB31;

LAB32:
LAB34:
LAB33:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 1720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB35:    goto LAB2;

LAB7:    xsi_set_current_line(48, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1720);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB35;

LAB9:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1720);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB35;

LAB11:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1720);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB35;

LAB13:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1720);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB35;

LAB15:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1720);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB35;

LAB17:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1720);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB35;

LAB19:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1720);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB35;

LAB21:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1720);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB35;

LAB23:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1720);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB35;

LAB25:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 1720);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB35;

LAB27:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 1720);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB35;

LAB29:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 1720);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB35;

LAB31:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1720);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB35;

}


extern void work_m_00000000000694590701_2138213552_init()
{
	static char *pe[] = {(void *)Always_21_0};
	xsi_register_didat("work_m_00000000000694590701_2138213552", "isim/SingleCycleProc_isim_beh.exe.sim/work/m_00000000000694590701_2138213552.didat");
	xsi_register_executes(pe);
}
