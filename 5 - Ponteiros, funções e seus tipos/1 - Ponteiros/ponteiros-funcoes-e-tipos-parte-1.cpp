# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string>
# include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "");

    int a = 20;

    printf("Valor de a: %d", a);
    printf("\nEndereço de memória da a: %d", &a);

    printf("\n\nLendo um novo valor para a: ");
    scanf("%d", &a);
    printf("\nEndereço de memória da a: %d", &a);

    int b =

    cout << "\n\n\n";
    system("pause");
    return 0;
}

/*
    OBS: Variaveis armazenam valores, e ponteiros armazenam posições da memória.



*/
