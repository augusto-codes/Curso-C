#include <stdio.h>
int minutos, horas,restaMinutos;


int main(){
    printf("Digite quantos minutos voce jogou: ");
    scanf("%d", &minutos);

    horas = minutos / 60;
    restaMinutos = minutos % 60;

    printf("Voce Jogou %d Horas e %d Minutos", horas, restaMinutos);

    return 0;
}