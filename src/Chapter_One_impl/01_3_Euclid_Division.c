/********************************************************************************
* @author: Li jiaqi
* @email: 547222867@qq.com
* @date: 2022/9/16 0:22
* @version: 1.0
* @description:
********************************************************************************/
#include "../../inc/Chapter_One/01_3_Euclid_Division.h"

void euclid_Division_Sub(int a, int b, int *quotient, int *remainder) {
    *quotient = 0;
    *remainder = a;

    if ((a ^ b) < 0){               /* a b 异号 */
        while (abs(*remainder) >= abs(b) || *remainder < 0) {
            (*quotient)--;
            a += b;
            (*remainder) = a;
        }
        return;
    }
    else{
        while (abs(*remainder) >= abs(b) || *remainder < 0){
            (*quotient)++;
            a -= b;
            (*remainder) = a;
        }
        return;
    }
}

int euclid_Division(int a, int b) {
    int remainder = a;

    if ((a ^ b) < 0){               /* a b 异号 */
        while (abs(remainder) >= abs(b) || remainder < 0) {
            a += b;
            remainder = a;
        }
    }
    else{
        while (abs(remainder) >= abs(b) || remainder < 0){
            a -= b;
            remainder = a;
        }
    }
    return remainder;
}


void euclid_Division_Div(int a, int b, int *quotient, int *remainder) {
    *quotient = a/b;
    *remainder = a%b;
}

_Bool A_Divisible_By_B(int a, int b) {

    int quotient, remainder;
    euclid_Division_Sub(a,b,&quotient,&remainder);
    return remainder == 0;
}

void testEuclid_Division_Sub(int a, int b) {
    int quotient, remainder;
    euclid_Division_Sub(a,b,&quotient,&remainder);
    printf("%-2d = %2d * %2d + %2d",a,b,quotient,remainder);
}

void testEuclid_Division_Div(int a, int b) {
    int quotient, remainder;
    euclid_Division_Div(a,b,&quotient,&remainder);
    printf("%-2d = %2d * %2d + %2d",a,b,quotient,remainder);

}

void testA_Divisible_By_B(int a, int b) {
    if (A_Divisible_By_B(a,b))
        printf("%d | %d",b,a);
    else
        printf("%d not | %d",b,a);
}



