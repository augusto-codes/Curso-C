#include <stdio.h>
int cartaoAmarelo, cartaoVermelho;

int main(){
    printf("Digite o numero de cartao amarelo que o jogador tomou: ");
    scanf("%d", &cartaoAmarelo);

    if (cartaoAmarelo >= 2){
        cartaoVermelho = 1;
        printf("Jogador esta expulso!!");
    }else{
        printf("Esta tudo bem, jogador não foi expulso!!");
    }
    return 0;
}