# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    float vetor[3], media;
    int cont;

    for(cont = 0; cont < 3; cont++){
        printf("\nDigite o valor da nota %d: ", cont + 1);
        scanf("%f", &vetor[cont]);
    }

    media = (vetor[0] + vetor[1] + vetor[2]) / 3;

    printf("\nMedia de notas: %f", media);









    printf("\n\n\n");
    system("pause");
}
