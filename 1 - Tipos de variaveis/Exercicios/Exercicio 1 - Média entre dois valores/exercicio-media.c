#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    // Crie um algoritmo que leia 2 nota e mostre a m�dia entre elas.

    //Para usar acentos
    setlocale(LC_ALL, "");

    // declarando variavel
    int a, b, media;

    // lendo a variavel a
    printf("Digite um valor: ");
    scanf("%d", &a);

    // lendo a variavel b
    printf("Digite outro valor: ");
    scanf("%d", &b);

    // media entre a e b
    media = (a + b) / 2;

    //imprimindo a media
    printf("A m�dia de %d e %d � %d", a, b, media);

}
