/********************************************************************************
* @author: Li jiaqi
* @email: 547222867@qq.com
* @date: 2022/9/16 0:26
* @version: 1.0
* @description:
********************************************************************************/

#ifndef INFO_SEC_MATH_EXERICE_01_7_INTERGER_DECOMPOSITION_H
#define INFO_SEC_MATH_EXERICE_01_7_INTERGER_DECOMPOSITION_H
#include "Chapter_One_utils.h"

/*
 * Integer decomposition (theorem 1.5.1)
 * Satisfy:     n|a^2  - b^2    n not| a-b      n not| a+b
 */
bool decompositionNbyAB(long long n,long long a,long long b,long long * factor1, long long * factor2);

/**
 * get greatest factor of a and b
 * @param a
 * @param b
 * @return
 */
long long gcd01_7(long long a,long long b);

void testdecompositionNbyAB(long long n,long long a,long long b);

#endif //INFO_SEC_MATH_EXERICE_01_7_INTERGER_DECOMPOSITION_H
