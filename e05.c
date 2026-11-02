#include <stdio.h>
float salario1, salario2;


int main(){
    printf("Vamos comparar o salario de dois jogadores \n");
    printf("Digite o salario do primeiro jogador: ");
    scanf("%f", &salario1);
    printf("Digite o salario do segundo jogador: ");
    scanf("%f", &salario2);

    if (salario1 == salario2)
    {
        printf("Ambos salario tem o mesmo valor");
    }else{
        printf("A diferença é de %2.f reais", (salario1 - salario2));
    }
    
    return 0;
}