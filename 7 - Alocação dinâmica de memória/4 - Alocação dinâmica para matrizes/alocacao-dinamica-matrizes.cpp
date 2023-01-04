# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string>
# include <iostream>
# include <new>

using namespace std;

int main(){

    setlocale(LC_ALL, "");

    // Definindo variaveis
    int linhas = 3, colunas = 3;
    int i, j;
    int **matriz;

    // Alocando as linhas
    matriz = (int **) malloc(linhas * sizeof(int));

    // Alocando colunas
    for(i = 0; i < linhas; i++){
        matriz[i] = (int *) malloc(colunas * sizeof(int));
    }

    // Preenchendo valores e exibindo a matriz
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            matriz[i][j] = i;
            printf("\n%d", matriz[i][j]);
        }
    }

    free(matriz);

    cout << "\n\n\n";
    system("pause");
    return 0;
}
