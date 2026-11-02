#include <stdio.h>
int gols;

int main(){
    printf("Digite a quantidade de gols marcada na temporada: ");
    scanf("%d", &gols);

    if(gols > 10){
        printf("Excelente temporada!");
    }else{
        if (gols > 5 && gols <= 10){
        printf("Boa temporada!");
        }else{
            printf("Temporada abaixo do esperado.");
        }
        
    }
    

    return 0;
}