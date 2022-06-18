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
static const char *ng0 = "C:/Users/ocaga/elec204/term/backwardtimer.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_2546418145_3965413181(char *, char *, char *, int );
char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );


static void work_a_0258940050_3212880686_p_0(char *t0)
{
    char t30[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;
    int t12;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    int t18;
    char *t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    unsigned int t31;
    unsigned int t32;

LAB0:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4072);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t12 = (50 - 1);
    t2 = (t9 == t12);
    if (t2 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(150, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t12 = (t9 + 1);
    t1 = (t0 + 4408);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    *((int *)t10) = t12;
    xsi_driver_first_trans_fast(t1);

LAB22:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 1192U);
    t7 = *((char **)t3);
    t3 = (t0 + 6740);
    t9 = xsi_mem_cmp(t3, t7, 3U);
    if (t9 == 1)
        goto LAB9;

LAB15:    t10 = (t0 + 6743);
    t12 = xsi_mem_cmp(t10, t7, 3U);
    if (t12 == 1)
        goto LAB10;

LAB16:    t13 = (t0 + 6746);
    t15 = xsi_mem_cmp(t13, t7, 3U);
    if (t15 == 1)
        goto LAB11;

LAB17:    t16 = (t0 + 6749);
    t18 = xsi_mem_cmp(t16, t7, 3U);
    if (t18 == 1)
        goto LAB12;

LAB18:    t19 = (t0 + 6752);
    t21 = xsi_mem_cmp(t19, t7, 3U);
    if (t21 == 1)
        goto LAB13;

LAB19:
LAB14:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 6835);
    t4 = (t0 + 4152);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 6839);
    t4 = (t0 + 4216);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 6843);
    t4 = (t0 + 4280);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 6847);
    t4 = (t0 + 4344);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);

LAB8:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 4408);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB9:    xsi_set_current_line(66, ng0);
    t22 = (t0 + 6755);
    t24 = (t0 + 4152);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t22, 4U);
    xsi_driver_first_trans_fast_port(t24);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 6759);
    t4 = (t0 + 4216);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 6763);
    t4 = (t0 + 4280);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(69, ng0);
    t1 = (t0 + 6767);
    t4 = (t0 + 4344);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB8;

LAB10:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 6771);
    t4 = (t0 + 4152);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 6775);
    t4 = (t0 + 4216);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 6779);
    t4 = (t0 + 4280);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 6783);
    t4 = (t0 + 4344);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB8;

LAB11:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 6787);
    t4 = (t0 + 4152);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 6791);
    t4 = (t0 + 4216);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 6795);
    t4 = (t0 + 4280);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 6799);
    t4 = (t0 + 4344);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB8;

LAB12:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 6803);
    t4 = (t0 + 4152);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 6807);
    t4 = (t0 + 4216);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 6811);
    t4 = (t0 + 4280);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 6815);
    t4 = (t0 + 4344);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB8;

LAB13:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 6819);
    t4 = (t0 + 4152);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 6823);
    t4 = (t0 + 4216);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 6827);
    t4 = (t0 + 4280);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 6831);
    t4 = (t0 + 4344);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB8;

LAB20:;
LAB21:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 4408);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t1 = (t0 + 6644U);
    t2 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t3, t1, 0);
    if (t2 != 0)
        goto LAB24;

LAB26:    xsi_set_current_line(145, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t1 = (t0 + 6644U);
    t4 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t30, t3, t1, 1);
    t7 = (t30 + 12U);
    t31 = *((unsigned int *)t7);
    t32 = (1U * t31);
    t2 = (4U != t32);
    if (t2 == 1)
        goto LAB42;

LAB43:    t8 = (t0 + 4152);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t4, 4U);
    xsi_driver_first_trans_fast_port(t8);

LAB25:    goto LAB22;

LAB24:    xsi_set_current_line(118, ng0);
    t4 = (t0 + 1672U);
    t7 = *((char **)t4);
    t4 = (t0 + 6660U);
    t5 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t7, t4, 0);
    if (t5 != 0)
        goto LAB27;

LAB29:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t1 = (t0 + 6660U);
    t4 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t30, t3, t1, 1);
    t7 = (t30 + 12U);
    t31 = *((unsigned int *)t7);
    t32 = (1U * t31);
    t2 = (4U != t32);
    if (t2 == 1)
        goto LAB40;

LAB41:    t8 = (t0 + 4216);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t4, 4U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(142, ng0);
    t1 = (t0 + 6879);
    t4 = (t0 + 4152);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);

LAB28:    goto LAB25;

LAB27:    xsi_set_current_line(119, ng0);
    t8 = (t0 + 1832U);
    t10 = *((char **)t8);
    t8 = (t0 + 6676U);
    t6 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t10, t8, 0);
    if (t6 != 0)
        goto LAB30;

LAB32:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 6676U);
    t4 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t30, t3, t1, 1);
    t7 = (t30 + 12U);
    t31 = *((unsigned int *)t7);
    t32 = (1U * t31);
    t2 = (4U != t32);
    if (t2 == 1)
        goto LAB38;

LAB39:    t8 = (t0 + 4280);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t4, 4U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 6871);
    t4 = (t0 + 4216);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(137, ng0);
    t1 = (t0 + 6875);
    t4 = (t0 + 4152);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);

LAB31:    goto LAB28;

LAB30:    xsi_set_current_line(120, ng0);
    t11 = (t0 + 1992U);
    t13 = *((char **)t11);
    t11 = (t0 + 6692U);
    t29 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t13, t11, 0);
    if (t29 != 0)
        goto LAB33;

LAB35:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 6867);
    t4 = (t0 + 4280);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(131, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 6692U);
    t4 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t30, t3, t1, 1);
    t7 = (t30 + 12U);
    t31 = *((unsigned int *)t7);
    t32 = (1U * t31);
    t2 = (4U != t32);
    if (t2 == 1)
        goto LAB36;

LAB37:    t8 = (t0 + 4344);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t4, 4U);
    xsi_driver_first_trans_fast_port(t8);

LAB34:    goto LAB31;

LAB33:    xsi_set_current_line(122, ng0);
    t14 = (t0 + 6851);
    t17 = (t0 + 4152);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t22 = (t20 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t14, 4U);
    xsi_driver_first_trans_fast_port(t17);
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 6855);
    t4 = (t0 + 4216);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(124, ng0);
    t1 = (t0 + 6859);
    t4 = (t0 + 4280);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(125, ng0);
    t1 = (t0 + 6863);
    t4 = (t0 + 4344);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB34;

LAB36:    xsi_size_not_matching(4U, t32, 0);
    goto LAB37;

LAB38:    xsi_size_not_matching(4U, t32, 0);
    goto LAB39;

LAB40:    xsi_size_not_matching(4U, t32, 0);
    goto LAB41;

LAB42:    xsi_size_not_matching(4U, t32, 0);
    goto LAB43;

}


extern void work_a_0258940050_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0258940050_3212880686_p_0};
	xsi_register_didat("work_a_0258940050_3212880686", "isim/dryertest_isim_beh.exe.sim/work/a_0258940050_3212880686.didat");
	xsi_register_executes(pe);
}
