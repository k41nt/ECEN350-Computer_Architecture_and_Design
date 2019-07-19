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
static const char *ng0 = "C:/Academic/Fall 2017/ECEN 350/Lab07/SignExtender.v";
static unsigned int ng1[] = {5U, 0U};
static unsigned int ng2[] = {37U, 0U};
static unsigned int ng3[] = {181U, 0U};
static unsigned int ng4[] = {180U, 0U};
static unsigned int ng5[] = {1984U, 0U};
static unsigned int ng6[] = {1986U, 0U};
static unsigned int ng7[] = {1691U, 0U};
static unsigned int ng8[] = {580U, 0U};
static unsigned int ng9[] = {0U, 0U};
static int ng10[] = {36, 0};
static int ng11[] = {43, 0};
static int ng12[] = {55, 0};
static int ng13[] = {58, 0};
static int ng14[] = {52, 0};

static void NetReassign_13_1(char *);
static void NetReassign_18_2(char *);
static void NetReassign_23_3(char *);
static void NetReassign_28_4(char *);
static void NetReassign_33_5(char *);


static void Always_10_0(char *t0)
{
    char t4[8];
    char t15[8];
    char t31[8];
    char t44[8];
    char t55[8];
    char t71[8];
    char t79[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 3928);
    *((int *)t2) = 1;
    t3 = (t0 + 2400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(10, ng0);

LAB5:    xsi_set_current_line(11, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 26);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 26);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 63U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 63U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB9;

LAB6:    if (t27 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t15) = 1;

LAB9:    memset(t31, 0, 8);
    t32 = (t15 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t15);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t32) != 0)
        goto LAB12;

LAB13:    t39 = (t31 + 4);
    t40 = *((unsigned int *)t31);
    t41 = (!(t40));
    t42 = *((unsigned int *)t39);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB14;

LAB15:    memcpy(t79, t31, 8);

LAB16:    t107 = (t79 + 4);
    t108 = *((unsigned int *)t107);
    t109 = (~(t108));
    t110 = *((unsigned int *)t79);
    t111 = (t110 & t109);
    t112 = (t111 != 0);
    if (t112 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 24);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 24);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 255U);
    t6 = ((char*)((ng3)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB35;

LAB32:    if (t27 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t15) = 1;

LAB35:    memset(t31, 0, 8);
    t17 = (t15 + 4);
    t33 = *((unsigned int *)t17);
    t34 = (~(t33));
    t35 = *((unsigned int *)t15);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t17) != 0)
        goto LAB38;

LAB39:    t32 = (t31 + 4);
    t40 = *((unsigned int *)t31);
    t41 = (!(t40));
    t42 = *((unsigned int *)t32);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB40;

LAB41:    memcpy(t79, t31, 8);

LAB42:    t93 = (t79 + 4);
    t108 = *((unsigned int *)t93);
    t109 = (~(t108));
    t110 = *((unsigned int *)t79);
    t111 = (t110 & t109);
    t112 = (t111 != 0);
    if (t112 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 21);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 21);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 2047U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 2047U);
    t6 = ((char*)((ng5)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB61;

LAB58:    if (t27 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t15) = 1;

LAB61:    memset(t31, 0, 8);
    t17 = (t15 + 4);
    t33 = *((unsigned int *)t17);
    t34 = (~(t33));
    t35 = *((unsigned int *)t15);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t17) != 0)
        goto LAB64;

LAB65:    t32 = (t31 + 4);
    t40 = *((unsigned int *)t31);
    t41 = (!(t40));
    t42 = *((unsigned int *)t32);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB66;

LAB67:    memcpy(t79, t31, 8);

