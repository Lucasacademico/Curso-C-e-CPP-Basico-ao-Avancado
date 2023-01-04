# include <stdio.h>
# include <stdlib.h>


void limpaTela();

void main(){

    int a;

    printf("\nDigite um valor: ");
    scanf("%d", &a);

    // Apaga todo o conteudo antes da função
    limpaTela();

    printf("\nO valor digitado foi %d \n Fim do Programa", a);

    printf("\n\n\n");
    system("pause");

}

void limpaTela(){
    system("CLS");
}
