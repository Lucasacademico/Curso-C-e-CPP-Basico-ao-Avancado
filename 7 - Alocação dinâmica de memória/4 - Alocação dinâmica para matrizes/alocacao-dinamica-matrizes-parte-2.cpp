# include <stdio.h>
# include <stdlib.h>
//# include <locale.h
//# include <string>
//# include <iostream>
//# include <new>

int main(){

    int linhas = 3, colunas = 3;
    int i, j;
    int **matriz;

    printf("\nDigite o numero de linhas: ");
    scanf("%d", &linhas);

    printf("\nDigite o numero de colunas: ");
    scanf("%d", &colunas);

    matriz = (int **) malloc(linhas * sizeof(int));

    for(i = 0; i < colunas; i++){
        matriz[i] = (int *) malloc(colunas * sizeof(int));
    }

    for(i = 0; i < linhas; i++){
        for(j = 0; j < linhas; j++){
            matriz[i][j] = i;
            printf("\n%d", matriz[i][j]);
        }
    }

    printf("\n\n\n");
    system("pause");
    return 0;
}

