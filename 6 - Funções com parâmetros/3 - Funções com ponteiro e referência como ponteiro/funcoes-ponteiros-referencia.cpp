# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string>
# include <iostream>

using namespace std;

int retornaMaisDez(int numero){
    return numero + 10;
}

// Fun��o que adiciona mais dez sobre a variavel atrav�s do ponteiro
void aumentaDez(int *numero){
    *numero = *numero + 10;
}

int main(){

    setlocale(LC_ALL, "");

    // Declarando variaveis
    int a = 5;

    // Printa o valor de a
    cout << a;

    // printa 'a' sobre a fun��o de adicionar mais dez
    a = retornaMaisDez(a);
    cout << "\n" << a;

    // printa 'a' que adiciona mais dez sobre o ponteiro.
    aumentaDez(&a);
    cout << "\n" << a;



    cout << "\n\n\n";
    system("pause");
    return 0;
}

/*
    An�lise do c�digo:

    1 - Declarando a fun��o ponteiro:

            void aumentaDez(int *numero){
                *numero = *numero + 10;
        }


    2 - Inserindo a fun��o ponteiro sobre uma variavel e imprimindo:

            int = 10

            aumentaDez(&a);
            cout << a;


    Analisando o c�digo:

    - void aumentaDez(int *numero){} - Criamos um fun��o void, inserimos o nome, e criamos um
    parametro de um ponteiro de uma variavel inteira.
    - *numero = *numero + 10; - Dentro da fun��o inserimos que o ponteiro da variavel recebe o ponteiro
    da variavel + 10.

    - int = 10 - Na fun��o principal declaramos uma variavel 'a' inteira, recebendo o valor 10
    - aumentaDez(&a); - atribuimos a fun��o inserindo dentro do parametro a memoria da variavel 'a'.
    - cout << a; - Imprimimos o resultado da fun��o, que neste caso ser� 20.




*/
