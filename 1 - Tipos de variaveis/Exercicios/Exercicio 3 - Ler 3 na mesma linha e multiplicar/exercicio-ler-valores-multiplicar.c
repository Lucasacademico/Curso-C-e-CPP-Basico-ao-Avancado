#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");

    // Leia 3 numeros inteiros de uma s� v�s
    // Coloque os resultados da multiplica��o deles em uma variavel
    // Exiba o valor da variavel

    int n1, n2, n3, multiplicacao;

    printf("Digite tr�s valores: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    multiplicacao = (n1 * n2 * n3);
    printf("Resultado: %d", multiplicacao);
}
