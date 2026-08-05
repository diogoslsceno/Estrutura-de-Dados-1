#include <stdio.h>
#include <stdlib.h>
#define N 10

// Alocacao estatica versus dinamica

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
