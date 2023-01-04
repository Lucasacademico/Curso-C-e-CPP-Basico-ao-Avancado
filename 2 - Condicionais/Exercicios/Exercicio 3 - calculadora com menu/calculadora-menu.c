# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    // Crie um algoritmo que leia dois valores
    // Crie um menu (usando switch case) de 4 opções:
        // 1-somar, 2-subtrair, 3-dividir, 4-multiplicar;
    // Depois que o usuario escolher uma opção, mostre o resultado...
    // ... da operação escolhida com os dois valores lidos.

    int opcao;
    float n1, n2, resultado;

    printf("Selecione as opções da calculadora: ");
    printf("\nOpção 1 - Soma");
    printf("\nOpção 2 - Subtração");
    printf("\nOpção 3 - Multiplicação");
    printf("\nOpção 4 - Divisão");

    printf("\n\n\nDigite o valor da opção: ");
    scanf("%d", &opcao);


    switch(opcao){
        case 1:
            printf("\n\nOpção selecionada: SOMA");
            printf("\nDigite o valor da parcela 1: ");
            scanf("%f", &n1);

            printf("\nDigite o valor da parcela 2: ");
            scanf("%f", &n2);

            resultado = n1 + n2;

            printf("\nResultado: %f", resultado);
            break;

        case 2:
            printf("\n\nOpção selecionada: SUBTRAÇÃO");
            printf("\nDigite o valor do aditivo: ");
            scanf("%f", &n1);

            printf("\nDigite o valor do subtrativo: ");
            scanf("%f", &n2);

            resultado = n1 - n2;

            printf("\nResultado: %f", resultado);
            break;

        case 3:
            printf("\n\nOpção selecionada: MULTIPLICAÇÃO");
            printf("\nDigite o valor do fator: ");
            scanf("%f", &n1);

            printf("\nDigite o valor do fator: ");
            scanf("%f", &n2);

            resultado = n1 * n2;

            printf("\nResultado: %f", resultado);
            break;

        case 4:
            printf("\n\nOpção selecionada: DIVISÃO");
            printf("\nDigite o valor do dividendo: ");
            scanf("%f", &n1);

            printf("\nDigite o valor do divisor: ");
            scanf("%f", &n2);

            resultado = n1 / n2;

            printf("\nResultado: %f", resultado);
            break;

        default:
            printf("\nOpção Inválida");
    }

    printf("\n\n\n\n");
    system("pause");
}
