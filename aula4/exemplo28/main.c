#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

// 10.5. Listas duplamente encadeadas:  pp. 114-117

struct lista2{
   int info;
   struct lista2* ant;
   struct lista2* prox;
};

typedef struct lista2 Lista2;

// insercao no inicio
Lista2* insere (Lista2* l, int v)
{
   Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
   novo->info = v;
   novo->prox = l;
   novo->ant = NULL;
   // verifica se lista nao esta vazia
   if (l != NULL)
      l->ant = novo;
   return novo;
}

// funcao busca: busca um elemento na lista
Lista2* busca (Lista2* l, int v){
   Lista2* p;
   for (p=l; p!=NULL; p=p->prox)
      if (p->info == v)
         return p;
   return NULL;       // nao achou o elemento
}

// funcao retira: retira elemento da lista
Lista2* retira (Lista2* l, int v){
   Lista2* p = busca(l,v);

   if (p == NULL)
      return l;   // nao achou o elemento: retorna lista inalterada

   // retira elemento do encadeamento
   if (l == p)
      l = p->prox;
   else
      p->ant->prox = p->prox;

   if (p->prox != NULL)
      p->prox->ant = p->ant;

   free(p);

   return l;
}

// Meu teste para fazer ela funcionar
int main(void){
    Lista2* l = NULL;

    l = insere(l, 10);
    l = insere(l, 20);
    l = insere(l, 30);

    // Mostra os elementos da lista
    Lista2* p;
    printf("Elementos na lista:\n");
    for (p = l; p != NULL; p = p->prox){
        printf("%d \n", p->info);
    }
    return 0;
}

