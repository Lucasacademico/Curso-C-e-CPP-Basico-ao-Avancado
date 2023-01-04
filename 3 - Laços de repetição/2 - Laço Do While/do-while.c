#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    //
    int a = 1;

    //While - primeiro compara a condição, depois executa
    while(a <= 10){
        printf("\n%d", a);
        a++;
    }

    a = 20;

    //Do-While - Primeiro executa, depois compara
    do{
        printf("\n%d", a);
        a++;
    }while(a <= 10);

    printf("\n\n");
    system("pause");
}

/*
    Do while:
    - primeiro executa, depois compara

    While:
    - Primeiro compara, depois executa.
*/
