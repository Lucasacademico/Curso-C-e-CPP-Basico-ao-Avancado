# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string>
# include <iostream>

using namespace std;

void desenhaborda(){
    printf("\n------\n");
}

int main(){

    setlocale(LC_ALL, "");

    // Chamadno a função
    desenhaborda();

    printf("Olá");

    // Chamando a função
    desenhaborda();


    system("pause");
    return 0;
}
