/********************************************************************************
* @author: Li jiaqi
* @email: 547222867@qq.com
* @date: 2022/9/16 20:13
* @version: 1.0
* @description:
********************************************************************************/

#ifndef INFO_SEC_MATH_EXERICE_02_3_CONGRUENCE_RESIDUE_OPERATION_H
#define INFO_SEC_MATH_EXERICE_02_3_CONGRUENCE_RESIDUE_OPERATION_H
#include "Chapter_Two_Utils.h"
/*
 * Addition and multiplication of the residue class set of module m
 */
int residue_addition(int a, int b, int m);

int residue_multiplication(int a, int k, int m);

void testResidue_addition(int a, int b, int m);

void testResidue_multiplication(int a, int k, int m);
#endif //INFO_SEC_MATH_EXERICE_02_3_CONGRUENCE_RESIDUE_OPERATION_H
