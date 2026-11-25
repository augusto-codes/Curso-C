/*
Um sistema de cadastro recebe a idade de uma pessoa como texto (string). 
Escreva um programa em C que leia essa informação como uma string e 
depois converta para inteiro usando atoi. Em seguida, 
exiba a idade e verifique se a pessoa é maior de idade (18 anos ou mais).
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void conversor(char convert[]){

    int numero = atoi(convert);

    if (numero >= 18){
        printf("Você tem %d é maior de idade", numero);
    }
    else{
        printf("Você tem %d é menor de idade", numero);
    }
}
    char n[3];
int main(){
    
    setlocale(LC_ALL, "");
    printf("Digite sua idade:: ");
    scanf(" %s", n);

    conversor(n);

    return 0;
}