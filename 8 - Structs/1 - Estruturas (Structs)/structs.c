# include <stdio.h>
# include <stdlib.h>
# include <string.h>

struct palavra{
    int ordem;
    char letra;
    char texto[255];
};


int main(){

    //Criando uma variavel struct
    struct palavra primeiraPalavra;

    // Modificando os campos da variavel struct
    primeiraPalavra.ordem = 10;
    primeiraPalavra.letra = 'p';
    strcpy(primeiraPalavra.texto, "Texto Strcpy");

    // Mostrando os valores do struct
    //printf("Ordem: %d, Letra: %c, Palavra: %s ", primeiraPalavra.ordem, primeiraPalavra.letra, primeiraPalavra.texto);
    printf("\nOrdem: %d", primeiraPalavra.ordem);
    printf("\nLetra: %c", primeiraPalavra.letra);
    printf("\nTexto: %s", primeiraPalavra.texto);

    // Criando uma variavel Struct para lista
    struct palavra listaDePalavras[3];

    // Modificando os campos da variavel struct da ORDEM da lista
    listaDePalavras[0].ordem = 0;
    listaDePalavras[1].ordem = 1;
    listaDePalavras[2].ordem = 2;

    // Modificando os campos da variavel struct da LETRA da lista
    listaDePalavras[0].letra = 'a';
    listaDePalavras[1].letra = 'b';
    listaDePalavras[2].letra = 'c';

    // Modificando os campos da variavel struct do TEXTO da lista
    strcpy(listaDePalavras[0].texto, "Texto Strcpy 1");
    strcpy(listaDePalavras[1].texto, "Texto Strcpy 2");
    strcpy(listaDePalavras[2].texto, "Texto Strcpy 3");

    // Declarando variavei cont para vetor da lista struct
    int cont;

    printf("\n\n\n");
    for(cont = 0; cont < 3; cont++){
        printf("\nOrdem: %d", listaDePalavras[cont].ordem);
        printf("\nLetra: %c", listaDePalavras[cont].letra);
        printf("\nTexto: %s", listaDePalavras[cont].texto);
        printf("\n");
    }

    printf("\n\n\n");
    return 0;
}
