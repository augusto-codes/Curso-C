/******************************************************************************

Você tem 5 jogadores. Para cada jogador, leia 3 notas de avaliação (float). Calcule a média de cada jogador. Use if/else para classificar:



Excelente: média >= 9

Bom: entre 7 e 9

Regular: entre 5 e 7

Ruim: abaixo de 5

*******************************************************************************/

#include <stdio.h>

void notaJogador (){

    for (int i = 0; i < 5; i++){
        float nota = 0;
        float valores = 0;
        float media = 0;
        
        printf("Esse é o jogador numero %d\n", i+1);
        for (int j = 0; j < 3; j++){
            printf("Digite a nota de numero %d", j+1);
            scanf("%f", &nota);
            valores = valores + nota;
        }
        printf("A media do jogador foi");
        media = valores / 3;
        if (media >= 9){
            printf("Excelente\n");
        }
        else if (media < 9 && media >= 7){
            printf("Bom\n");
        }
        else if (media < 7 && media >=5){
            printf("Regular\n");
        }
        else{
            printf("Ruim\n");
        }
        
    }
}

int main()
{
    notaJogador();
    return 0;
}