#include <stdio.h>
#include <stdlib.h>

// 7.2 Definição de "novos" tipos: pp. 71-72

typedef float Real;
typedef unsigned char UChar;
typedef int* PInt;
typedef float Vetor[4];

typedef struct ponto {
    float x;
    float y;
} Ponto, *PPonto;

int main (void)
{
    Vetor v;
    v[0] = 3;

    return 0;
}
