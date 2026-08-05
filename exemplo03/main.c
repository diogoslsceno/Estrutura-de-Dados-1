#include <stdio.h>
/*
void troca (int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(void){
    int a = 5, b = 7;
    troca(a, b);
    printf("%d %d \n", a, b);
    return 0;
}
*/

void troca(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a = 5, b =7;

    troca(&a,&b);

    printf(" %d e %d \n", a, b);
}
