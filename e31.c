/*
Crie um programa em C que simule a geração de 6 números aleatórios entre 1 e 60, 
como em um jogo de loteria (ex: Mega Sena). Os números devem ser exibidos na tela.
Não é necessário garantir que os números sejam diferentes entre si neste primeiro 
 momento.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void megaSenha(){
    srand(time(NULL));
    printf("Essa é a mega senha de hoje: ");
    for(int i = 0; i< 6; i++){
        int numero = rand() % 60 + 1;
        printf("%d ", numero);
    }
}

int main(){
    setlocale(LC_ALL, "");

    megaSenha();

    return 0;
}