LAB68:    t93 = (t79 + 4);
    t108 = *((unsigned int *)t93);
    t109 = (~(t108));
    t110 = *((unsigned int *)t79);
    t111 = (t110 & t109);
    t112 = (t111 != 0);
    if (t112 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 21);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 21);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 2047U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 2047U);
    t6 = ((char*)((ng7)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB87;

LAB84:    if (t27 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t15) = 1;

LAB87:    t17 = (t15 + 4);
    t33 = *((unsigned int *)t17);
    t34 = (~(t33));
    t35 = *((unsigned int *)t15);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 22);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 22);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 1023U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 1023U);
    t6 = ((char*)((ng8)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB95;

LAB92:    if (t27 != 0)
        goto LAB94;

LAB93:    *((unsigned int *)t15) = 1;

LAB95:    t17 = (t15 + 4);
    t33 = *((unsigned int *)t17);
    t34 = (~(t33));
    t35 = *((unsigned int *)t15);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB96;

LAB97:
LAB98:
LAB90:
LAB82:
LAB56:
LAB30:    goto LAB2;

LAB8:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t31) = 1;
    goto LAB13;

LAB12:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB13;

LAB14:    t45 = (t0 + 1048U);
    t46 = *((char **)t45);
    memset(t44, 0, 8);
    t45 = (t44 + 4);
    t47 = (t46 + 4);
    t48 = *((unsigned int *)t46);
    t49 = (t48 >> 26);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t47);
    t51 = (t50 >> 26);
    *((unsigned int *)t45) = t51;
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 63U);
    t53 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t53 & 63U);
    t54 = ((char*)((ng2)));
    memset(t55, 0, 8);
    t56 = (t44 + 4);
    t57 = (t54 + 4);
    t58 = *((unsigned int *)t44);
    t59 = *((unsigned int *)t54);
    t60 = (t58 ^ t59);
    t61 = *((unsigned int *)t56);
    t62 = *((unsigned int *)t57);
    t63 = (t61 ^ t62);
    t64 = (t60 | t63);
    t65 = *((unsigned int *)t56);
    t66 = *((unsigned int *)t57);
    t67 = (t65 | t66);
    t68 = (~(t67));
    t69 = (t64 & t68);
    if (t69 != 0)
        goto LAB20;

LAB17:    if (t67 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t55) = 1;

LAB20:    memset(t71, 0, 8);
    t72 = (t55 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t55);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t72) != 0)
        goto LAB23;

LAB24:    t80 = *((unsigned int *)t31);
    t81 = *((unsigned int *)t71);
    t82 = (t80 | t81);
    *((unsigned int *)t79) = t82;
    t83 = (t31 + 4);
    t84 = (t71 + 4);
    t85 = (t79 + 4);
    t86 = *((unsigned int *)t83);
    t87 = *((unsigned int *)t84);
    t88 = (t86 | t87);
    *((unsigned int *)t85) = t88;
    t89 = *((unsigned int *)t85);
    t90 = (t89 != 0);
    if (t90 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t70 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t71) = 1;
    goto LAB24;

LAB23:    t78 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB24;

LAB25:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t85);
    *((unsigned int *)t79) = (t91 | t92);
    t93 = (t31 + 4);
    t94 = (t71 + 4);
    t95 = *((unsigned int *)t93);
    t96 = (~(t95));
    t97 = *((unsigned int *)t31);
    t98 = (t97 & t96);
    t99 = *((unsigned int *)t94);
    t100 = (~(t99));
    t101 = *((unsigned int *)t71);
    t102 = (t101 & t100);
    t103 = (~(t98));
    t104 = (~(t102));
    t105 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t105 & t103);
    t106 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t106 & t104);
    goto LAB27;

LAB28:    xsi_set_current_line(12, ng0);

LAB31:    xsi_set_current_line(13, ng0);
    t113 = (t0 + 1448);
    xsi_set_assignedflag(t113);
    t114 = (t0 + 5552);
    *((int *)t114) = 1;
    NetReassign_13_1(t0);
    goto LAB30;

LAB34:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB35;

LAB36:    *((unsigned int *)t31) = 1;
    goto LAB39;

LAB38:    t30 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB39;

