#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    // declarando variaveis
    int a = 5, opcao = 3;
    float b = 2.5;
    char c = 'x';


    //condicionais simples
    if(a == 5){
        printf("\na = %d", 5);
    }
    if (b == 2.5){
        printf("\nb = %f", b);
    }
    if(c == 'x'){
        printf("\nc = letra x");
    }

    //Condicional composta - numero par ou �mpar
    if(a % 2 == 1){
        printf("\n A variavel %d � impar", a);
    }
    else{
        printf("\nA variavel %d � par", a);
    }

    //Condicional composta
    if(opcao == 1){
        printf("\n op��o � %d", opcao);
    }
    else if(opcao == 2){
        printf("\nA op��o � %d", opcao);
    }
    else{
        printf("\nA op��o n�o � nem 1 nem 2");
    }

    printf("\n\n");


    system("pause");
}

//Quanto mais blocos de IF utilizamos, mais mem�ria � utilizada no codigo
