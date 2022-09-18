/********************************************************************************
* @author: Li jiaqi
* @email: 547222867@qq.com
* @date: 2022/9/16 0:25
* @version: 1.0
* @description:
********************************************************************************/
#include "../../inc/Chapter_One/01_6_Bezout.h"

int bezout(int a, int b, int *x, int *y) {

    if (!b){
        *x = 1;
        *y = 0;
        return a;
    } else{
        int r = bezout(b, a%b,x,y);
        int temp;
        temp = *y;
        *y = *x - a/b *(*y);
        *x = temp;
        return r;
    }
}

void testBezout(int a, int b) {
    int x, y, r;
    r = bezout(a,b,&x,&y);

    printf("(%d) * (%d) + (%d) * (%d) = (%d,%d) = %d",x,a,y,b,a,b,r);

}

