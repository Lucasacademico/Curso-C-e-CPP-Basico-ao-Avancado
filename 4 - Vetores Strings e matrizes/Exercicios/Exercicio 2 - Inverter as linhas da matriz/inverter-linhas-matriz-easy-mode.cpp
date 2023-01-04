# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string>
# include <iostream>
# define tam 2

using namespace std;

int main(){

    int matriz[tam][tam], i, j, aux1, aux2;

    setlocale(LC_ALL, "");

    // Lendo os valores da matriz
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            cout << "\nDigite o valor da posição " << i << ": ";
            cin >> matriz[i][j];
        }
    }

    // Alocando valores da matriz
    aux1 = matriz[0][0];
    aux2 = matriz[0][1];
    matriz[0][0] = matriz[1][0];
    matriz[0][1] = matriz[1][1];
    matriz[1][0] = aux1;
    matriz[1][1] = aux2;

    // imprimindo os valores da matriz.
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    printf("\n\n\n");
    system("pause");
    return 0;
}
