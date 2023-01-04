# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    int opcao;

    while(opcao < 1 || opcao > 3){
        // interface das opções
        printf("Escolha uma opção: ");
        printf("\nOpção 1");
        printf("\nOpção 2");
        printf("\nOpção 3\n\n");
        scanf("%d", &opcao);

        printf("\n\n");
        switch(opcao){
            case 1:
                printf("Opção 1 selecionado");
                break;

            case 2:
                printf("Opção 2 selecionado");
                break;

            case 3:
                printf("Opção 3 selecionado");
                break;

            default:
                printf("Opção invalida");
        }
    }

    printf("\n\n    ");
    system("pause");
}
