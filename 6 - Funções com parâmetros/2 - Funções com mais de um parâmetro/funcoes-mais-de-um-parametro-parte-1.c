# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int soma();
void limpaTela();

void main(){

    setlocale(LC_ALL, "");

    int a = 7, b = 5;

    soma(a, b);

    printf("\n\n\n");
    system("pause");
}


int soma(int valor1, int valor2){
    printf("\nA soma de %d + %d � igual � %d", valor1, valor2, retornaSoma());
}

int retornaSoma(int valor1, int valor2){
    return valor1 + valor2;
}

void limpaTela(){
    system("CLS");
}


/*
    Aqui vemos que podemos utilizar uma fun��o dentro de outra fun��o

    ex:

        fun��o retornaSoma(); , esta realizando a soma dentro da fun��o soma();
*/
