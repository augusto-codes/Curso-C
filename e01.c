#include <stdio.h>

char nome[15];
int idade, gols;
int main(){
    
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seus numeros de gols: ");
    scanf("%d", &gols);

    printf("O jogador %s, tem %d anos e ja fez %d gols ao longo de sua carreira!!", nome, idade, gols);
    return 0;
}