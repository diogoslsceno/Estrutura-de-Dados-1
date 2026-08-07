#include <stdio.h>
#include <stdlib.h>
// #include "pilha.h"

// Implementação com lista encadeada: pp. 120-122

typedef struct pilha Pilha;

Pilha* cria (void);
void push (Pilha* p, float v);
float pop (Pilha* p);
int vazia (Pilha* p);
void libera (Pilha* p);
void imprime (Pilha* p);

struct no{
   float info;
   struct no* prox;
};

typedef struct no No;

struct pilha{
   No* prim;
};

Pilha* cria(void){
   Pilha* p = (Pilha*) malloc(sizeof(Pilha));
   p->prim = NULL;
   return p;
}

// funcao auxiliar: insere no inicio
No* ins_ini(No* l, float v){
   No* p = (No*) malloc(sizeof(No));
   p->info = v;
   p->prox = l;
   return p;
}

// funcao auxiliar: retira do inicio
No* ret_ini (No* l){
   No* p = l->prox;
   free(l);
   return p;
}

void push(Pilha* p, float v){
   p->prim = ins_ini(p->prim,v);
}

int vazia(Pilha* p){
   return (p->prim==NULL);
}

float pop(Pilha* p){
   float v;
   if (vazia(p)) {
      printf("Pilha vazia.\n");
      exit(1);         /* aborta programa */
   }
   v = p->prim->info;
   p->prim = ret_ini(p->prim);
   return v;
}

void libera(Pilha* p){
   No* q = p->prim;
   while (q!=NULL) {
      No* t = q->prox;
      free(q);
      q = t;
   }
   free(p);
}

// imprime: versao com lista
void imprime(Pilha* p){
   No* q;
   for (q=p->prim; q!=NULL; q=q->prox)
      printf("%f\n",q->info);
}

// Para rpdar o programa
int main(void){
    Pilha* p = cria();

    push(p, 10.5f);
    push(p, 20.0f);

    printf("Elementos na pilha:\n");
    imprime(p);

    pop(p);

    libera(p);
    return 0;

}
