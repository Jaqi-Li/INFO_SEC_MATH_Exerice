/********************************************************************************
* @author: Li jiaqi
* @email: 547222867@qq.com
* @date: 2022/9/16 20:14
* @version: 1.0
* @description:
********************************************************************************/
#include "../../inc/Chapter_Two/02_5_Modular_Repetition.h"

int modular_repetition_square(int a, int b, int m) {

    int binary_digits;
    int * binary_of_b = decimal_to_binary(b,&binary_digits);
    int i, tempA, tempB;


    tempA = 1;
    tempB = a;
    for (i = 0; i < binary_digits - 1; ++i){
        if (binary_of_b[i]){
            tempA = modular_multiplication(tempA,tempB,m);
        }
        tempB = modular_multiplication(tempB,tempB,m);
    }
    if (binary_of_b[i])
        tempA = modular_multiplication(tempA,tempB,m);

    return tempA;
}

void testModular_repetition_square(int a, int b, int m) {
    printf("%d ^ %d = %d (mod %d)",a,b, modular_repetition_square(a,b,m),m);
}

