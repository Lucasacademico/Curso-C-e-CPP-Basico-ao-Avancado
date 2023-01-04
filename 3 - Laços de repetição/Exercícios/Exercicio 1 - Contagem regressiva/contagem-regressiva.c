# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    // Crie um algoritmo que imprima os numeros de 10 até 0
    // Usar while, dowhile, e for.


    // Declarando variaveis
    int i = 10, x = 10, z = 10;

    while(i > 0){
        printf("\n%d", i);
        i--;
    }

    printf("\n\n");
    do{
        printf("\n%d", x);
        x--;
    }while(x >= 1);

    printf("\n\n");
    for(z = 10; z > 0; z--){
       printf("\n%d", z);
    }

    printf("\n\n");
    system("pause");
}
