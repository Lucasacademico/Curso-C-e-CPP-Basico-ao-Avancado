# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# define TAM 3

void main(){

    setlocale(LC_ALL, "");

    int vetor[TAM], cont, i;

    for(cont = 0; cont < 3; cont++){
        scanf("%d", &vetor[cont]);
    }

    for(cont = 0; cont < 3; cont++){
        printf("\nPosição %d: %d", cont, vetor[cont]);
    }

    printf("\n\n\n");
    system("pause");
}
