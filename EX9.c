//Mariana Nunes Terol - UC22200554

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int opcao = 0, quantidade = 0;
    float valor_total = 0.0;

    do {
        printf("\nMenu de Frutas:\n");
        printf("1 => ABACAXI - 5,00 a unidade\n");
        printf("2 => MACA - 1,00 a unidade\n");
        printf("3 => PERA - 4,00 a unidade\n");
        printf("0 => Finalizar compra\n");

        
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 0: 
                printf("\nO valor total da compra foi de R$ %.2f\n", valor_total);
                break;

            case 1: 
                printf("Digite a quantidade de abacaxis desejada: ");
                scanf("%d", &quantidade);
                valor_total += quantidade * 5.0;
                printf("Abacaxis adicionados ao carrinho.\n");
                break;

            case 2: 
                printf("Digite a quantidade de macas desejada: ");
                scanf("%d", &quantidade);
                valor_total += quantidade * 1.0;
                printf("Macas adicionadas ao carrinho.\n");
                break;

            case 3: 
                printf("Digite a quantidade de peras desejada: ");
                scanf("%d", &quantidade);
                valor_total += quantidade * 4.0;
                printf("Peras adicionadas ao carrinho.\n");
                break;

            default: 
                printf("Opcao invalida!\n");
        }
    } while(opcao != 0);

    return 0;
}

/*
Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim, 
apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo 
deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade 
de frutas. Ao final, apresente o valor total da compra. 
*/
