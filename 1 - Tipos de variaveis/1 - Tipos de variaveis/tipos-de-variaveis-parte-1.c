
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    // imprime "Ol� Mundo
    printf("Ol� Mundo\n\n");

    //variavel do tipo inteiro
    int a = 5;

    //imprime o valor da variavel 'a'
    printf("%d\n\n", a);

    //imprime um texto mesclado com a variavel 'a'
    printf("O valor da variavel 'a' �: %d\n\n", a);



}

/*
Bibliotecas:
- <stdio.h> - stdio.h � um cabe�alho da biblioteca padr�o do C. Seu nome vem da express�o
inglesa standard input-output header, que significa "cabe�alho padr�o de entrada/sa�da".

- <stdlib.h> - Stdlib.h � um arquivo cabe�alho da biblioteca de prop�sito geral padr�o da
linguagem de programa��o C. Ela possui fun��es envolvendo aloca��o de mem�ria, controle de processos,
convers�es e outras.

- <locale.h> - A utiliza��o do arquivo locale. h e da fun��o setlocale() configurada
adequadamente vai garantir que caracteres como �� e acentua��o sejam exibidos normalmente em
nosso programa.
    - setlocale(LC_ALL, ""); - Fun��o que permite o uso de acentos

- voin main(){} - Fun��o principal, aqui que as linhas de c�digo funcionam.


*/
