/*O supermercado deseja controlar o estoque de seus produtos e verificar quais precisam ser repostos.*/
#include <stdio.h>

char nomeProduto[20];
int qtdadeEstoque, minimoRecomendado, baseNum;


int main(){

    printf("Quantos produtos quer cadastrar: ");
    scanf("%d", &baseNum);

    for (int i = 1; i <= baseNum; i++){
        printf("Produto %d:\n", i);
        printf("Nome do produto: ");
        scanf("%s", &nomeProduto);
        printf("Quantidade em estoque: ");
        scanf("%d", &qtdadeEstoque);
        printf("Estoque minimo recomendado: ");
        scanf("%d", &minimoRecomendado);

        if (qtdadeEstoque <= minimoRecomendado){
            printf("> O produto '%s' precisa ser reposto! (Estoque: %d, Minimo: %d)\n", nomeProduto, qtdadeEstoque, minimoRecomendado);

        }else{
            printf("O produto '%s' tem estoque suficiente. (Estoque: %d, Minimo: %d)\n", nomeProduto, qtdadeEstoque, minimoRecomendado);
        }
    }


    return 0;
}