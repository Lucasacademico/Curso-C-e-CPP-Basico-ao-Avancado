# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


int mostraSucessor();
void limpaTela();
int retornaAntecessor();


void main(){

    setlocale(LC_ALL, "");

    int a;

    printf("\nDigite um valor: ");
    scanf("%d", &a);

    limpaTela();
    mostraSucessor(a);
    retornaAntecessor(a);



    printf("\n\n\n");
    system("pause");
}

int mostraSucessor(int numero){
    printf("\nO sucessor de %d é %d", numero, numero + 1);
}

int retornaAntecessor(int numero){
    printf("\nO antecessor de %d é %d", numero, numero - 1);
}

void limpaTela(){
    system("CLS");
}


