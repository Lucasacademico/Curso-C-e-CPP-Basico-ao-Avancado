#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    //declarando variaveis inteiras
    int a = 20;
    int b = 30;

    // imprimindo os valores de 'a' e 'b'
    printf("O valor de A �: %d\n", a);
    printf("O valor de B �: %d\n\n", b);

    // alterando o valor de A
    a = 25;

    // recebendo um novo valor de 'b' do usuario
    printf("Digite um  novo valor para B: ");
    scanf("%d", &b);

    printf("\n\nO novo valor de A alterado pelo sistema �: %d\n", a);
    printf("O novo valor de B alterado pelo usuario �: %d\n\n", b);

}

/*
    Alterando valores de variaveis, e lendo valores

    - scanf("%d", &b); - Fun��o de ler valores inseridos pelo usuario
    - int a = 20; - Variavel declarada
        L a = 25; - Alterado o valor da variavel ap�s declara��o
*/
