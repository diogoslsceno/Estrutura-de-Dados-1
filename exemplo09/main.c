#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constante cadeia de caracteres*

int main(void){
    /*
    char cidade[4];
    strcpy(cidade, "Rio");
    printf("%s \n", cidade);
    return 0;
    */

    char *cidade;
    cidade = "Rio"; // declara um ponteiro para char
    printf("%s \n", cidade);
    return 0;
}
