/********************************************************************************
* @author: Li jiaqi
* @email: 547222867@qq.com
* @date: 2022/9/16 23:04
* @version: 1.0
* @description:
********************************************************************************/
#include "../../inc/Chapter_One/01_3_Euclid_Division_Extence.h"

int euclid_Division_Extend(int a, int b) {

    if (b){
        return euclid_Division_Extend(b, euclid_Division(a,b));
//        return euclid_Division_Extend(b,a%b);
    } else{
        return a;
    }
}

void testEuclid_Division_Extend(int a, int b) {

    int remainder = euclid_Division_Extend(a,b);
    printf("(%d,%d) = %d",a,b,remainder);
}

