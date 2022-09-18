/********************************************************************************
* @author: Li jiaqi
* @email: 547222867@qq.com
* @date: 2022/9/12 15:53
* @version: 1.0
* @description:
********************************************************************************/
#include "../inc/Chapter_One/Chapter_One_utils.h"

_Bool isPrime(int num) {

    if (0 >= num) return false;

    if (1 == num) return true;

    int root = sqrt(num);
    int i;

    for (i = 2; i <= root; ++i){
        if (!(num % i))
            return false;
    }

    return true;
}

int *decomposeNto_PrimeFactor(int n, int *returnSize) {
    int * factors = (int *) malloc(sizeof(int) * sqrt(n));
    int i = 2;
    *returnSize = 0;
    while (1 != n){
        while (!(n % i)){
            n /= i;
            factors[(*returnSize)++] = i;
        }
        i++;
    }

    return factors;
}

int *decomposeNto_AllFactor(int n, int *returnSize) {
    int i;
    int *factors = (int *) malloc(sizeof(int) * n);
    *returnSize = 0;
    for (i = 1; i <= sqrt(n); ++i){
        if (!(n % i)){
            factors[(*returnSize)++] = i;
            factors[(*returnSize)++] = n / i;
        }
    }
    return factors;
}

int gcd(int a, int b) {
    if(b){
        return gcd(b,a%b);
    }
    else
        return a;
}

