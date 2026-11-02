#include <stdio.h>
int opcao;

int main(){
    printf("Escolha a opcao que lhe agrada\n1 - Hamburguer\n2 - Cachorro- quente\n3 - Pizza\n4 - Sair\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Voce escolheu o Hamburguer!!");
        break;
    case 2:
        printf("Voce escolheu o Cachorro-quente!!");
        break;
    case 3:
        printf("Voce escolheu a Pizza!!");
        break;
    case 4:
        printf("Voce escolheu Sair, ate a proxima!!");
        break;
    
    default:
        printf("Opcao invalida");
        break;
    }

    return 0;
}