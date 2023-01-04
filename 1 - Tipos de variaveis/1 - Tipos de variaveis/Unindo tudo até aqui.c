#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    //imprime Olá
    printf("olá\n");

    //Declarando valor inteiro e recebendo um novo valor para 'a'
    int a = 10;
    printf("%d", a);
    printf("\nDigite um novo valor de A: ");
    scanf("\n%d", &a);
    printf("Novo valor de A: %d", a);


    //Declarando valor Float e recebendo um novo valor para 'a'
    float b = 20.2;
    printf("\n\n%f", b);
    printf("\nDigite um novo valor de B: ");
    scanf("\n%f", &b);
    printf("Novo valor de B: %f", b);

    //Declarando valor Float e recebendo um novo valor para 'a'
    char letra = 't';
    printf("\n\n%c", letra);
    printf("\nDigite uma nova letra: ");
    fflush(stdin);
    scanf("\n%c", &letra);
    printf("Nova letra: %c\n\n", letra);

}

/*
    Juntando tudo até aqui
    - Caso estivermos declarando variaveis, e formos tentar ler uma variavel char
    e não conseguirmos, isso se deve devido o buffer que esta com lixo na memoria, logo devemos limpar
    o buffer antes.


    Analisando o código:

        printf("\nDigite uma nova letra: ");
        fflush(stdin);
        scanf("\n%c", &letra);

    Detalhando o código:
    - printf(""); - Solicitamos uma letra do usuario
    - fflush(stdin); - Limpamos o buffer da memoria
    - scanf("\n%c", &letra); - lemos a variavel tipo char

*/
