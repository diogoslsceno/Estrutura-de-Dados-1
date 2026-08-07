#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

// Interface da calculadora pós-fixada: pp. 123-125

struct pilha{
   int n;
   float vet[MAX];
};

typedef struct pilha Pilha;

Pilha* cria(void){
   Pilha* p = (Pilha*) malloc(sizeof(Pilha));
   p->n = 0;   // inicializa com zero elementos
   return p;
}

void push(Pilha* p, float v){
   if (p->n == MAX){   // capacidade esgotada
      printf("Capacidade da pilha estourou.\n");
      exit(1);         // aborta programa
   }
   // insere elemento na proxima posicao livre
   p->vet[p->n] = v;
   p->n++;
}

float pop(Pilha* p){
   float v;
   if (p->n == 0){
      printf("Pilha vazia.\n");
      exit(1); // aborta programa
   }
   // retira elemento do topo
   v = p->vet[p->n-1];
   p->n--;
   return v;
}

int vazia(Pilha* p){
   return (p->n == 0);
}

void libera(Pilha* p){
   free(p);
}


struct calc {
   char f[21];           // formato para impressao
   Pilha* p;             // pilha de operandos
};

typedef struct calc Calc;

Calc* cria_calc(char* formato){
  Calc* c = (Calc*) malloc(sizeof(Calc));
  strcpy(c->f,formato);
  c->p = cria();           // cria pilha vazia
  return c;
}

void operando(Calc* c, float v){
  // empilha operando
  push(c->p,v);

   // imprime topo da pilha
   printf(c->f,v);
}

void operador (Calc* c, char op){
  float v1, v2, v = 0.0f;

   // desempilha operandos
   if (vazia(c->p))
      v2 = 0.0;
   else
      v2 = pop(c->p);
   if (vazia(c->p))
      v1 = 0.0;
   else
      v1 = pop(c->p);

   // faz operacao
   switch (op) {
      case '+': v = v1+v2; break;
      case '-': v = v1-v2; break;
      case '*': v = v1*v2; break;
      case '/': v = v1/v2; break;
   }

   // empilha resultado
   push(c->p,v);

   // imprime topo da pilha
   printf(c->f,v);
}

void libera_calc (Calc* c){
   libera(c->p);
   free(c);
}

int main (void){
  char c;
  float v;
  Calc* calc;

  // cria calculadora com precisao de impressao de duas casas decimais
  calc = cria_calc("%.2f\n");
   do{
      // le proximo caractere nao branco
      scanf(" %c",&c);
      // verifica se e operador valido
      if(c=='+' || c=='-' || c=='*' || c=='/'){
          operador(calc,c);
      }
      // devolve caractere lido e tenta ler numero
      else{
          ungetc(c,stdin);
          if (scanf("%f",&v) == 1)
             operando(calc,v);
      }
   }while(c!='q');
   libera_calc(calc);
   return 0;
}
