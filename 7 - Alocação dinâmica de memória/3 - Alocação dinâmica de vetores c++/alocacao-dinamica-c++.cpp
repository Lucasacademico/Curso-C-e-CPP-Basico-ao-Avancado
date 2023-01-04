# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string>
# include <iostream>
# include <new>

using namespace std;

int main(){

    setlocale(LC_ALL, "");

    // declarando variaveis padr�es
    int tamanho, cont;

    // Lendo o tamanho do vetor
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    // Criando vetor-ponteiro recenbendo "tamanho" como par�metro
    int *vetor = new int(tamanho);

    // vetor recebe valores e imprime (conforme o tamanho).
    for(cont = 0; cont < tamanho; cont++){
        vetor[cont] = cont;
        cout << "\n" << vetor[cont];
    }

    // Libera o espa�o da variavel vetor da memoria.
    free(vetor);

    cout << "\n\n\n";
    system("pause");
    return 0;
}


/*
   An�lisando o c�digo:

   - # include <new> - Biblioteca para alocar memoria para o C++
   - int *vetor = new int(tamanho); variavel para aloca��o de memoria do ponteiro-vetor.
*/
