# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int soma();
int retornaSoma();
void limpaTela();



void main(){

    setlocale(LC_ALL, "");

    int a = 10, b = 15;

    printf("\nA soma de %d + %d é igual à %d", a, b, retornaSoma(a, b));
    // Podemos utilizar uma função dentro de um PRINT.

    printf("\n\n\n");
    system("pause");
}

int soma(int valor1, int valor2){
    printf("\nA soma de %d + %d é igual à %d", valor1, valor2, retornaSoma());
}

int retornaSoma(int valor1, int valor2){
    return valor1 + valor2;
}

void limpaTela(){
    system("pause");
}


