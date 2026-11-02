#include <stdio.h>
int idade, gols;

int main(){{
    printf("Digite a idade do jogador: ");
    scanf("%d", &idade);
    printf("Digite a quantidade de gols do jogador: ");
    scanf("%d", &gols);

    if (idade <= 20 && gols > 10)
    {
        printf("Jovem talento promissor!");
    }else{
        if (idade <= 20 && gols <=10)
        {
            printf("Jovem em desenvolvimento.");
        }else{
            if (idade > 20 && gols > 15)
            {
                printf("Jogador experiente em grande fase!");
            }else{
                printf("Estevão");
            }
            
        }
        
    }
    

    return 0;
}}