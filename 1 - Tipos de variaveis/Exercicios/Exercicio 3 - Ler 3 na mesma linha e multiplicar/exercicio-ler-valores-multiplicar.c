#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");

    // Leia 3 numeros inteiros de uma só vês
    // Coloque os resultados da multiplicação deles em uma variavel
    // Exiba o valor da variavel

    int n1, n2, n3, multiplicacao;

    printf("Digite três valores: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    multiplicacao = (n1 * n2 * n3);
    printf("Resultado: %d", multiplicacao);
}
