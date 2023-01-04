
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    // imprime "Olá Mundo
    printf("Olá Mundo\n\n");

    //variavel do tipo inteiro
    int a = 5;

    //imprime o valor da variavel 'a'
    printf("%d\n\n", a);

    //imprime um texto mesclado com a variavel 'a'
    printf("O valor da variavel 'a' é: %d\n\n", a);



}

/*
Bibliotecas:
- <stdio.h> - stdio.h é um cabeçalho da biblioteca padrão do C. Seu nome vem da expressão
inglesa standard input-output header, que significa "cabeçalho padrão de entrada/saída".

- <stdlib.h> - Stdlib.h é um arquivo cabeçalho da biblioteca de propósito geral padrão da
linguagem de programação C. Ela possui funções envolvendo alocação de memória, controle de processos,
conversões e outras.

- <locale.h> - A utilização do arquivo locale. h e da função setlocale() configurada
adequadamente vai garantir que caracteres como “ç” e acentuação sejam exibidos normalmente em
nosso programa.
    - setlocale(LC_ALL, ""); - Função que permite o uso de acentos

- voin main(){} - Função principal, aqui que as linhas de código funcionam.


*/
