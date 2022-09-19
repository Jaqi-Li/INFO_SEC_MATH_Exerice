/********************************************************************************
* @author: Li jiaqi
* @email: 547222867@qq.com
* @date: 2022/9/18 23:20
* @version: 1.0
* @description:
********************************************************************************/
#include "../../inc/Chapter_Two/Chapter_Two_Utils.h"

_Bool com_A_with_B_modelM(int a, int b, int m) {
    return (m % (a-b) == 0);
}

int modular_addition(int a, int b, int m) {
    if (a < m && b < m) return ((a+b)%m);
    else
        return (a % m + b % m);
}

int modular_subtraction(int a, int b, int m) {
    int result = a % m - b % m;
    return result < 0 ? result + m : result;
}

int modular_multiplication(int a, int k, int m) {
    int i;
    int result = 0;
    for (i = 0; i < k; i++){
        result = modular_addition(a,result,m);
    }
    return result;
}


int *decimal_to_binary(int decimal, int * returnSize) {
    int * binary = (int *)malloc(sizeof(int) * (1 + (int)(log(decimal)/ log(2))));
    int i = 0;
    *returnSize = 0;

    while (decimal > 0){
        binary[i++] = decimal & 1;
        decimal >>= 1;
    }
    *returnSize = i;

    return binary;
}


