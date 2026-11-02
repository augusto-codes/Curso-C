#include <stdio.h>
int opcao, frequencia;
float notaFinal;

int main(){
    printf("Menu\n1 - Verificar se o aluno foi aprovado\n2 - Sair ");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        printf("Digite a nota final do aluno: ");
        scanf("%f", &notaFinal);
        printf("Digite a porcentagem de presenca do aluno: ");
        scanf("%d", &frequencia);

        if (notaFinal >= 7 && frequencia >= 75)
        {
            printf("Aluno aprovado");
        }else{
            printf("Aluno reprovado");
        }
        
        break;
    case 2:
        printf("Programa encerrado");
        break;    
    default:
        printf("Opcao invalida");
        break;
    }

    return 0;
}