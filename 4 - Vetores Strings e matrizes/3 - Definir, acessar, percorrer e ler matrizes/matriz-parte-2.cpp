# include <stdio.h>
# include <stdlib.h>
# include <string>
# include <iostream>
# include <locale.h>

using namespace std;

int main(){

    setlocale(LC_ALL, "");

    int matriz[2][2], i, j;

    // Passando os valores para a matriz
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            // cout << "\ni = " << i << ", j = " << j;
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    printf("\n\n\n");
    system("pause");

    return 0;
}

/*

    Analisando o código:

        int matriz[2][2], i, j;

        matriz[0][0] = 1;
        matriz[0][1] = 2;
        matriz[1][0] = 3;
        matriz[1][1] = 4;

        for(i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
                cout << "\ni = " << i << ", j = " << j;
            }
        }

    Detalhando o código:

        A - int matriz[2][2], i, j;

            Declaramos a matriz com o seu tamanho, a variavel i e j para o uso dos dois FOR.

        B - Declarando valores:

            matriz[0][0] = 1;
            matriz[0][1] = 2;
            matriz[1][0] = 3;
            matriz[1][1] = 4;7

                Declaramos os valores dos espaços da matriz


        C -
                for(i = 0; i < 2; i++){
                    for(j = 0; j < 2; j++){
                    cout << "\ni = " << i << ", j = " << j;
                }
            }

                Aqui criamos dois laços FOR, para imprimir os valores da matriz, resumindo, ficará
                da seguinte maneira: matriz[i][j], onde irá printa todas as posições do FOR.





*/
