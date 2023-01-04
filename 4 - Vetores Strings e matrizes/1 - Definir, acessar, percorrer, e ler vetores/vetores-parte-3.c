# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# define TAM 3

void main(){

    setlocale(LC_ALL, "");

    int vetor[TAM], cont;

    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;

    // manipulando os valores do vetor com o FOR
    for(cont = 0; cont < 3; cont++){
        vetor[cont] = vetor[cont] + 1;
        printf("\nPosição %d: %d", cont, vetor[cont]);
    }

    printf("\n\n\n");
    system("pause");
}