LAB40:    t38 = (t0 + 1048U);
    t39 = *((char **)t38);
    memset(t44, 0, 8);
    t38 = (t44 + 4);
    t45 = (t39 + 4);
    t48 = *((unsigned int *)t39);
    t49 = (t48 >> 24);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t45);
    t51 = (t50 >> 24);
    *((unsigned int *)t38) = t51;
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 255U);
    t53 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t53 & 255U);
    t46 = ((char*)((ng4)));
    memset(t55, 0, 8);
    t47 = (t44 + 4);
    t54 = (t46 + 4);
    t58 = *((unsigned int *)t44);
    t59 = *((unsigned int *)t46);
    t60 = (t58 ^ t59);
    t61 = *((unsigned int *)t47);
    t62 = *((unsigned int *)t54);
    t63 = (t61 ^ t62);
    t64 = (t60 | t63);
    t65 = *((unsigned int *)t47);
    t66 = *((unsigned int *)t54);
    t67 = (t65 | t66);
    t68 = (~(t67));
    t69 = (t64 & t68);
    if (t69 != 0)
        goto LAB46;

LAB43:    if (t67 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t55) = 1;

LAB46:    memset(t71, 0, 8);
    t57 = (t55 + 4);
    t73 = *((unsigned int *)t57);
    t74 = (~(t73));
    t75 = *((unsigned int *)t55);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t57) != 0)
        goto LAB49;

LAB50:    t80 = *((unsigned int *)t31);
    t81 = *((unsigned int *)t71);
    t82 = (t80 | t81);
    *((unsigned int *)t79) = t82;
    t72 = (t31 + 4);
    t78 = (t71 + 4);
    t83 = (t79 + 4);
    t86 = *((unsigned int *)t72);
    t87 = *((unsigned int *)t78);
    t88 = (t86 | t87);
    *((unsigned int *)t83) = t88;
    t89 = *((unsigned int *)t83);
    t90 = (t89 != 0);
    if (t90 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB42;

LAB45:    t56 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t71) = 1;
    goto LAB50;

LAB49:    t70 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB50;

LAB51:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t83);
    *((unsigned int *)t79) = (t91 | t92);
    t84 = (t31 + 4);
    t85 = (t71 + 4);
    t95 = *((unsigned int *)t84);
    t96 = (~(t95));
    t97 = *((unsigned int *)t31);
    t98 = (t97 & t96);
    t99 = *((unsigned int *)t85);
    t100 = (~(t99));
    t101 = *((unsigned int *)t71);
    t102 = (t101 & t100);
    t103 = (~(t98));
    t104 = (~(t102));
    t105 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t105 & t103);
    t106 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t106 & t104);
    goto LAB53;

LAB54:    xsi_set_current_line(17, ng0);

LAB57:    xsi_set_current_line(18, ng0);
    t94 = (t0 + 1448);
    xsi_set_assignedflag(t94);
    t107 = (t0 + 5556);
    *((int *)t107) = 1;
    NetReassign_18_2(t0);
    goto LAB56;

LAB60:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB61;

LAB62:    *((unsigned int *)t31) = 1;
    goto LAB65;

LAB64:    t30 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB65;

LAB66:    t38 = (t0 + 1048U);
    t39 = *((char **)t38);
    memset(t44, 0, 8);
    t38 = (t44 + 4);
    t45 = (t39 + 4);
    t48 = *((unsigned int *)t39);
    t49 = (t48 >> 21);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t45);
    t51 = (t50 >> 21);
    *((unsigned int *)t38) = t51;
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 2047U);
    t53 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t53 & 2047U);
    t46 = ((char*)((ng6)));
    memset(t55, 0, 8);
    t47 = (t44 + 4);
    t54 = (t46 + 4);
    t58 = *((unsigned int *)t44);
    t59 = *((unsigned int *)t46);
    t60 = (t58 ^ t59);
    t61 = *((unsigned int *)t47);
    t62 = *((unsigned int *)t54);
    t63 = (t61 ^ t62);
    t64 = (t60 | t63);
    t65 = *((unsigned int *)t47);
    t66 = *((unsigned int *)t54);
    t67 = (t65 | t66);
    t68 = (~(t67));
    t69 = (t64 & t68);
    if (t69 != 0)
        goto LAB72;

LAB69:    if (t67 != 0)
        goto LAB71;

LAB70:    *((unsigned int *)t55) = 1;

LAB72:    memset(t71, 0, 8);
    t57 = (t55 + 4);
    t73 = *((unsigned int *)t57);
    t74 = (~(t73));
    t75 = *((unsigned int *)t55);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t57) != 0)
        goto LAB75;

