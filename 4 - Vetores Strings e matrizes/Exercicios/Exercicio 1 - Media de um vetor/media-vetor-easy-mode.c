# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


void main(){

    setlocale(LC_ALL, "");

    // Crie um algoritmo que leia 3 valores para um vetor de 3 posições
    // Calcule a média dos valores acessando o vetor.

    float vetor[3], media;

    printf("\nDigite a nota 1 do vetor: ");
    scanf("%f", &vetor[0]);

    printf("\nDigite a nota 2 do vetor: ");
    scanf("%f", &vetor[1]);

    printf("\nDigite a nota 3 do vetor: ");
    scanf("%f", &vetor[2]);

    media = (vetor[0] + vetor[1] + vetor[2]) / 3;

    printf("\n\nMedia das notas: %f", media);

    printf("\n\n\n");
    system("pause");
}
