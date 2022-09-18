/********************************************************************************
* @author: Li jiaqi
* @email: 547222867@qq.com
* @date: 2022/9/16 0:24
* @version: 1.0
* @description:
********************************************************************************/
#include "../../inc/Chapter_One/01_5_Interactive_Prime.h"

_Bool A_CoprimeWith_B(int a, int m) {

    int greatest_factor = gcd(a,m);
    if (1 == greatest_factor)
        return true;
    else
        return false;
}

void testA_CoprimeWith_B(int a, int m) {
    if (A_CoprimeWith_B(a,m))
        printf("%d is coprime with %d",a,m);
    else{
        printf("%d is not coprime with %d\n",a,m);
        int quotient, remainder;
        if (a<m){
            quotient = m / a;
            remainder = m % a;
        }
        else{
            quotient = a / m;
            remainder = a % m;
        }
        printf("%-2d = %2d * %2d + %2d",a,m,quotient,remainder);

    }

}