LAB76:    t80 = *((unsigned int *)t31);
    t81 = *((unsigned int *)t71);
    t82 = (t80 | t81);
    *((unsigned int *)t79) = t82;
    t72 = (t31 + 4);
    t78 = (t71 + 4);
    t83 = (t79 + 4);
    t86 = *((unsigned int *)t72);
    t87 = *((unsigned int *)t78);
    t88 = (t86 | t87);
    *((unsigned int *)t83) = t88;
    t89 = *((unsigned int *)t83);
    t90 = (t89 != 0);
    if (t90 == 1)
        goto LAB77;

LAB78:
LAB79:    goto LAB68;

LAB71:    t56 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB72;

LAB73:    *((unsigned int *)t71) = 1;
    goto LAB76;

LAB75:    t70 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB76;

LAB77:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t83);
    *((unsigned int *)t79) = (t91 | t92);
    t84 = (t31 + 4);
    t85 = (t71 + 4);
    t95 = *((unsigned int *)t84);
    t96 = (~(t95));
    t97 = *((unsigned int *)t31);
    t98 = (t97 & t96);
    t99 = *((unsigned int *)t85);
    t100 = (~(t99));
    t101 = *((unsigned int *)t71);
    t102 = (t101 & t100);
    t103 = (~(t98));
    t104 = (~(t102));
    t105 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t105 & t103);
    t106 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t106 & t104);
    goto LAB79;

LAB80:    xsi_set_current_line(22, ng0);

LAB83:    xsi_set_current_line(23, ng0);
    t94 = (t0 + 1448);
    xsi_set_assignedflag(t94);
    t107 = (t0 + 5560);
    *((int *)t107) = 1;
    NetReassign_23_3(t0);
    goto LAB82;

LAB86:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB87;

LAB88:    xsi_set_current_line(27, ng0);

LAB91:    xsi_set_current_line(28, ng0);
    t30 = (t0 + 1448);
    xsi_set_assignedflag(t30);
    t32 = (t0 + 5564);
    *((int *)t32) = 1;
    NetReassign_28_4(t0);
    goto LAB90;

LAB94:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB95;

LAB96:    xsi_set_current_line(32, ng0);

LAB99:    xsi_set_current_line(33, ng0);
    t30 = (t0 + 1448);
    xsi_set_assignedflag(t30);
    t32 = (t0 + 5568);
    *((int *)t32) = 1;
    NetReassign_33_5(t0);
    goto LAB98;

}

static void NetReassign_13_1(char *t0)
{
    char t4[16];
    char t5[8];
    char t15[16];
    char t19[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 2616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t3 = 0;
    t2 = ((char*)((ng9)));
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 67108863U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 67108863U);
    t16 = ((char*)((ng10)));
    t17 = (t0 + 1048U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t19 + 4);
    t20 = (t18 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 25);
    t23 = (t22 & 1);
    *((unsigned int *)t19) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 25);
    t26 = (t25 & 1);
    *((unsigned int *)t17) = t26;
    xsi_vlog_mul_concat(t15, 36, 1, t16, 1U, t19, 1);
    xsi_vlogtype_concat(t4, 64, 64, 3U, t15, 36, t5, 26, t2, 2);
    t27 = (t0 + 5552);
    if (*((int *)t27) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t30 = (t0 + 3944);
    *((int *)t30) = 0;

LAB8:
LAB1:    return;
LAB4:    t28 = (t0 + 1448);
    xsi_vlogvar_assignassignvalue(t28, t4, 0, 0, 0, 64, ((int*)(t27)));
    t3 = 1;
    goto LAB5;

LAB6:    t29 = (t0 + 3944);
    *((int *)t29) = 1;
    goto LAB8;

}

