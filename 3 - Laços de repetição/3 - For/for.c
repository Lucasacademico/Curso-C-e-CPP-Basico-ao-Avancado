# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    int cont;

    // Tabuada de multiplicação
    for(cont = 1; cont <=10; cont++){
        printf("\n5 x %d = %d", cont ,5 * cont);
    }

    printf("\n");

    // Contando de 2 em 2
    for(cont = 1; cont <= 10; cont = cont + 2){
        printf("\n%d", cont);
    }

    printf("\n");

    // Contagem regressiva
    for(cont = 10; cont > 0; cont--){
        printf("\n%d", cont);
    }

    printf("\n\n\n");
    system("pause");
}
