# include <stdio.h>
# include <stdlib.h>
# include <string.h>

struct palavra{
    int ordem;
    char letra;
    char texto[255];
};


int main(){

    // Declarando variavel que recebe a Struct "palavra"
    struct palavra primeiraPalavra;

    // Declarando valores para a variavel "primeiraPalavra".
    primeiraPalavra.ordem = 0;
    primeiraPalavra.letra = 'z';
    strcpy(primeiraPalavra.texto, "Texto Strcpy 0");

    // Printando valores da variavel struct
    printf("\Ordem: %d", primeiraPalavra.ordem);
    printf("\nLetra: %c", primeiraPalavra.letra);
    printf("\nTexto: %s", primeiraPalavra.texto);

    // Declarando variavel struct para Lista
    struct palavra listaDeInformacao[3];

    listaDeInformacao[0].ordem = 1;
    listaDeInformacao[1].ordem = 2;
    listaDeInformacao[2].ordem = 3;

    listaDeInformacao[0].letra = 'a';
    listaDeInformacao[1].letra = 'b';
    listaDeInformacao[2].letra = 'c';

    strcpy(listaDeInformacao[0].texto, "Texto Strcpy 1");
    strcpy(listaDeInformacao[1].texto, "Texto Strcpy 2");
    strcpy(listaDeInformacao[2].texto, "Texto Strcpy 3");

    int cont;

    for(cont = 0; cont < 3; cont++){
        printf("\nOrdem: %d",  listaDeInformacao[cont].ordem);
        printf("\nLetra: %c",  listaDeInformacao[cont].letra);
        printf("\nTexto: %s",  listaDeInformacao[cont].texto);
        printf("\n");
    }

    return 0;
}
