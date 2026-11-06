/*Uma concessionária deseja criar um sistema para registrar os carros que entram para revisão e verificar quais precisam de reparos urgentes. O sistema deve:*/

#include <stdio.h>
int registroCarro, anoDeFabricacao, funciona;
char modelo[20];

int main(){

    printf("Digite quantos carros serao registrados: ");
    scanf("%d", &registroCarro);

    for (int i = 1; i <= registroCarro; i++){
        printf("Registre o %d carro: \n", i);

        printf("Modelo: ");
        scanf("%s", &modelo);
        printf("Ano de fabricacao: ");
        scanf("%d", &anoDeFabricacao);
        printf("Se esta funcionando normalmente (1 ou 0): ");
        scanf("%d", &funciona);

        if (anoDeFabricacao < 2005 && funciona == 0){
            printf("O carro %s precisa de REPAROS URGENTES!\n", modelo);
        }else if (anoDeFabricacao < 2005 && funciona == 1){
            printf("O carro %s e antigo, recomenda-se uma revisao!.\n", modelo);

        }else if (anoDeFabricacao > 2005 && funciona == 0){
            printf("O carro %s precisa de manutencao!\n", modelo);
        }else{
            printf("O carro %s esta em boas condicoes!\n", modelo);
        }
    }



    return 0;
}