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
static const char *ng0 = "C:/Academic/Fall 2017/ECEN 350/Lab8/NextPclogic.v";
static int ng1[] = {2, 0};
static int ng2[] = {4, 0, 0, 0};



static void Always_9_0(char *t0)
{
    char t7[16];
    char t9[8];
    char t18[8];
    char t25[8];
    char t58[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9, ng0);
    t2 = (t0 + 3968);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(9, ng0);

LAB5:    xsi_set_current_line(17, ng0);
    t4 = (t0 + 3456);
    xsi_process_wait(t4, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(17, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng1)));
    xsi_vlog_unsigned_lshift(t7, 64, t6, 64, t5, 32);
    t8 = (t0 + 2568);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 64);
    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    xsi_vlog_unsigned_add(t7, 64, t3, 64, t2, 32);
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 64);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(25, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2568);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    xsi_vlog_unsigned_add(t7, 64, t4, 64, t6, 64);
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 64);
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t2) != 0)
        goto LAB10;

LAB11:    t5 = (t9 + 4);
    t15 = *((unsigned int *)t9);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB12;

LAB13:    memcpy(t25, t9, 8);

LAB14:    t57 = (t0 + 2728);
    xsi_vlogvar_assign_value(t57, t25, 0, 0, 1);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB8:    *((unsigned int *)t9) = 1;
    goto LAB11;

LAB10:    t4 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB12:    t6 = (t0 + 1528U);
    t8 = *((char **)t6);
    memset(t18, 0, 8);
    t6 = (t8 + 4);
    t19 = *((unsigned int *)t6);
    t20 = (~(t19));
    t21 = *((unsigned int *)t8);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t6) != 0)
        goto LAB17;

LAB18:    t26 = *((unsigned int *)t9);
    t27 = *((unsigned int *)t18);
    t28 = (t26 & t27);
    *((unsigned int *)t25) = t28;
    t29 = (t9 + 4);
    t30 = (t18 + 4);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t29);
    t33 = *((unsigned int *)t30);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB14;

LAB15:    *((unsigned int *)t18) = 1;
    goto LAB18;

LAB17:    t24 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB18;

LAB19:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t25) = (t37 | t38);
    t39 = (t9 + 4);
    t40 = (t18 + 4);
    t41 = *((unsigned int *)t9);
    t42 = (~(t41));
    t43 = *((unsigned int *)t39);
    t44 = (~(t43));
    t45 = *((unsigned int *)t18);
    t46 = (~(t45));
    t47 = *((unsigned int *)t40);
    t48 = (~(t47));
    t49 = (t42 & t44);
    t50 = (t46 & t48);
    t51 = (~(t49));
    t52 = (~(t50));
    t53 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t53 & t51);
    t54 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t54 & t52);
    t55 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t55 & t51);
    t56 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t56 & t52);
    goto LAB21;

LAB22:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t18, 0, 8);
    t6 = (t5 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t6) != 0)
        goto LAB25;

LAB26:    t24 = (t18 + 4);
    t15 = *((unsigned int *)t18);
    t16 = (!(t15));
    t17 = *((unsigned int *)t24);
    t19 = (t16 || t17);
    if (t19 > 0)
        goto LAB27;

LAB28:    memcpy(t58, t18, 8);

LAB29:    memset(t9, 0, 8);
    t61 = (t58 + 4);
    t54 = *((unsigned int *)t61);
    t55 = (~(t54));
    t56 = *((unsigned int *)t58);
    t62 = (t56 & t55);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t61) != 0)
        goto LAB39;

LAB40:    t65 = (t9 + 4);
    t66 = *((unsigned int *)t9);
    t67 = *((unsigned int *)t65);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB41;

LAB42:    t72 = *((unsigned int *)t9);
    t73 = (~(t72));
    t74 = *((unsigned int *)t65);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t65) > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t9) > 0)
        goto LAB47;

LAB48:    memcpy(t7, t78, 16);

LAB49:    t79 = (t0 + 2088);
    xsi_vlogvar_assign_value(t79, t7, 0, 0, 64);
    goto LAB2;

LAB23:    *((unsigned int *)t18) = 1;
    goto LAB26;

LAB25:    t8 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB26;

LAB27:    t29 = (t0 + 1688U);
    t30 = *((char **)t29);
    memset(t25, 0, 8);
    t29 = (t30 + 4);
    t20 = *((unsigned int *)t29);
    t21 = (~(t20));
    t22 = *((unsigned int *)t30);
    t23 = (t22 & t21);
    t26 = (t23 & 1U);
    if (t26 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t29) != 0)
        goto LAB32;

LAB33:    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t25);
    t32 = (t27 | t28);
    *((unsigned int *)t58) = t32;
    t39 = (t18 + 4);
    t40 = (t25 + 4);
    t57 = (t58 + 4);
    t33 = *((unsigned int *)t39);
    t34 = *((unsigned int *)t40);
    t35 = (t33 | t34);
    *((unsigned int *)t57) = t35;
    t36 = *((unsigned int *)t57);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB34;

LAB35:
LAB36:    goto LAB29;

LAB30:    *((unsigned int *)t25) = 1;
    goto LAB33;

LAB32:    t31 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB33;

LAB34:    t38 = *((unsigned int *)t58);
    t41 = *((unsigned int *)t57);
    *((unsigned int *)t58) = (t38 | t41);
    t59 = (t18 + 4);
    t60 = (t25 + 4);
    t42 = *((unsigned int *)t59);
    t43 = (~(t42));
    t44 = *((unsigned int *)t18);
    t49 = (t44 & t43);
    t45 = *((unsigned int *)t60);
    t46 = (~(t45));
    t47 = *((unsigned int *)t25);
    t50 = (t47 & t46);
    t48 = (~(t49));
    t51 = (~(t50));
    t52 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t52 & t48);
    t53 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t53 & t51);
    goto LAB36;

LAB37:    *((unsigned int *)t9) = 1;
    goto LAB40;

LAB39:    t64 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB40;

LAB41:    t69 = (t0 + 2408);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    goto LAB42;

LAB43:    t76 = (t0 + 2248);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    goto LAB44;

LAB45:    xsi_vlog_unsigned_bit_combine(t7, 64, t71, 64, t78, 64);
    goto LAB49;

LAB47:    memcpy(t7, t71, 16);
    goto LAB49;

}


extern void work_m_00000000000330180160_1261590011_init()
{
	static char *pe[] = {(void *)Always_9_0};
	xsi_register_didat("work_m_00000000000330180160_1261590011", "isim/SingleCycleProc_isim_beh.exe.sim/work/m_00000000000330180160_1261590011.didat");
	xsi_register_executes(pe);
}
