# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    //Criar um algoritmo que verifica se um numero é primo ou não

    int valor, cont;

    printf("Confira se o número é primo: \n");
    printf("Digite um valor: ");
    scanf("%d", &valor);

    for(cont > 0; cont = valor; valor++){
        if(valor % valor == 1){
            printf("O número  primo");
        }
        else{
            printf("O número não é primo", valor);
        }
    }


    printf("\n\n");
    system("pause");
}
