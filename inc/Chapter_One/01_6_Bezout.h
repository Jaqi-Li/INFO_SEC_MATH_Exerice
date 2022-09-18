/********************************************************************************
* @author: Li jiaqi
* @email: 547222867@qq.com
* @date: 2022/9/16 0:25
* @version: 1.0
* @description:
********************************************************************************/

#ifndef INFO_SEC_MATH_EXERICE_01_6_BEZOUT_H
#define INFO_SEC_MATH_EXERICE_01_6_BEZOUT_H
#include "Chapter_One_utils.h"

/**
 * Implementation of Bezout(theorem 1.3.7)  i.e: x*a + y*b = (a,b)
 * @param a
 * @param b
 * @param x
 * @param y
 * @return          remainder
 */
int bezout(int a, int b, int *x, int *y);

/* s*a + t*b = (a,b) */
void testBezout(int a, int b);

#endif //INFO_SEC_MATH_EXERICE_01_6_BEZOUT_H
