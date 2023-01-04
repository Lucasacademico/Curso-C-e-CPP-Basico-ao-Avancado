# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int retornaInteiro();
float retornaFloat();

void main(){

    setlocale(LC_ALL, "");

    int a;
    float b;

    a = retornaInteiro();
    printf("%d", a);

    b = retornaFloat();
    printf("%.1f", b);

    printf("\n\n\n");
    system("pause");
}

int retornaInteiro(){
    printf("Retorno inteiro: ");
    return 10;
}

float retornaFloat(){
    printf("\nRetorno float: ");
    return 5.5;
}

/*
    é importa que o printf esteja logo abaixo da função que foi atribuida a variavel.
*/
