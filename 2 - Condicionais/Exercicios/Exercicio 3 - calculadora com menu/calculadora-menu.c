# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    // Crie um algoritmo que leia dois valores
    // Crie um menu (usando switch case) de 4 op��es:
        // 1-somar, 2-subtrair, 3-dividir, 4-multiplicar;
    // Depois que o usuario escolher uma op��o, mostre o resultado...
    // ... da opera��o escolhida com os dois valores lidos.

    int opcao;
    float n1, n2, resultado;

    printf("Selecione as op��es da calculadora: ");
    printf("\nOp��o 1 - Soma");
    printf("\nOp��o 2 - Subtra��o");
    printf("\nOp��o 3 - Multiplica��o");
    printf("\nOp��o 4 - Divis�o");

    printf("\n\n\nDigite o valor da op��o: ");
    scanf("%d", &opcao);


    switch(opcao){
        case 1:
            printf("\n\nOp��o selecionada: SOMA");
            printf("\nDigite o valor da parcela 1: ");
            scanf("%f", &n1);

            printf("\nDigite o valor da parcela 2: ");
            scanf("%f", &n2);

            resultado = n1 + n2;

            printf("\nResultado: %f", resultado);
            break;

        case 2:
            printf("\n\nOp��o selecionada: SUBTRA��O");
            printf("\nDigite o valor do aditivo: ");
            scanf("%f", &n1);

            printf("\nDigite o valor do subtrativo: ");
            scanf("%f", &n2);

            resultado = n1 - n2;

            printf("\nResultado: %f", resultado);
            break;

        case 3:
            printf("\n\nOp��o selecionada: MULTIPLICA��O");
            printf("\nDigite o valor do fator: ");
            scanf("%f", &n1);

            printf("\nDigite o valor do fator: ");
            scanf("%f", &n2);

            resultado = n1 * n2;

            printf("\nResultado: %f", resultado);
            break;

        case 4:
            printf("\n\nOp��o selecionada: DIVIS�O");
            printf("\nDigite o valor do dividendo: ");
            scanf("%f", &n1);

            printf("\nDigite o valor do divisor: ");
            scanf("%f", &n2);

            resultado = n1 / n2;

            printf("\nResultado: %f", resultado);
            break;

        default:
            printf("\nOp��o Inv�lida");
    }

    printf("\n\n\n\n");
    system("pause");
}
