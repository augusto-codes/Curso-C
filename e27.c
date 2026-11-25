/******************************************************************************
Crie uma função que receba três inteiros e retorne o maior deles.

*******************************************************************************/

#include <stdio.h>

int maiorNumero(int num_a, int num_b, int num_c){
    int num_maior = 0;
    
    if (num_a > num_b && num_a > num_c){
        num_maior = num_a;
        
    }
    else if (num_b > num_a && num_b > num_c){ 
        num_maior = num_b;
        
    }
    else{
        num_maior = num_c;
        
    }
    
    return num_maior;
}

int main()
{
    int a = 0, b = 0, c = 0;
    
    
    printf("Digite o primeiro número inteiros: ");
    scanf("%d", &a);
    printf("Digite o segundo número inteiros: ");
    scanf("%d", &b);
    printf("Digite o terceiro número inteiros: ");
    scanf("%d", &c);

    printf("O maior número digitado foi: %d", maiorNumero(a,b,c));
    
    return 0;
}