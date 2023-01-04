# include <stdio.h>
# include <locale.h>
# include <string>
# include <iostream>
# include <new>

using namespace std;

//Structs para frutas
struct fruta{
    string cor;
    string nome;
};

int main(){

    setlocale(LC_ALL, "");

    // Criando um ponteiro para o struct criado
    fruta *primeiraFruta = new fruta;

    // modificando valores
    primeiraFruta->cor = "Amarela";
    primeiraFruta->nome = "Banana";

    // Exibindo valores
    cout << "Fruta: " << primeiraFruta->nome << ", Cor: " << primeiraFruta->cor;

    //Criando uma lista de frutas
    fruta *ponteiroListaDeFrutas = new fruta[2];

    // Modificando valores da lista
    ponteiroListaDeFrutas[0].cor = "Vermelho";
    ponteiroListaDeFrutas[1].cor = "Verde";
    ponteiroListaDeFrutas[0].nome = "Maçã";
    ponteiroListaDeFrutas[1].nome = "Pêra";

    // Percorrendo e Exibindo valores da lista
    int cont;
    for(cont = 0; cont < 2; cont++){
       cout << "\nFruta: " << ponteiroListaDeFrutas[cont].nome << ", Cor: " << ponteiroListaDeFrutas[cont].cor;
    }

    return 0;
}


/*
    1 - # include <new> - Importante o uso desta biblioteca para alocação de memoria dinamica dos ponteiros

    2- Criamos um struct com as variaveis

    3 - fruta *primeiraFruta = new fruta; - Criamos um ponteiro para o struct criado

    4 :
        primeiraFruta->cor = "Amarela";
        primeiraFruta->nome = "Banana";

            modificamos os valores da variavel ponteiro

    5
*/
