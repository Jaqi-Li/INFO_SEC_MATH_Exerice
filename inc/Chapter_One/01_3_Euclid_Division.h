/********************************************************************************
* @author: Li jiaqi
* @email: 547222867@qq.com
* @date: 2022/9/16 0:21
* @version: 1.0
* @description:
********************************************************************************/

#ifndef INFO_SEC_MATH_EXERICE_01_3_EUCLID_DIVISION_H
#define INFO_SEC_MATH_EXERICE_01_3_EUCLID_DIVISION_H

#include "../utils.h"

/*
 * implementation of Euclid Division (theorem 1.1.9)
 */
/* a = q * b + r */
void euclid_Division_Sub(int a, int b, int * quotient, int * remainder);


/* a = q * b + r */
void euclid_Division_Div(int a, int b, int * quotient, int * remainder);

/* a = q * b + r    return r */
int euclid_Division(int a, int b);



/**
 * judge whether A is divisible by a non-zero integer B
 * @param a
 * @param b
 * @return          true if  b | a
 */
bool A_Divisible_By_B(int a, int b);


/*
 * test
 */
void testEuclid_Division_Sub(int a, int b);

void testEuclid_Division_Div(int a, int b);

void testA_Divisible_By_B(int a, int b);
#endif //INFO_SEC_MATH_EXERICE_01_3_EUCLID_DIVISION_H
