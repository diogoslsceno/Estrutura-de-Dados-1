#include <stdio.h>
#include <stdlib.h>

// Matriz representada por um vetor de ponteiros

int main(void){
    int m = 3, n = 4;
    int i;
    float **mat;

    mat = (float**) malloc(m*sizeof(float));
    for(i = 0; i < m; i++)
        mat[i] = (float*) malloc(n*sizeof(float));

    mat[1][2] = 7.5f;

    for(i = 0; i < m; i++)
        free(mat[i]);
    free(mat);
    return 0;
}
