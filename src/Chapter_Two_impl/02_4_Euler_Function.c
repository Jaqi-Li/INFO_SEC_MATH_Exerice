/********************************************************************************
* @author: Li jiaqi
* @email: 547222867@qq.com
* @date: 2022/9/16 20:14
* @version: 1.0
* @description:
********************************************************************************/
#include "../../inc/Chapter_Two/02_4_Euler_Function.h"

int euler(int n) {
    int i;
    int result = n;

    /* remove all prime factors */
    for (i = 2; i <= sqrt(n); ++i){
        if(!(n % i)){
            result = result - result / i;
            while (!(n % i))
                n /= i;
        }
    }
    /* n is a prime */
    if (1 != n)
        result--;

    return result;
}

void testEuler(int n) {
    printf("euler(n) = %d", euler(n));
}

