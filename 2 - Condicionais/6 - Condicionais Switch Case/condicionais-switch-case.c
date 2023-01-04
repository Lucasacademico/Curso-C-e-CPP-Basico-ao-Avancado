#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    int a = 2;
    char b = 'x';

    switch(a){
        case 1:
            printf("\nOpção escolhida: 1");
            break;

        case 2:
            printf("\nOpção escolhida: 2");
            break;

        case 3:
            printf("\nOpção escolhida: 3");
            break;

        default:
            printf("\nOpção invalida");
            break;
    }

    switch(b){
        case 'x':
            printf("\nA letra é x");
            break;

        default:
            printf("\nOpção invalida");
            break;
    }

    system("pause");
}
