# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    //Criar um algoritmo que verifica se um numero � primo ou n�o

    int valor, cont;

    printf("Confira se o n�mero � primo: \n");
    printf("Digite um valor: ");
    scanf("%d", &valor);

    for(cont > 0; cont = valor; valor++){
        if(valor % valor == 1){
            printf("O n�mero  primo");
        }
        else{
            printf("O n�mero n�o � primo", valor);
        }
    }


    printf("\n\n");
    system("pause");
}
