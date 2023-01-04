# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# define tam 3

void main(){

    setlocale(LC_ALL, "");

    float vetor[tam], soma;
    int cont;

    // FOR para ler os valores e variavel soma recebendo a soma dos valores dos vetores
    for(cont = 0; cont < tam; cont++){
        printf("\nDigite o valor da nota %d: ", cont + 1);
        scanf("%f", &vetor[cont]);
        soma = soma + vetor[cont];
    }

    // Imprimindo as notas inseridas pelo usuario
    for(cont = 0; cont < tam; cont++){
        printf("\nNota %d: %.2f", cont +1, vetor[cont]);
    }

    // Imprimindo a média de notas
    printf("\n\nMedia das notas: %.2f", soma / tam);


    printf("\n\n\n");
    system("pause");
}
