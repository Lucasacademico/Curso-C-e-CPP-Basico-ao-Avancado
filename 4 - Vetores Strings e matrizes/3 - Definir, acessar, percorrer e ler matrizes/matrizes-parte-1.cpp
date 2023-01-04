# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string>
# include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "");

    // Declarando uma matriz
    int matriz[2][2];

    // Passando valores para a matriz
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;

    // Imprimindo valores da matriz separadamente.
    cout << "\nValor vetor 0.0: " << matriz[0][0];
    cout << "\nValor vetor 0.1: " << matriz[0][1];
    cout << "\nValor vetor 1.0: " << matriz[1][0];
    cout << "\nValor vetor 1.1: " << matriz[1][1];

    printf("\n\n\n");
    system("pause");
    return 0;
}

/*

    1 - Diferença entre Vetores e Matrizes:

        vetor = [0][1][2];

        matriz = [0.0][0.1][0.2]
                 [1.0][1.1][1.2]

            Logo uma Matriz é um conjunto de vetores.






*/

