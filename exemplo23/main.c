#include <stdio.h>
#include <stdlib.h>

// 8.4. Representação de matrizes - matriz com vetor simples p. 84-86

int main(){

}

struct matriz{
    int lin;
    int col;
    float* v;
};

typedef struct matriz Matriz;

Matriz* cria (int m, int n){
    Matriz* mat = (Matriz*) malloc(sizeof(Matriz));
    mat->lin = m;
    mat->col = n;
    mat->v = (float*) malloc(m*n*sizeof(float));
    return mat;
}

void libera (Matriz* mat){
    free(mat->v);
    free(mat);
}

float acessa (Matriz* mat, int i, int j){
    int k;    /* indice do elemento no vetor */

    if (i<0 || i>=mat->lin || j<0 || j>=mat->col){
        printf("Acesso invalido!\n");
        exit(1);
    }
    k = i*mat->col + j;
    return mat->v[k];
}

void atribui (Matriz* mat, int i, int j, float v){
    int k;    /* indice do elemento no vetor */

    if (i<0 || i>=mat->lin || j<0 || j>=mat->col){
        printf("Atribuicao invalida!\n");
        exit(1);
    }
    k = i*mat->col + j;
    mat->v[k] = v;
}



// matriz com vetor de ponteiros

/*
int main(){

}

struct matriz{
    int lin;
    int col;
    float** v;
};

typedef struct matriz Matriz;

Matriz* cria (int m, int n){
    int i;
    Matriz* mat = (Matriz*) malloc(sizeof(Matriz));
    mat->lin = m;
    mat->col = n;
    mat->v = (float**) malloc(m*sizeof(float*));
    for (i=0; i<m; i++)
        mat->v[i] = (float*) malloc(n*sizeof(float));
    return mat;
}

void libera (Matriz* mat){
    int i;
    for (i=0; i<mat->lin; i++)
        free(mat->v[i]);
    free(mat->v);
    free(mat);
}

float acessa (Matriz* mat, int i, int j){
    if (i<0 || i>=mat->lin || j<0 || j>=mat->col){
        printf("Acesso invalido!\n");
        exit(1);
    }
    return mat->v[i][j];
}

void atribui (Matriz* mat, int i, int j, float v){
    if (i<0 || i>=mat->lin || j<0 || j>=mat->col){
        printf("Atribuicao invalida!\n");
        exit(1);
    }
    mat->v[i][j] = v;
}

*/
