#include <stdio.h>
#include <stdlib.h>
// #include "pilha.h" : Os structs ja estao abaixo
#define MAX 50

// 11.2. Implementação de pilha com vetor: pp. 119-122

typedef struct pilha Pilha;

Pilha* cria (void);
void push (Pilha* p, float v);
float pop (Pilha* p);
int vazia (Pilha* p);
void libera (Pilha* p);
void imprime (Pilha* p);

struct pilha{
    int n;
    float vet[MAX];
};

Pilha* cria(void){
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->n = 0;
    return p;
}

void push(Pilha* p, float v){
    if(p->n == MAX){
        printf("Capacidade da pilha estourou.\n");
        exit(1);
    }
    p->vet[p->n] = v;
    p->n++;
}

float pop(Pilha* p){
    float v;
    if(vazia(p)){
        printf("Pilha vazia.\n");
        exit(1);
    }
    v = p->vet[p->n-1];
    p->n--;
    return v;
}

int vazia(Pilha* p){
    return(p->n == 0);
}

void libera(Pilha* p){
    free(p);
}

void imprime(Pilha* p){
    int i;
    for (i=p->n-1; i>=0; i--)
        printf("%f\n", p->vet[i]);
}

// Minha formar de rodar o programa
int main(void){
    Pilha* p = cria();

    push(p, 10.5);
    push(p, 20.0);

    printf("Elementos na pilha:\n");
    imprime(p);

    pop(p);

    printf("Apos o pop:\n");
    imprime(p);

    libera(p);
    return 0;
}
