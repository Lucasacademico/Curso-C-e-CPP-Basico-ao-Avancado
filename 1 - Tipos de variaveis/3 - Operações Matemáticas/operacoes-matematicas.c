#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){

    setlocale(LC_ALL, "");

    //definindo variaveis
    int a = 6, b = 4;

    //somando a + b
    printf("\nA soma de %d + %d = %d", a, b, a + b);

    //subtra��o de a - b
    printf("\nA subtra��o de %d - %d = %d", a, b, a - b);

    //Divis�o de a / b
    printf("\nA divis�o de %d / %d = %d", a, b, a / b);

    //multiplica��o de a * b
    printf("\nA multiplica��o de %d * %d = %d", a, b, a * b);

    // resto da divis�o entre a e b
    printf("\nO resto da div entre %d / %d = %d", a, b, a % b);

    // Valor absoluto
    printf("\nO valor absoluto de -2 �: %d", abs(-2));

    printf("\n\n");
    system("pause");
}
