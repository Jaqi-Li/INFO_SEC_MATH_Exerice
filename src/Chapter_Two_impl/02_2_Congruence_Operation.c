/********************************************************************************
* @author: Li jiaqi
* @email: 547222867@qq.com
* @date: 2022/9/16 20:11
* @version: 1.0
* @description:
********************************************************************************/
#include "../../inc/Chapter_Two/02_2_Congruence_Operation.h"

int addition(int a, int b, int m) {
    return modular_addition(a,b,m);
}

int multiplication(int a, int k, int m) {
    int i;
    int result = 0;
    for (i = 0; i < k; i++){
        result = addition(a,result,m);
    }
    return result;
}

void testAddition(int a, int b, int m) {
    printf("%d + %d (mod %d) = %d",a,b,m, addition(a,b,m));
}

void testMultiplication(int a, int k, int m) {
    printf("%d * %d (mod %d) = %d",a,k,m, multiplication(a,k,m));

}

