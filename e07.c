#include <stdio.h>
int idade;
int main(){

    printf("Digite a idade do jogador: ");
    scanf("%d", &idade);

    if (idade <= 20){
        printf("Jogador pode ser inscrito no sub-20");
    }else{
        printf("Jogador deve subir ao profissional");
    }

    return 0;
}