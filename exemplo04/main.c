#include <stdio.h>
#include <math.h>
//Calculo da media
//Crie duas funcoes.
//Primeira: Para popular o vetor
//Segunda: Para calcular a media
//Apresente o resultado da media com um
//printf no programa principal.
//Terceira: Faca a funcao para calcular a variancia
//Exercecio: Calcule e apresente desvio padrao.
void populaVetor(float *v, int tam){
    int i;
    for(i = 0; i < tam; i++){
        printf("Nota %d: ", i+1);
        scanf("%f", &v[i]);
    }
}

float calculaVariancia(float *v, int tam, float media){
    int i;
    float soma = 0, variancia;

    for(i = 0; i < tam; i++){
        soma += (v[i] - media) * (v[i] - media);
    }
    variancia = soma / tam;
    return variancia;
}

float calculaMedia(float *v, int tam){
    int i;
    float media;
    float soma = 0;
    for(i = 0; i < tam; i++){
        soma += v[i];
    }
    media = soma / tam;
    return media;
}

int main(){
    float n[4];
    float media, variancia, desvPad;
    int i, tam = 4;

    //Popular o meu vetor n
    populaVetor(n, tam);

    //Calcular a média
    media = calculaMedia(n, tam);

    printf("Media = %.2f\n", media);

    variancia = calculaVariancia(n, tam, media);

    printf("Variancia = %.2f\n", variancia);

    desvPad = sqrt(variancia);

    printf("Desvio padrao = %.2f\n", desvPad);
}
