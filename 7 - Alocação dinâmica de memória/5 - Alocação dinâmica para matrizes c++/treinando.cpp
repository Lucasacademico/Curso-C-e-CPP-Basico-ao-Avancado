# include <stdio.h>
# include <stdlib.h>
# include <new>

int main(){

    int linhas, colunas;
    int i, j;
    int **matriz;

    printf("\nDigite o numero de linhas: ");
    scanf("%d", &linhas);

    printf("\nDigite o numero de colunas: ");
    scanf("%d", &colunas);

    // Alocando memoria na variavel linha
    matriz = (int **) new int[linhas];

    for(i = 0; i < linhas; i++){
        matriz[i] = (int *) new int[colunas];
    }

    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            matriz[i][j] = i;
            printf(" %d", matriz[i][j]);
        }
        printf("\n");
    }

    free(matriz);

    printf("\n\n\n");
    system("pause");
    return 0;
}
