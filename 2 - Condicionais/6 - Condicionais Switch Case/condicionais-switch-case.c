#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    int a = 2;
    char b = 'x';

    switch(a){
        case 1:
            printf("\nOp��o escolhida: 1");
            break;

        case 2:
            printf("\nOp��o escolhida: 2");
            break;

        case 3:
            printf("\nOp��o escolhida: 3");
            break;

        default:
            printf("\nOp��o invalida");
            break;
    }

    switch(b){
        case 'x':
            printf("\nA letra � x");
            break;

        default:
            printf("\nOp��o invalida");
            break;
    }

    system("pause");
}
