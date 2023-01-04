# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string>
# include <iostream>

using namespace std;

int retornaMaisDez(int numero){
    return numero + 10;
}

// Função que adiciona mais dez sobre a variavel através do ponteiro
void aumentaDez(int *numero){
    *numero = *numero + 10;
}

int main(){

    setlocale(LC_ALL, "");

    // Declarando variaveis
    int a = 5;

    // Printa o valor de a
    cout << a;

    // printa 'a' sobre a função de adicionar mais dez
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
    Análise do código:

    1 - Declarando a função ponteiro:

            void aumentaDez(int *numero){
                *numero = *numero + 10;
        }


    2 - Inserindo a função ponteiro sobre uma variavel e imprimindo:

            int = 10

            aumentaDez(&a);
            cout << a;


    Analisando o código:

    - void aumentaDez(int *numero){} - Criamos um função void, inserimos o nome, e criamos um
    parametro de um ponteiro de uma variavel inteira.
    - *numero = *numero + 10; - Dentro da função inserimos que o ponteiro da variavel recebe o ponteiro
    da variavel + 10.

    - int = 10 - Na função principal declaramos uma variavel 'a' inteira, recebendo o valor 10
    - aumentaDez(&a); - atribuimos a função inserindo dentro do parametro a memoria da variavel 'a'.
    - cout << a; - Imprimimos o resultado da função, que neste caso será 20.




*/
