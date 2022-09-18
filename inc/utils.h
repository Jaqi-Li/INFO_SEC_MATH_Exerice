/********************************************************************************
* @author: Li jiaqi
* @email: 547222867@qq.com
* @date: 2022/9/12 15:53
* @version: 1.0
* @description:
********************************************************************************/

#ifndef INFO_SEC_MATH_EXERICE_UTILS_H
#define INFO_SEC_MATH_EXERICE_UTILS_H


#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include <malloc.h>


/*
 * Judge whether a number is prime
 */
bool isPrime(int num);

int * decomposeNto_PrimeFactor(int n,int * returnSize);

/**
 * gets all factors of n    O(√n)
 * @param n
 * @param returnSize
 * @return
 */
int * decomposeNto_AllFactor(int n,int * returnSize);


#endif //INFO_SEC_MATH_EXERICE_UTILS_H
