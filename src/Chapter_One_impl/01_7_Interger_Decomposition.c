/********************************************************************************
* @author: Li jiaqi
* @email: 547222867@qq.com
* @date: 2022/9/16 0:26
* @version: 1.0
* @description:
********************************************************************************/
#include "../../inc/Chapter_One/01_7_Interger_Decomposition.h"

_Bool decompositionNbyAB(long long int n, long long int a, long long int b,long long * factor1, long long * factor2) {
    if(!((a*a-b*b)%n)){
        if((a+b)%n && (a-b)%n){
            *factor1 = gcd01_7(n,a-b);
            *factor2 = gcd01_7(n,a+b);
            return true;
        } else
            return false;
    } else
        return false;
}

long long gcd01_7(long long int a, long long int b) {
    if (b){
        return gcd01_7(b,a%b);
    } else
        return a;
}

void testdecompositionNbyAB(long long int n, long long int a, long long int b) {
    long long factor1, factor2;
    if(decompositionNbyAB(n,a,b,&factor1,&factor2)){
        printf("%lld = (%lld) * (%lld)",n,factor1,factor2);
    } else
        printf("%lld can't be decomposed with a,b",n);
}

