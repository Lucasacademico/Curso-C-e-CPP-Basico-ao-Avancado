# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


void main(){

    setlocale(LC_ALL, "");

    // definindo o vetor
    int vetor[3];

    // declarando os valores do vetor de tamanho 3
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    // printando os valores do vetor
    printf("\nPosi��o 0: %d", vetor[0]);
    printf("\nPosi��o 1: %d", vetor[1]);
    printf("\nPosi��o 2: %d", vetor[2]);

    printf("\n\n\n");
    system("pause");
}
