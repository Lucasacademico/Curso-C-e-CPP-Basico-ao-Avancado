#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    //declarando uma variavel char
    char letra = 't';

    // imprimindo o valor da variavel char 'c';
    printf("Valor do char da variavel 'letra': %c", letra);

    // Recebendo um novo caractere para 'a'
    printf("\nDigite um novo caractere para o char da variavel 'letra': ");
    scanf("%c", &letra);

    //Lendo o novo caractere de 'a'
    printf("\nO novo valor do char de 'letra' é: %c", letra);

}

/*
    Lendo e imprimindo caracteres
    - %c é o modo de imprimir um char.
*/
