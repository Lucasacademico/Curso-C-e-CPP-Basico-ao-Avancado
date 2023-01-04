# include <stdio.h>
# include <stdlib.h>

int* alocaVetor(int tamanho){
    // Criado um ponteiro auxiliar
    int *aux;

    //alocação dinâmica de memória (reserva um espaço na memoria para as casas do vetor).
    aux = (int*) malloc(tamanho * sizeof(int));

    // retorna o ponteiro que aponta para a primeira posição de memória do vetor alocado.
    return aux;
}


int main(){

    int *vetor, tamanho, cont;

    // Lendo o tamanho do vetor para o usuario
    printf("\nDigite um tamanho para o vetor : ");
    scanf("%d", &tamanho);

    // Ponteiro recebe o endereço de memória que foi alocado pelo vetor
    vetor = alocaVetor(tamanho);

    //atribuindo valores para os vetores
    for(cont = 0; cont < tamanho; cont++){
        printf("\nDigite o valor da posição %d: ", cont);
        scanf("%d", &vetor[cont]);
    }

    // Imprime vetor
    for(cont = 0; cont < tamanho; cont++){
        printf("%d\n", vetor[cont]);
    }

    free(vetor);

    // se colocarmos um tamanho 5, o vetor imprimira o valor da memoria, pois atribuimos apenas
    //até o tamanho 4.

    system("pause");
    return 0;
}



/*
    Analisando passo a passo:

    1 - Declaramos na função main uma variavel vetor-poteiro, e uma variavel para o tamanho que
    será alocado para este vetor:

        int *vetor, tamanho;



    2 - Solicitamos o tamanho do vetor para o usuário:

        printf("\nDigite um tamanho para o vetor : ");
        scanf("%d", &tamanho);



    3 - Criamos uma função-ponteiro recebendo o parâmetro do tamanho:

        int* alocaVetor(int tamanho){}



    4 - Dentro da função, criamos uma variavel ponteiro auxiliar:

        int *aux;



    5 - Criamos uma alocação dinâmica da memória com a variavel ponteiro auxiliar:

        aux = (int*) malloc(tamanho * sizeof(int));

        - malloc(); - Função que vai alocar a memoria
        - malloc(tamanho * sizeof(int)) - Significa que vamos alocar na memoria
        a variavel tamanho no "sizeof(in)", que é alocar a memoria tamanho d

        OBS: este passo reserva um espaço na memoria para as casas do vetor.
        OBS2: Cada casa de um vetor inteiro, é equivalente à 2 bytes.



    6 - Dentro da função alocaVetor, retornamos a variavel aux:

        return aux;

        obs: return aux; - retorna o ponteiro que aponta para a primeira posição de memória do
        vetor alocado.


    6 - Na função MAIN, atribuimos à variavel vetor, a função alocaVetor com o
    parâmetro tamanho.

        vetor = alocaVetor(tamanho);

        OBS: Ponteiro recebe o endereço de memória que foi alocado pelo vetor



    7 - Atribuimos os valores dos vetores:

            for(cont = 0; cont < tamanho; cont++){
            printf("\nDigite o valor da posição %d: ", cont);
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


