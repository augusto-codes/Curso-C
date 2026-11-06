/*Escreva um programa que exiba um triângulo numérico com N linhas, onde cada linha tem os números de 1 até a posição atual (N).*/

#include <stdio.h>

int n;

int main(){

    printf("Digite o numero que dara tamanho a piramede: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}