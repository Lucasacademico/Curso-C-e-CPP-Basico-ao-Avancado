# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# define var_define 10

void main(){

    setlocale(LC_ALL, "");

    //printando a variavel DEFINE
    printf("Printando a vari�vel DEFINE: %d", var_define);


    int i;

    printf("\n");
    for(i = 1; i <= var_define; i++){
        printf("\n%d", i);
    }


    printf("\n\n\n");
    system("pause");
}

/*
    Cria��o de constante DEFINE:
    - Criamos uma biblioteca no formato abaixo:
        # define variavel_define 10
            obs: 10 � o valor da variavel DEFINE que criamos
    - podemos usar variavel_define como uma variavel qualquer, � diferen��o � que ela nunca
    poder� ser alterada.
*/
