#include <stdio.h>
#include <stdlib.h>

// 10.4. Listas circulares: pp 113-114

// a = ret_area((Retangulo*)p->info);

#include <stdio.h>

struct lista{
   int info;
   struct lista* prox;
};

typedef struct lista Lista;

void imprime_circular (Lista* l)
{
   Lista* p = l;        // faz p apontar para o no inicial
   // testa se lista nao e vazia
   if (p){
      // percorre os elementos ate alcancar novamente o inicio
      do{
         printf("%d\n", p->info);   // imprime informacao do no
         p = p->prox;               // avanca para o proximo no
      } while (p != l);
   }
}

// Para ver o codigo rodando
int main(void){
    Lista* p1 = (Lista*) malloc(sizeof(Lista));
    Lista* p2 = (Lista*) malloc(sizeof(Lista));
    Lista* p3 = (Lista*) malloc(sizeof(Lista));

    p1->info = 10;
    p1->prox = p2;

    p2->info = 20;
    p2->prox = p3;

    p3->info = 30;
    p3->prox = p1; // Fecha o circulo

    imprime_circular(p1);

    // Libera a memoria
    free(p1);
    free(p2);
    free(p3);

    return 0;
}
