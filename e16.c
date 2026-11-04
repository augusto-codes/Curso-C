/*O usuário digita um número n, e o programa imprime todos os números pares de 1 até n.*/
#include <stdio.h>
int n;
int main(){
    printf("Digite o numero de N: ");
    scanf("%d", &n);
    printf("Numeros pares de 1 a %d\n",n);

    for (int i = 1; i <= n; i++){
        if ((i % 2) == 0){
            printf("%d ",i);
        }
    }


    return 0;
}