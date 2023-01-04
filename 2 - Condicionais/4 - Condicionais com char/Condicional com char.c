#include <stdio.h>
#include <stdlib.h>

void main(){

    //Definição de variáveis
    char letra = 'x';

    //condicional simples
    if(letra == 'x'){
        printf("\nA letra eh 'x'\n");
    }

    //inserir o %d em um char irá printar o código ASCII da letra
    printf("\nO codigo da letra eh %d\n", letra);

    //condicional simples para comprovar que o valor 120 é o código da letra x
    if(letra == 120){
        printf("\nA letra eh x \n\n\n\n");
    }

    //pausando o sistema
    system("pause");
}
