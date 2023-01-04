#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    //definindo variaveis
    int a = 5, b = 10, c = 15;
    char d = 's';

    //Condicional maior
    if(a > 2){
        printf("\n %d é maior que 2", a);
    }

    //Condicional Maior ou Igual
    if(c >= b){
        printf("\n %d é maior ou igual à %d", c, b);
    }

    //Condicional Menor
    if(a < 10){
        printf("\n %d é menor que 10", a);
    }

    //Condicional menor ou igual
    if(a <= 10){
        printf("\n %d é menor ou igual à 10", a);
    }

    //Diferente
    if(c != 10){
        printf("\n%d é diferente de 10", c);
    }

    //Diferente com char
    if(d != 'x'){
        printf("\n %c é diferente de x", d);
    }


    printf("\n\n");

    system("pause");
}
