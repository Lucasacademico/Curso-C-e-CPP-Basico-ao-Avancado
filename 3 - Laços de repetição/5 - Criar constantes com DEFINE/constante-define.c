# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# define var_define 10

void main(){

    setlocale(LC_ALL, "");

    //printando a variavel DEFINE
    printf("Printando a variável DEFINE: %d", var_define);


    int i;

    printf("\n");
    for(i = 1; i <= var_define; i++){
        printf("\n%d", i);
    }


    printf("\n\n\n");
    system("pause");
}

/*
    Criação de constante DEFINE:
    - Criamos uma biblioteca no formato abaixo:
        # define variavel_define 10
            obs: 10 é o valor da variavel DEFINE que criamos
    - podemos usar variavel_define como uma variavel qualquer, à diferenção é que ela nunca
    poderá ser alterada.
*/
