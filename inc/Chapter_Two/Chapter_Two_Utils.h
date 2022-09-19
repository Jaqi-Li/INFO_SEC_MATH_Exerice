/********************************************************************************
* @author: Li jiaqi
* @email: 547222867@qq.com
* @date: 2022/9/18 23:19
* @version: 1.0
* @description:
********************************************************************************/

#ifndef INFO_SEC_MATH_EXERICE_CHAPTER_TWO_UTILS_H
#define INFO_SEC_MATH_EXERICE_CHAPTER_TWO_UTILS_H

#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include <malloc.h>
/**
 * compare a and b model m
 * @param a
 * @param b
 * @param m
 * @return      1 if (a = b(mod m)) else 0
 */
bool com_A_with_B_modelM(int a, int b, int m);

/**
 * calculate    a + b (mod m)
 * @param a
 * @param b
 * @param m
 * @return
 */
int modular_addition(int a, int b, int m);

int modular_multiplication(int a,int k, int m);

/**
 * calculate    a - b (mod m)
 * @param a
 * @param b
 * @param m
 * @return
 */
int modular_subtraction(int a, int b, int m);

int * decimal_to_binary(int decimal, int * returnSize);
#endif //INFO_SEC_MATH_EXERICE_CHAPTER_TWO_UTILS_H
