/********************************************************************************
* @author: Li jiaqi
* @email: 547222867@qq.com
* @date: 2022/9/16 0:21
* @version: 1.0
* @description:
********************************************************************************/
#include "../../inc/Chapter_One/01_2_Ordinary_Division.h"

_Bool findPrimeBy_ordinary_division(int num) {

    int root = sqrt(num);
    int i;

    for (i = 2; i <= root; ++i){
        if (isPrime(i))
            if(!(num % i))
                return false;
    }

    return true;
}

void testFindPrimeBy_ordinary_division(int num) {
    if(findPrimeBy_ordinary_division(num))
        printf("%d is a prime",num);
    else
        printf("%d is not a prime",num);
}

