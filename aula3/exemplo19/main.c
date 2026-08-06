#include <stdio.h>
#include <stdlib.h>

// 8.2 Vetores bidimencionais - Declaracao e inicializacao de matriz estatica: pp. 80-81

int main(void){
    float mat[2][3] = {{5.0, 10.0, 15.0},
                        {20.0, 25.0, 30.0},
                        {35.0, 40.0, 45.0},
                        {50.0, 55.0, 60.0}};

    float elemento = mat[0][0];

    /*
    // outras formas de iniciar:
    float mat[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    float mat[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    float mat[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    */

    (void) elemento;
    return 0;
}
