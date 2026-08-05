#include <stdio.h>
#include <stdlib.h>

// Passagem de matrizes para funcoes + typedef Matrix4

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
