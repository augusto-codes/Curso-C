#include <stdio.h>

float capacidadeEstadio, quantidadePublico, porcentagem;

int main(){
    printf("Digite a capacidade do estadio: ");
    scanf("%f", &capacidadeEstadio);
    printf("Digite a quantidade de publico desse jogo: ");
    scanf("%f", &quantidadePublico);

    porcentagem = (quantidadePublico / capacidadeEstadio) * 100;

    if (porcentagem > 90)
    {
        printf("Lotado!");
    }else{
        if (porcentagem > 70 && porcentagem <= 90)
        {
            printf("Otima presenca de publico!");
        }else{
            if (porcentagem >= 50 && porcentagem <= 70)
            {
                printf("Público razoavel.");
            }else{
                printf("Morumbis");
            }
            
        }
        
    }
    

    return 0;
}