static void NetReassign_18_2(char *t0)
{
    char t4[16];
    char t5[8];
    char t15[16];
    char t19[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 2864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t3 = 0;
    t2 = ((char*)((ng9)));
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 5);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 5);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 524287U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 524287U);
    t16 = ((char*)((ng11)));
    t17 = (t0 + 1048U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t19 + 4);
    t20 = (t18 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 23);
    t23 = (t22 & 1);
    *((unsigned int *)t19) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 23);
    t26 = (t25 & 1);
    *((unsigned int *)t17) = t26;
    xsi_vlog_mul_concat(t15, 43, 1, t16, 1U, t19, 1);
    xsi_vlogtype_concat(t4, 64, 64, 3U, t15, 43, t5, 19, t2, 2);
    t27 = (t0 + 5556);
    if (*((int *)t27) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t30 = (t0 + 3960);
    *((int *)t30) = 0;

LAB8:
LAB1:    return;
LAB4:    t28 = (t0 + 1448);
    xsi_vlogvar_assignassignvalue(t28, t4, 0, 0, 0, 64, ((int*)(t27)));
    t3 = 1;
    goto LAB5;

LAB6:    t29 = (t0 + 3960);
    *((int *)t29) = 1;
    goto LAB8;

}

static void NetReassign_23_3(char *t0)
{
    char t4[16];
    char t5[8];
    char t14[16];
    char t18[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 12);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 12);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 511U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 511U);
    t15 = ((char*)((ng12)));
    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 20);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 20);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    xsi_vlog_mul_concat(t14, 55, 1, t15, 1U, t18, 1);
    xsi_vlogtype_concat(t4, 64, 64, 2U, t14, 55, t5, 9);
    t26 = (t0 + 5560);
    if (*((int *)t26) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t29 = (t0 + 3976);
    *((int *)t29) = 0;

LAB8:
LAB1:    return;
LAB4:    t27 = (t0 + 1448);
    xsi_vlogvar_assignassignvalue(t27, t4, 0, 0, 0, 64, ((int*)(t26)));
    t3 = 1;
    goto LAB5;

LAB6:    t28 = (t0 + 3976);
    *((int *)t28) = 1;
    goto LAB8;

}

static void NetReassign_28_4(char *t0)
{
    char t4[16];
    char t5[8];
    char t14[16];
    char t18[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 3360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 10);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 10);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 63U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 63U);
    t15 = ((char*)((ng13)));
    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 15);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 15);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    xsi_vlog_mul_concat(t14, 58, 1, t15, 1U, t18, 1);
    xsi_vlogtype_concat(t4, 64, 64, 2U, t14, 58, t5, 6);
    t26 = (t0 + 5564);
    if (*((int *)t26) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t29 = (t0 + 3992);
    *((int *)t29) = 0;

LAB8:
LAB1:    return;
LAB4:    t27 = (t0 + 1448);
    xsi_vlogvar_assignassignvalue(t27, t4, 0, 0, 0, 64, ((int*)(t26)));
    t3 = 1;
    goto LAB5;

LAB6:    t28 = (t0 + 3992);
    *((int *)t28) = 1;
    goto LAB8;

}

static void NetReassign_33_5(char *t0)
{
    char t4[16];
    char t5[8];
    char t14[16];
    char t18[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 3608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 10);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 10);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 4095U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 4095U);
    t15 = ((char*)((ng14)));
    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 21);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 21);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    xsi_vlog_mul_concat(t14, 52, 1, t15, 1U, t18, 1);
    xsi_vlogtype_concat(t4, 64, 64, 2U, t14, 52, t5, 12);
    t26 = (t0 + 5568);
    if (*((int *)t26) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t29 = (t0 + 4008);
    *((int *)t29) = 0;

LAB8:
LAB1:    return;
LAB4:    t27 = (t0 + 1448);
    xsi_vlogvar_assignassignvalue(t27, t4, 0, 0, 0, 64, ((int*)(t26)));
    t3 = 1;
    goto LAB5;

LAB6:    t28 = (t0 + 4008);
    *((int *)t28) = 1;
    goto LAB8;

}


extern void work_m_00000000003326379025_2412880366_init()
{
	static char *pe[] = {(void *)Always_10_0,(void *)NetReassign_13_1,(void *)NetReassign_18_2,(void *)NetReassign_23_3,(void *)NetReassign_28_4,(void *)NetReassign_33_5};
	xsi_register_didat("work_m_00000000003326379025_2412880366", "isim/SignExtender_tb_isim_beh.exe.sim/work/m_00000000003326379025_2412880366.didat");
	xsi_register_executes(pe);
}
