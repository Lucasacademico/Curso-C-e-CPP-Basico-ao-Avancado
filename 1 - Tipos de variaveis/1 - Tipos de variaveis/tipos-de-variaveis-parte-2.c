#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    //declarando variaveis inteiras
    int a = 5;
    int b = 7;

    //imprimindo variaveis a e b
    printf("%d\n", a);
    printf("%d\n", b);

    //Mesclando texto, valores, e soma
    printf("A soma de %d + %d = %d\n\n", a, b, a + b);
}
/*
   Parte 2 - Somando valores e mesclando texto com valores.
   - printf("%d\n", b); - %d é exclusivo para inteiros
*/
