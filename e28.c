/******************************************************************************

Crie uma função que receba a nota de um aluno e imprima:



Aprovado (nota >= 6)

Recuperação (nota >= 4 e < 6)

Reprovado (nota < 4)

*******************************************************************************/

#include <stdio.h>

void resultadoNota(float valor){
    if (valor >= 6){
        printf("Aprovado\n");
    }
    else if (valor >= 4 && valor < 6){
        printf("Recuperacao\n");
    }
    else{
        printf("Reprovado\n");
    }
}

int main()
{
    float nota = 0;
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);
    
    resultadoNota(nota);
    return 0;
}