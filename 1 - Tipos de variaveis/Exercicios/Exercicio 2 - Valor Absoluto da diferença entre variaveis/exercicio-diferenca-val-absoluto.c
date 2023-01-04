#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    // Crie um algoritmo que leia 2 notas e mostre o valor absoluto entre elas.

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Declarando variaveis
    int nota1, nota2, resultado;

    //lendo o valor da nota 1
    printf("Digite um valor: ");
    scanf("%d", &nota1);

    //lendo o valor da nota 2
    printf("Digite outro valor: ");
    scanf("%d", &nota2);

    //calculando diferença entre nota 1 e imprimindo o resultado absoluto da diferença.
    resultado = (nota1 - nota2);
    printf("O valor absoluto da diferença entre %d - %d é %d", nota1, nota2, abs(resultado));

}
