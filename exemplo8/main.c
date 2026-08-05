#include <stdio.h>
#include <stdlib.h>

int main(){
void imprime_rec (char* s){
    if(s[0] != '\0'){
        printf("%c", s[0]);
        imprime_rec(&s[1]);
        }
    }

int comprimento_rec(char* s){
    if(s[0] == '\0')
        return 0;
    else
        return 1 + comprimento_rec(&s[1]);
    }

void copia_rec(char* dest, char* orig){
    if(orig[0] == '\0')
        dest[0] = '\0';
    else{
        dest[0] = orig[0];
        copia_rec(&dest[1], &orig[1]);
        }
    }

void copia_rec_2(char* dest, char* orig){
    dest[0] = orig[0];
    if(orig[0] != '\0')
        copia_rec_2(&dest[1], &orig[1]);
    }
}
