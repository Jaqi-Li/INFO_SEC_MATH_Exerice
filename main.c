#include <stdio.h>
#include <time.h>
#include <windows.h>
#include "inc/Chapter_One/01_8_Prime_Factor_Decomposition.h"
#include "inc/Chapter_One/Chapter_One_utils.h"

int main() {
    clock_t start, end;
    start = clock();



    end = clock();
    printf("\ntime spent£º%lf ms", ((double)(end - start)/CLOCKS_PER_SEC) * 1000.0);
    return 0;
}
