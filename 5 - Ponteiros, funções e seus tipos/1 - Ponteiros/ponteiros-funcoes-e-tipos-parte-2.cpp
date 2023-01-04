# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string>
# include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "");

    // variavel armazenando valor
    int b = 10;

    // Ponteiro armazenando posi��o da mem�ria
    int *ponteiro;

    // Ponteiro recebendo posi��o da memoria de b
    ponteiro = &b;

    printf("\nValor de b: %d", b);

    // Novo Conte�do apontado pelo ponteiro
    *ponteiro = 40;

    // Valor de b ap�s altera��o realizada pelo ponteiro
    printf("\nValor de b: %d", b);

    // Valor da mem�ria de b:
    printf("\nValor da memoria de b: %d", &b);

    // apenas para eu lembrar que tem diferen�as entre todas elas
    printf("\n\nValor do ponteiro que recebe a posi��o da memoria de &b: %d", ponteiro);
    printf("\nValor do conte�do do *ponteiro: %d", *ponteiro);
    printf("\nValor da aloca��o da memoria do &ponteiro: %d", &ponteiro);
    printf("\nValor da memoria do conteudo apontado pelo &*ponteiro: %d", &*ponteiro);

    printf("\n\n\n");
    system("pause");
    return 0;
}

/*
    Conforme exemplo acima, fizemos os seguintes passos

        1 - int b = 10; - declaramos uma variavel 'b' com valor 15
        2 - int *ponteiro; - declaramos um *ponteiros
        3 - printf("\nValor de b: %d", b); - imprimimos o valor da var b = 10
        4 - ponteiro = &b; - ponteiro recebe a posi��o da mem�ria de 'b'
        5 - *ponteiro = 40; - alteramos o valor do conte�do apontado pelo *ponteiro
        6 - printf("\nValor de b: %d", b); - Imprimimos o novo valor da var b = 40

    Concluindo: Podemos criar uma variavel x com um valor y, apontamos um ponteiro para a variavel x,
    e podemos alterar o valor da var x atrav�s do ponteiro.

*/
