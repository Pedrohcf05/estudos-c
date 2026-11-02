#include <stdio.h>
#include <stdlib.h>

int main(){
    //apresenta o menu
    printf("Menu                \n");
    printf("1 - Espresso        \n");
    printf("2 - Capuccino       \n");
    printf("3 - Macchiato       \n");
    printf("Escolha uma opcao   \n");

    //Le a opção escolhida
    int opcao;
    scanf("%d",&opcao);

    switch (opcao)
    {
    case 1:
        printf("Espresso escolhido \n");
        break;
    
    case 2:
        printf("Capuccino escolhido \n");
        break;
    
    case 3:
        printf("Macchiato escolhido \n");
        break;
    
    default:
        printf("Opcao invalida \n");
        break;

    
    }

    return 0;
}