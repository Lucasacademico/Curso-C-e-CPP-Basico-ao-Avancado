# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    //Definindo variaveis
    int a = 1, b = 10, c = 0;

    //Contando até 10
    while(a <= 10){
        printf("\n%d", a);

        //incremento
        a = a + 1;
    }

      printf("\n\n");

    //contagem regressiva
    while(b >= 1){
        printf("\n%d", b);

        //incremento
        b = b - 1;
    }

      printf("\n\n");

    //contagem de 2 em 2
    while(c <= 20){
        printf("\n%d", c);

        //incremento
        c = c + 2;
    }

    printf("\n\n");
    system("pause");
}
