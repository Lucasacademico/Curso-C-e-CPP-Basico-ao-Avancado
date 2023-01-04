#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){

    setlocale(LC_ALL, "");

    //definindo variaveis
    int a = 6, b = 4;

    //somando a + b
    printf("\nA soma de %d + %d = %d", a, b, a + b);

    //subtração de a - b
    printf("\nA subtração de %d - %d = %d", a, b, a - b);

    //Divisão de a / b
    printf("\nA divisão de %d / %d = %d", a, b, a / b);

    //multiplicação de a * b
    printf("\nA multiplicação de %d * %d = %d", a, b, a * b);

    // resto da divisão entre a e b
    printf("\nO resto da div entre %d / %d = %d", a, b, a % b);

    // Valor absoluto
    printf("\nO valor absoluto de -2 é: %d", abs(-2));

    printf("\n\n");
    system("pause");
}
