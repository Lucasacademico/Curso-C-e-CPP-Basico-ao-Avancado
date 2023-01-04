# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    // Definindo variaveis
    char palavra[255];

    // Instru��o
    printf("\nDigite uma palavra: ");

    // Limpando o buffer
    setbuf(stdin, 0);

    // Lendo a string
    fgets(palavra, 255, stdin);

    printf("\n%s", palavra);

    printf("\n\n\n");
    system("pause");
}

/*
    Analisando o c�digo:

        char palavra[255];
        printf("\nDigite uma palavra");
        setbuff(stdin, 0);
        fgets(palavra, 255, stdin);


    Detalhando o c�digo:
    - char palavra[255]; - declaramos uma variavel string do tipo char, com tamanho de 255 caracteres
    - printf("\nDigite uma palavra"); - Digitamos uma instru��o para o usuario
    - setbuf(stdin, 0); - Limpamos o buffer na saida padr�o "Standard input"
    - fgets(palavra, 255, stdin); - lemos a variavel palavra, especificando o tamanho, e a saida stdin.
    - printf("\n%s", palavra); - Printamos a string, com o uso da memoria do tipo string - %s;

    Obs: Ocupar um variavel com 255 chars ocupa espa�o, podemos reduzir o tamanho, ou, usarmos outra maneira.

*/
