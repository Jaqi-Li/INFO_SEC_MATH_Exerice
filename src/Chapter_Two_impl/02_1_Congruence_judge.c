/********************************************************************************
* @author: Li jiaqi
* @email: 547222867@qq.com
* @date: 2022/9/16 20:10
* @version: 1.0
* @description:
********************************************************************************/
#include "../../inc/Chapter_Two/02_1_Congruence_judge.h"

_Bool congruence_a_b_modM(int a, int b, int m) {
    return com_A_with_B_modelM(a,b,m);
}

void testCongruence_a_b_modM(int a, int b, int m) {
    if (congruence_a_b_modM(a,b,m))
        printf("%d = %d (mod %d)",a,b,m);
    else
        printf("%d != %d (mod %d)",a,b,m);
}

