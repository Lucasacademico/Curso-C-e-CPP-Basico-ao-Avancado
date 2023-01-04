# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <time.h>

void main(){

    setlocale(LC_ALL, "");

    //responsável por alimentar o random de forma diferente
    srand((unsigned)time(NULL));

    // Variavel que gera valores progressivamente aleatórios
    int aleatorio1 = rand();

    //Variavel que gera um numero aleatorio entre 0 e 2
    int aleatorio2 = rand() % 3;

    //Variavel que gera um numero aleatorio entre 0 e 4
    int aleatorio3 = rand() % 5;

    //Variavel que gera um numero aleatorio entre 1 e 5
    int aleatorio4 = (rand() %  5) + 1;

    //Variavel para uso de embaralho
    int aleatorio5 = (rand() %  5) + 1;

    printf("\nvalor srand: %d", aleatorio1);
    printf("\nValores entre 0 e 2: %d", aleatorio2);
    printf("\nValores entre 0 e 4: %d", aleatorio3);
    printf("\nValores entre 1 e 5: %d", aleatorio4);

    // Printando o valor uma vez
    printf("\n\n\nPrintando o valor aleatório 5: %d", aleatorio5);

    // Repetindo a var aleatorio5 para embaralhar o valor
    aleatorio5 = (rand() %  5) + 1;

    // reprintando novamente a var aleatorio 5
    printf("\nReprintando o valor aleatório 5: %d", aleatorio5);


    printf("\n\n\n");
    system("pause");
}

/*
    Observações:
    - <time.h> - é a biblioteca que utilizaremos para numeros aleatórios
    - srand((unsigned)time(NULL));
        L srand() - função para usarmos numeros aleatorios
        L (unsigned) - Parâmetro para gerarmos numeros inteiros positivos
        L time(NULL) - Atribuição para utilizar o tempo do computador para encontrar valores
            PS: o tempo do computador, não é o mesmo que a hora.
    OBS: esta função gera um numero que vai progressivamente aumentando.
*/
