# include <stdio.h>
# include <stdlib.h>

int* alocaVetor(int tamanho){
    // Criado um ponteiro auxiliar
    int *aux;

    //aloca��o din�mica de mem�ria (reserva um espa�o na memoria para as casas do vetor).
    aux = (int*) malloc(tamanho * sizeof(int));

    // retorna o ponteiro que aponta para a primeira posi��o de mem�ria do vetor alocado.
    return aux;
}


int main(){

    int *vetor, tamanho, cont;

    // Lendo o tamanho do vetor para o usuario
    printf("\nDigite um tamanho para o vetor : ");
    scanf("%d", &tamanho);

    // Ponteiro recebe o endere�o de mem�ria que foi alocado pelo vetor
    vetor = alocaVetor(tamanho);

    //atribuindo valores para os vetores
    for(cont = 0; cont < tamanho; cont++){
        printf("\nDigite o valor da posi��o %d: ", cont);
        scanf("%d", &vetor[cont]);
    }

    // Imprime vetor
    for(cont = 0; cont < tamanho; cont++){
        printf("%d\n", vetor[cont]);
    }

    free(vetor);

    // se colocarmos um tamanho 5, o vetor imprimira o valor da memoria, pois atribuimos apenas
    //at� o tamanho 4.

    system("pause");
    return 0;
}



/*
    Analisando passo a passo:

    1 - Declaramos na fun��o main uma variavel vetor-poteiro, e uma variavel para o tamanho que
    ser� alocado para este vetor:

        int *vetor, tamanho;



    2 - Solicitamos o tamanho do vetor para o usu�rio:

        printf("\nDigite um tamanho para o vetor : ");
        scanf("%d", &tamanho);



    3 - Criamos uma fun��o-ponteiro recebendo o par�metro do tamanho:

        int* alocaVetor(int tamanho){}



    4 - Dentro da fun��o, criamos uma variavel ponteiro auxiliar:

        int *aux;



    5 - Criamos uma aloca��o din�mica da mem�ria com a variavel ponteiro auxiliar:

        aux = (int*) malloc(tamanho * sizeof(int));

        - malloc(); - Fun��o que vai alocar a memoria
        - malloc(tamanho * sizeof(int)) - Significa que vamos alocar na memoria
        a variavel tamanho no "sizeof(in)", que � alocar a memoria tamanho d

        OBS: este passo reserva um espa�o na memoria para as casas do vetor.
        OBS2: Cada casa de um vetor inteiro, � equivalente � 2 bytes.



    6 - Dentro da fun��o alocaVetor, retornamos a variavel aux:

        return aux;

        obs: return aux; - retorna o ponteiro que aponta para a primeira posi��o de mem�ria do
        vetor alocado.


    6 - Na fun��o MAIN, atribuimos � variavel vetor, a fun��o alocaVetor com o
    par�metro tamanho.

        vetor = alocaVetor(tamanho);

        OBS: Ponteiro recebe o endere�o de mem�ria que foi alocado pelo vetor



    7 - Atribuimos os valores dos vetores:

            for(cont = 0; cont < tamanho; cont++){
            printf("\nDigite o valor da posi��o %d: ", cont);
            scanf("%d", &vetor[cont]);
        }



    8 - Criamos um contador para imprimir os valores do vetor, junto com uma variavel cont

        int cont;

        for(cont = 0; cont < tamanho; cont++){
            printf("%d\n", vetor[cont]);
        }



    9 - Por ultimo, podemos limpar a memoria do vetor:

        free(vetor);

*/


