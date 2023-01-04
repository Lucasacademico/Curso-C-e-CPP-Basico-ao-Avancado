#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    //Declarando uma variavel
    int a = 22, b;

    //imprimindo a variavel 'a'
    printf("%d", a);

    //concatenando
    printf("\nO valor da variavel a é: %d", a);

    //modificando o valor de 'a'
    a = 33;

    //Imprimindo novo valor de 'a'
    printf("\nNovo valor de a: %d", a);

    //pula linha
    printf("\n\n\n");

    //Lendo um valor para 'b'
    printf("Digite um valor para b: ");
    scanf("%d", &b);

    //printando o valor de 'b'
    printf("\nValor de b é: %d", b);

    //pula linha
    printf("\n\n\n");

    //pausa o programa após executar
    system("pause");
}
