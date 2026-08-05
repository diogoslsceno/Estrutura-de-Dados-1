#include <stdio.h>
#include <stdlib.h>

// 7.1. O tipo estrutura

struct ponto{
    float x;
    float y;
};

int main(void){

    struct ponto p;

    printf("Digite as coordenadas do ponto(x y)" );
    scanf("%f %f", &p.x, &p.y);
    printf("O ponto tornecido foi: (%.2f, %.2f)\n", p.x, p.y);
    return 0;

}
