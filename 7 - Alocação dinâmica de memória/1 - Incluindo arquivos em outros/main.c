# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include "functions.h"


void main(){

    setlocale(LC_ALL, "");

    imprimeOi();

    printf("\n\n\n");
    system("pause");
}


/*
    Incluindo arquivos externos no arquivo main:
    - criar o arquivo externo da fun��o - functions.h
    - Inserir uma fun��o dentro do arquivo functions.h
    - na fun��o main:
        L # include "functions.h" - Incluir o arquivo externo como uma biblioteca, por�m com ""
        L Dentro da fun��o main do arquivo principal: invocar o nome da fun��o do arquivo exteno
        functions.h.
    - Rodar o codigo, vual�.
*/
