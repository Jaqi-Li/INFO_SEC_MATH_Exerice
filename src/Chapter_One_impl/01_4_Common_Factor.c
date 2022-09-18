/********************************************************************************
* @author: Li jiaqi
* @email: 547222867@qq.com
* @date: 2022/9/16 0:23
* @version: 1.0
* @description:
********************************************************************************/
#include "../../inc/Chapter_One/01_4_Common_Factor.h"

int Find_Greatest_Factor(int a, int b) {
    if (b){
        return Find_Greatest_Factor(b,a % b);
    }
    else
        return a;
}

int *Find_Common_Factor(int a, int b, int *returnSize) {
    int greatestFactor = Find_Greatest_Factor(a,b);
    int i,j;
    int * common_factor = (int *) malloc(sizeof(int) * greatestFactor);
    *returnSize = 0;
    for (i = 1,j = 0; i <= greatestFactor; ++i){
        if (!(a%i) && !(b%i))
            common_factor[j++] = i;
    }
    *returnSize = j;
    return common_factor;
}

void testFind_Common_Factor(int a, int b) {
    int nums;
    int * result = Find_Common_Factor(a,b,&nums);
    int i;
    for (i = 0; i < nums; ++i)
        printf("%-6d",result[i]);
}

