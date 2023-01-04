# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <string>
# include <fstream>
# include <iostream>

using namespace std;

int main(){

    int c;
    char conteudoTexto[255];

    FILE *file;

    file = fopen("Texto.txt", "r");

    if(file){

        // Contador
        int cont = 0;

        while((c = getc(file)) != EOF){
            printf("%c", c);

            //Meu vetor de char recebe a letra atual
            conteudoTexto[cont] = c;

            // Aumenta a contagem de letras
            cont++;
        }
        fclose(file);
    }
    int cont = 0;
    for(cont = 0; cont < strlen(conteudoTexto) - 1; cont++){
        printf("%c", conteudoTexto[cont]);
    }

    return 0;
}
