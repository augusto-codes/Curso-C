/*`Saída esperada (se o usuário digitar 5):`

`A soma de 1 ate 5 e: 15`

`(Cálculo: 1 + 2 + 3 + 4 + 5 = 15)`*/

#include <stdio.h>

int n, soma;

int main(){
    soma = 0;
    printf("Digite o numero de N: ");
    scanf("%d", &n);
    for (int i =1; i <= n; i++){
        soma = (i + soma);
        }
        printf("A soma de 1 ate %d e: %d\n",n,soma);
    return 0;
}