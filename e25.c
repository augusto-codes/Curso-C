#include <stdio.h>

float media(float num1, float num2){
    return (num1 + num2) / 2;

}

float primeiro, segundo;

int main(){

    printf("Digite o primeiro valor: ");
    scanf("%f", &primeiro);

    printf("Digite o segundo valor: ");
    scanf("%f", &segundo);

    printf("A media foi %.2f", media(primeiro, segundo));

    return 0;
}