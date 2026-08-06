#include <stdio.h>

// Primeira aula

int main(void){

    int a, b, *p;
    a = 2;
    *p = 3;
    b = a + (*p);
    printf("%d \n", b);
    return 0;
}
