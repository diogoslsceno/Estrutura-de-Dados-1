#include <stdio.h>
#include <stdlib.h>
#define N 10

// 8.1. Alocação estática versus dinâmica: p. 79

int main(void){

    int v[N];

    int n = N;
    int* vd;
    vd = (int*) malloc(n * sizeof(int));

    int m = 20;
    vd = (int*) realloc(vd, m * sizeof(int));

    free(vd);
    (void) v;
    return 0;
}
