# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    int opcao;

    while(opcao < 1 || opcao > 3){
        // interface das op��es
        printf("Escolha uma op��o: ");
        printf("\nOp��o 1");
        printf("\nOp��o 2");
        printf("\nOp��o 3\n\n");
        scanf("%d", &opcao);

        printf("\n\n");
        switch(opcao){
            case 1:
                printf("Op��o 1 selecionado");
                break;

            case 2:
                printf("Op��o 2 selecionado");
                break;

            case 3:
                printf("Op��o 3 selecionado");
                break;

            default:
                printf("Op��o invalida");
        }
    }

    printf("\n\n    ");
    system("pause");
}
