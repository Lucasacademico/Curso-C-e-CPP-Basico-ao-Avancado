# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string>
# include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "");

    int matriz[2][2], i, j;

    // Lendo valores para a matriz
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            cin >> matriz[i][j];
        }
    }

    // imprimindo os valores da matriz
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            cout << matriz[i][j];
        }
    }


    printf("\n\n\n");
    system("pause");
    return 0;
}
