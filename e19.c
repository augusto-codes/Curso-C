/*Escreva um programa que exiba uma pirâmide de números pares com N linhas.*/

#include <stdio.h>

int n, base = 0;

int main(){
    //Pedir o número que será referencia para o tamanho
    printf("Digite o numero para o tamanho da piramede: ");
    scanf("%d", &n);

    //Rodar o for para fazer as linhas
    for (int i = 1; i<= n; i++){
        
        //Esse vai ditar a escrutura da na linha
        for (int j = 1; j <= i; j++){
            //Usarei base como a base literal para realizar a escada
            base = base + 1;
            //Conforme base for adquirindo valores, ela será multiplicada no print
            printf("%d ", (base * 2));
        }
        printf("\n");
    }



    return 0;
}