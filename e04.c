#include <stdio.h>
int vitorias, empates, derrotas, pontosVitorias, somaPontos;

int main(){
    printf("Digite o seu numero de vitorias: ");
    scanf("%d", &vitorias);
    printf("Digite seu numero de empates: ");
    scanf("%d", &empates);
    printf("Digite seu numero de derrotas: ");
    scanf("%d", &derrotas);

    pontosVitorias = vitorias * 3;
    somaPontos = pontosVitorias + empates;
    printf("Seu time jogou %d partidas e fez %d pontos", (vitorias+empates+derrotas), somaPontos);

    return 0;
}