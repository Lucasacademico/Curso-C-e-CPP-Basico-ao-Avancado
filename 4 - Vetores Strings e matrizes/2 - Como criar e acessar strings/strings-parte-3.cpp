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

    // Criando uma instrução para um cliente
    cout << "Digite uma palavra: ";

    // Lendo a variavel palavra em c++
    cin >> palavra;

    // Imprimindo a variavel palavra em c++
    cout << "\nA palavra é: "<< palavra;


    printf("\n\n\n");
    system("pause");

    return 0;
}

/*

Esta é a primeira aula que usamos funçoes de c++

    1 - Bibliotecas para usar string:

        # include <string>
        # include <iostream>

            Usamos a biblioteca string e iostream para usarmos strings em c++

    2 - Usando função para limpar o uso de "std::"

        using namespace std;

            Usamos esta função abaixo das bibliotecas para em vez de escrevermos std::cin/cout/string..,
            apenas escreveremos cin/cout/string, sem o "std::", deixando o código mais limpro.


    3 - Análisando o código:

        string palavra;
        cout << "Digite uma palavra: ";
        cin >> palavra;
        cout << "\nA palavra é: "<< palavra;


    4 - Detalhando o código:

        A - string palavra;

            Atribuição da variavel palavra de tipo string.


        B - cout << "Digite uma palavra: ";

            Imprimindo uma instrução com o uso da funcionalidade "cout <<".


        C - cin >> palavra;

            Leitura da variavel palavra.


        D - cout << "\nA palavra é: "<< palavra;

            Imprimindo um texto e o dado da var 'palavra'.


*/
