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
    - criar o arquivo externo da função - functions.h
    - Inserir uma função dentro do arquivo functions.h
    - na função main:
        L # include "functions.h" - Incluir o arquivo externo como uma biblioteca, porém com ""
        L Dentro da função main do arquivo principal: invocar o nome da função do arquivo exteno
        functions.h.
    - Rodar o codigo, vualá.
*/
