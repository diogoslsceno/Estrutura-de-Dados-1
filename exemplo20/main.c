#include <stdio.h>
#include <stdlib.h>

// 8.2. Passagem de matrizes para funções + typedef Matrix4: pp. 81-82

void f1(float(*mat)[3]);
void f2(float mat[][3]);

typedef float Matrix4[4][4];

void f3(Matrix4 m);

void f1(float(*mat)[3]){
    (void) mat;
}

void f2(float mat[][3]){
    (void) mat;
}

void f3(Matrix4 m){
    (void) m;
}

int main(void){
    Matrix4 m;
    f3(m);
    return 0;
}
