# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string>
# include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "");

    // Atribuindo uma variavel string em c++
    string palavra;

    // Criando uma instru��o para um cliente
    cout << "Digite uma palavra: ";

    // Lendo a variavel palavra em c++
    cin >> palavra;

    // Imprimindo a variavel palavra em c++
    cout << "\nA palavra �: "<< palavra;


    printf("\n\n\n");
    system("pause");

    return 0;
}

/*

Esta � a primeira aula que usamos fun�oes de c++

    1 - Bibliotecas para usar string:

        # include <string>
        # include <iostream>

            Usamos a biblioteca string e iostream para usarmos strings em c++

    2 - Usando fun��o para limpar o uso de "std::"

        using namespace std;

            Usamos esta fun��o abaixo das bibliotecas para em vez de escrevermos std::cin/cout/string..,
            apenas escreveremos cin/cout/string, sem o "std::", deixando o c�digo mais limpro.


    3 - An�lisando o c�digo:

        string palavra;
        cout << "Digite uma palavra: ";
        cin >> palavra;
        cout << "\nA palavra �: "<< palavra;


    4 - Detalhando o c�digo:

        A - string palavra;

            Atribui��o da variavel palavra de tipo string.


        B - cout << "Digite uma palavra: ";

            Imprimindo uma instru��o com o uso da funcionalidade "cout <<".


        C - cin >> palavra;

            Leitura da variavel palavra.


        D - cout << "\nA palavra �: "<< palavra;

            Imprimindo um texto e o dado da var 'palavra'.


*/
