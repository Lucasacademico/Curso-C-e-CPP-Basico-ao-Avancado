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

    // Chamadno a fun��o
    desenhaborda();

    printf("Ol�");

    // Chamando a fun��o
    desenhaborda();


    system("pause");
    return 0;
}
