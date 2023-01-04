# include <stdio.h>
# include <stdlib.h>
//# include <locale.h
//# include <string>
//# include <iostream>
# include <new>

int main(){

    int linhas = 0, colunas = 0;
    int i, j;
    int **matriz;

    printf("\nDigite o numero de linhas: ");
    scanf("%d", &linhas);

    printf("\nDigite o numero de colunas: ");
    scanf("%d", &colunas);

    //alteramos o modo de alocação das linhas
    matriz = (int **) new int[linhas];

    for(i = 0; i < colunas; i++){
    //alteramos o modo de alocação das linhas
        matriz[i] = (int *) new int[colunas];
    }

    printf("\n\n");

    for(i = 0; i < linhas; i++){
        for(j = 0; j < linhas; j++){
            matriz[i][j] = i;
            printf(" %d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\n");
    system("pause");
    return 0;
}

