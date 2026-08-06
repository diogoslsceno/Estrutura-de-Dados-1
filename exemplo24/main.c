#include <stdio.h>
#include "str.h"

// 9.1. Módulos e Compilação em Separado (str.h, str.c, main.c — módulo de strings): pp. 90-91

int main (void) {
    char str[101], str1[51], str2[51];
    printf("Entre com uma sequencia de caracteres: ");
    scanf(" %50[^\n]", str1);
    printf("Entre com outra sequencia de caracteres: ");
    scanf(" %50[^\n]", str2);
    copia(str, str1);
    concatena(str, str2);
    printf("Comprimento da concatenacao: %d\n", comprimento(str));
    return 0;
}
