/********************************************************************************
* @author: Li jiaqi
* @email: 547222867@qq.com
* @date: 2022/9/12 15:23
* @version: 1.0
* @description:
********************************************************************************/

#ifndef INFO_SEC_MATH_EXERICE_01_1_ERATOSHENES_H
#define INFO_SEC_MATH_EXERICE_01_1_ERATOSHENES_H

#include "../utils.h"

#define delete false
#define remain true
/**
 * Eratoshenes(厄拉托塞师 筛法)
 * @param[in] num           范围数
 * @param[out] returnSize   素数个数
 * @return                  所有的素数
 */
int * findPrimeByEratoshenes(int num, int *returnSize);

/*
 * test
 */
void testFindPrimeByEratoshenes(int num);

#endif //INFO_SEC_MATH_EXERICE_01_1_ERATOSHENES_H
