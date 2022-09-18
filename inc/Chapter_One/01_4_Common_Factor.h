/********************************************************************************
* @author: Li jiaqi
* @email: 547222867@qq.com
* @date: 2022/9/16 0:23
* @version: 1.0
* @description:
********************************************************************************/

#ifndef INFO_SEC_MATH_EXERICE_01_4_COMMON_FACTOR_H
#define INFO_SEC_MATH_EXERICE_01_4_COMMON_FACTOR_H
#include "Chapter_One_utils.h"

/**
 * Find the common factor of two integers (theorem 1.3.4)
 * @param a             the first integer
 * @param b             the second integer
 * @param returnSize    numbers of common factors
 * @return
 */
int * Find_Common_Factor(int a, int b, int *returnSize);


/**
 * Find the greatest common factor of two integers
 * @param a     the first integer
 * @param b     the second integer
 * @return      (a,b)
 */
int Find_Greatest_Factor(int a, int b);

/**
 * test
 */
void testFind_Common_Factor(int a,int b);

#endif //INFO_SEC_MATH_EXERICE_01_4_COMMON_FACTOR_H
