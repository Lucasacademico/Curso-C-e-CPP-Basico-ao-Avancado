#include <stdio.h>
#include <stdlib.h>

void main(){

    //Defini��o de vari�veis
    char letra = 'x';

    //condicional simples
    if(letra == 'x'){
        printf("\nA letra eh 'x'\n");
    }

    //inserir o %d em um char ir� printar o c�digo ASCII da letra
    printf("\nO codigo da letra eh %d\n", letra);

    //condicional simples para comprovar que o valor 120 � o c�digo da letra x
    if(letra == 120){
        printf("\nA letra eh x \n\n\n\n");
    }

    //pausando o sistema
    system("pause");
}
