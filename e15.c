/*Escreva um programa que recebe um número inteiro do usuário e imprime a tabuada desse número de 0 a 10.*/
#include <stdio.h>
int n;
int main(){
    printf("Digite o numero para a tabuada: ");
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++){
       printf("%d * %d = %d\n", n, i, (n*i));
    }

    return 0;
}