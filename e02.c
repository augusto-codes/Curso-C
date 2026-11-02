#include <stdio.h>
float media, gols, partidas;

int main(){
    printf("Digite sua quantidade de gols: ");
    scanf("%d", &gols);
    printf("Digite sua quantidade de partidas: ");
    scanf("%d", &partidas);

    media = gols / partidas;
    printf("Sua media de gols foi de %.2f gols por partida", media);

    return 0;
}