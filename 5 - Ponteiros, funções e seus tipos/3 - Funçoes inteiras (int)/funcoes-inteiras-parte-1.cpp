# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string>
# include <iostream>

using namespace std;


int retornaDez(){
    printf("Eae caraio\n");
    return 10;
}

int main(){

    setlocale(LC_ALL, "");

    int a;

    // Passando o retorno da função para a variavel a
    a = retornaDez();

    printf("%d", a);

    printf("\n\n\n");
    system("pause");
    return 0;
}


