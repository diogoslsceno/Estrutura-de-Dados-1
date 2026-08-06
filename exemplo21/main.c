#include <stdio.h>
#include <stdlib.h>

// 8.3 Matrizes dinamicas - Matriz representada por um vetor simples: pp. 82-83

int main(void){
    int m = 3, n = 4;
    float *mat;
    mat = (float*) malloc(m*n*sizeof(float));

    int i = 1, j = 2;
    mat[i*n+j] = 7.5f;

    free(mat);
    return 0;
}
