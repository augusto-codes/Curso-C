/******************************************************************************

Crie uma função que imprime um quadrado de asteriscos com lado n. 
O usuário dirá qual o valor de n e qual caracter será usado (*, #, $ ...).

*******************************************************************************/

#include <stdio.h>

void quadradoEsp(int n, char especial){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf(" %c", especial);
        }
        printf("\n");
    }
}

int main()
{
    int quantidade = 0;
    char carac;
    printf("Digite será o tamanho do quadrado: ");
    scanf("%d", &quantidade);
    
    printf("Qual caracter especial será utilizado(!-@-#-$-%-&-*): ");
    scanf(" %c", &carac);
    
    quadradoEsp(quantidade, carac);
    return 0;
}