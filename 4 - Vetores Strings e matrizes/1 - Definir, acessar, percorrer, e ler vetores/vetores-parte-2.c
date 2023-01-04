# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


void main(){

    setlocale(LC_ALL, "");

    int vetor[3], i;

    vetor[0] = 11;
    vetor[1] = 22;
    vetor[2] = 33;

    // imprimindo vetores com for
    for(i = 0; i < 3; i++){
        printf("\nPosição %d: %d", i, vetor[i]);
    }

    printf("\n\n\n");
    system("pause");
}
