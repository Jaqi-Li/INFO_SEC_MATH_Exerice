/********************************************************************************
* @author: Li jiaqi
* @email: 547222867@qq.com
* @date: 2022/9/12 15:23
* @version: 1.0
* @description:
********************************************************************************/
#include "../../inc/Chapter_One/01_1_Eratoshenes.h"

int *findPrimeByEratoshenes(int num, int * returnSize) {

    bool * nums = (_Bool *)malloc(sizeof(int) * (num + 1));
    int root = sqrt(num);
    int i, j;
    *returnSize = num;

    for (i = 1; i <= num; ++i)
        nums[i] = remain;

    for (i = 2; i <= root; ++i){
        if (isPrime(i)){
            for(j = 2; i * j <= num; ++j){
                if(nums[i * j] == delete)
                    continue;
                nums[i * j] = delete;
                (*returnSize)--;
            }
        }
    }

    int * prime =(int *) malloc(sizeof(int) * (*returnSize));

    for(i = 0, j = 1; i < *returnSize && j <= num;++j){
        if (remain == nums[j]){
            prime[i] = j;
            i++;
        }
    }

    free(nums);
    return prime;
}

void testFindPrimeByEratoshenes(int num) {
    int returnSize;
    int * prime = findPrimeByEratoshenes(num,&returnSize);
    int i;

    for (i = 0; i < returnSize; i++)
        printf("%-6d",prime[i]);
}
