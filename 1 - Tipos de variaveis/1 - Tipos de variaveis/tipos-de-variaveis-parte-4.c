#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    //declarando valor float
    int a;
    float b;

    //Lendo um valor de numero inteiro
    printf("Digite um valor inteiro para A: ");
    scanf("%d", &a);

    //Lendo um valor de numero decimal
    printf("Digite um valor decimal para B: ");
    scanf("%f", &b);

    //Imprimindo o valor inteiro
    printf("\nValor inteiro: %d", a);

    //Imprimindo o valor decimal
    printf("\nValor decimal: %f", b);



}

/*
    Usando n�meros quebrados (float) e comparando com numeros inteiros
    - %f � usado exclusivo para numeros float
    obs: para atribui��o de valores float em variaveis, devemos inserir no formato (x.y), por�m
    no moemento que formos ler um valor float para uma variavel float, deve ser escrito no
    formato (x,y).

*/
