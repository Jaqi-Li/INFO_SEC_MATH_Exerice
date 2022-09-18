/********************************************************************************
* @author: Li jiaqi
* @email: 547222867@qq.com
* @date: 2022/9/16 0:27
* @version: 1.0
* @description:
********************************************************************************/
#include "../../inc/Chapter_One/01_8_Prime_Factor_Decomposition.h"

int *getPrimeFactor(int n, int *returnSize){
    int * prime_factors = decomposeNto_PrimeFactor(n,returnSize);
    int * factors = (int *) malloc(sizeof(int) * 2*(*returnSize));
    int i,j,temp = 1;
    int originSize = *returnSize;
    *returnSize = 0;

    for(i = 0,j = 0; i < originSize;){
        if(j & 1){
            if (prime_factors[i] == prime_factors[i-1]){
                temp++;
                i++;
            } else{
                factors[j++] = temp;
                temp = 1;
            }
        } else{
            factors[j++] = prime_factors[i++];
        }
    }
    factors[j++] = temp;
    *returnSize = j;
    free(prime_factors);
    return factors;
}

void testGetPrimeFactor(int n) {
    int nums;
    int *factors = getPrimeFactor(n,&nums);
    int i;
    printf("%d =",n);
    for (i = 1; i < nums; i += 2){
        printf("%d^%d ",factors[i-1],factors[i]);
        if (i < nums - 1){
            printf("*");
        }
    }
}

