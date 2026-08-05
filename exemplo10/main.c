#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

char* duplica (char* s)
{
   int n = strlen(s);
   char* d = (char*) malloc((n+1) * sizeof(char));
   strcpy(d, s);
   return d;
}

char* lelinha (void)
{
   char linha[121];
   scanf(" %120[^\n]", linha);
   return duplica(linha);
}

int lenomes (char** alunos)
{
   int i;
   int n;
   do {
      scanf("%d", &n);
   } while (n > MAX);

   for (i = 0; i < n; i++)
      alunos[i] = lelinha();
   return n;
}

void liberanomes (int n, char** alunos)
{
   int i;
   for (i = 0; i < n; i++)
      free(alunos[i]);
}

void imprimenomes (int n, char** alunos)
{
   int i;
   for (i = 0; i < n; i++)
      printf("%s\n", alunos[i]);
}

int main (void)
{
   char* alunos[MAX];
   int n = lenomes(alunos);
   imprimenomes(n, alunos);
   liberanomes(n, alunos);
   return 0;
}
