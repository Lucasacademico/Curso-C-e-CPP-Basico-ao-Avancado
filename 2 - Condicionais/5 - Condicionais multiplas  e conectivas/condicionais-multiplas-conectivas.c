#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    int a = 20;

    printf("\nvalor: %d", a);

    //conectivo l�gico E(AND), se uma compara��o for false n�o entra no bloco
    if(a > 5 && a < 15){
        printf("\nO valor esta entre 5 e 15");
    }

    //conectivo l�gico OU (OR), se uma compara��o for verdadeira entra no bloco
    if(a > 5 || a > 15){
        printf("\nO valor � maior que 5 ou maior que 15");
    }

    //misturando conectivos
    if(a > 5 && a < 15 || a == 20){
        printf("\nA variavel esta entre 5 e 15 ou � igual a 20");
    }


    system("pause");
}
