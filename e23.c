/*Um jogador precisa coletar moedas em um jogo. A cada rodada, ele coleta uma quantidade entre 1 e 10 moedas. O jogo só termina quando o jogador acumula pelo menos 100 moedas. Escreva um programa em C que solicite ao usuário, repetidamente, a quantidade de moedas coletadas por rodada, até que o total acumulado atinja ou ultrapasse 100 moedas. Ao final, exiba quantas rodadas foram necessárias para atingir a meta.*/

#include <stdio.h>

int valor, contador, total;

int main (){
    valor = 0;
    total = contador = 0;

    while (total < 100)
    {
        contador++;
        printf("Digite a quantidade da rodada %d: ", contador);
        scanf("%d", &valor);
        total = valor + total;
    }
    
    printf("Voce demorou %d rodadas e acumulou %d pontos", contador, total);


    return 0;
}