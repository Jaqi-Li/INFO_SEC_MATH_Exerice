#include <stdio.h>
#include <time.h>
#include <windows.h>
#include "inc/Chapter_Two/02_5_Modular_Repetition.h"

int main() {
    clock_t start, end;
    start = clock();

    testModular_repetition_square(501,13,667);

    end = clock();
    printf("\ntime spent£º%lf ms", ((double)(end - start)/CLOCKS_PER_SEC) * 1000.0);
    return 0;
}
