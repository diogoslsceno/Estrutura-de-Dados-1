#include <stdio.h>
#include <stdlib.h>

// 7.5. Tipo uniao: p. 76

union exemplo{
    int i;
    char c;
};

int main(void){
    union exemplo v;
    v.i = 10;
    v.c = 'x';
    return 0;
}
