#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>//biblioteca(true or false)

void main(){

    //definição de variaveis
    bool a = true, b = false;

    //se A for verdadeiro
    if(a){//nesta linha esta escrito "se A for verdadeiro"
        printf("'A' eh verdadeiro\n");
    }

    //Comparando B
    if(b){//nesta linha esta escrito "se B for verdadeiro"
        printf("\n'B' eh verdadeiro\n");
    }else{
        printf("\n'B' eh falso\n");
    }

    //Comparando uma falsidade
    if(!b){//(!b) - significa inverta, logo, informa "se B for falso"
        printf("\n'B' eh falso\n");
    }

    //pausa do sistema
    system("pause");
}
