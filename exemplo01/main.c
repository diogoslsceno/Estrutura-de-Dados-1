#include <stdio.h>

// Primeira aula

int main(void){
    int a;
    int *p;
    p = &a;
    *p = 2;
    printf("%d\n", a);
    return 0;
}
