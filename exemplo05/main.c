#include <stdio.h>
#include <stdlib.h>

// 5.2. Alocação dinâmica: pp. 51-54

int main(void){
/*
    int *v;
    v = malloc(10*4);
    v = malloc(10*sizeof(int));
    v = (int *) malloc(10*sizeof(int));
    free (v);
    v = (int*) malloc(10*sizeof(int));

    if (v==NULL){
    printf("Memoria insuficiente.\n");
    exit(1); /* aborta o programa e retorna 1 para o sist. operacional
}
*/
    int i, n;
    float *v;
    float med, var;

    // leitura do número de valores
    // alocação dinâmica
    v = (float*) malloc(n*sizeof(float));
    if (v==NULL){
        printf("Memoria insuficiente.\n");
    return 1;
    }

    // leitura dos valores
    for (i = 0; i < n; i++){
        scanf("%f", &n, v[i]);
    med = media(n, v);
    var = variancia(n, v, med);
    printf("Media = %f \nVariancia = %f\n", med, var);
    // libera memória
    }
    free(v);
    return 0;
}
