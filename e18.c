/*Crie um programa que imprima um triângulo invertido de números.*/
#include <stdio.h>

int n;

int main(){

    printf("Digite o numero para o tamanho da piramede: ");
    scanf("%d", &n);
    int reverse = n;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= reverse; j++){
            printf("%d", j);
        }
        printf("\n");
        reverse = reverse - 1;
    }

    return 0;
}