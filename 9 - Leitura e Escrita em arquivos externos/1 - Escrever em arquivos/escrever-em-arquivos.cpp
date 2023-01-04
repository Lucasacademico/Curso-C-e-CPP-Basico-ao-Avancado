# include <stdio.h>
# include <string.h>
# include <fstream>

using namespace std;

int main(){

    // Criando o objeto de arquivo
    ofstream arquivoDeSaida;

    // Abre o arquivo ou Cria caso não exista
    arquivoDeSaida.open("Texto.txt", std::ios_base::app);

    // Escrever no arquivo criado
    arquivoDeSaida << "Exemplo de texto";

    // Fecha o arquivo de saida
    arquivoDeSaida.close();

    return 0;
}
