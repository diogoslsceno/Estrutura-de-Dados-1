#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Exemplos de funções que manipulam cadeias de caracteres: pp. 60-62

int comprimento(char* s);
void concatena(char* dest, char* orig);
void copia(char* dest, char* orig);
void imprime(char* s);
char* duplica (char* s);

int main(void){
    int tam;
    char cidade[] = "Rio de Janeiro";
    tam = comprimento(cidade);
    printf("A string \"%s\" tem %d caracteres\n", cidade, tam);
    return 0;
}

void imprime (char* s){
    int i;
    for(i = 0; s[i] != '\0'; i++)
        printf("%c", s[i]);
    printf("\n");
}
// printf("%s\n", s);

int comprimento(char* s){
    int i;
    int n = 0; //contador
    for(i = 0; s[i] != '\0'; i++)
        n++;
    return n;
}

void copia(char* dest, char* orig){
    int i;
    for(i = 0; orig[i] != '\0'; i++)
        dest[i] = orig[i];
    //fecha a cadeia copiada
    dest[i] = '\0';
}

void concatena(char* dest, char* orig){
    int i = 0; // indice usado na cadeia destino,incializado com zeo
    int j;     // indice usado na cadeia origem
    // acha elementos da origem para o final do destino
    i = 0;
    while(dest[i] != '\0') // Corrigido: 's[i]' mudou para 'dest[i]'
        i++;
    // copia elementos da origem para o final do destino
    for(j = 0; orig[j] != '\0'; j++){ // Corrigido: vírgula substituída por ponto e vírgula
        dest[i] = orig[j];
        i++;
    }
    // fecha cadeia destino
    dest[i] = '\0';

char* duplica(char* s){
    int n = strlen(s);
    char* d = (char*) malloc((n + 1)*sizeof(char));
    strcpy(d, s);
    return d;
    }
}
