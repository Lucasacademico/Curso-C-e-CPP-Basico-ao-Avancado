# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

// Atribuindo a fun��o
char retornaletra();

void main(){

    setlocale(LC_ALL, "");

    // Declarando a variavel
    char letra;

    // Variavel recebe fun��o
    letra = retornaletra();

    // imprimindo a variavel letra
    printf("%c", letra);



    printf("\n\n\n");
    system("pause");
}

// Declarando a fun��o com funcionalidade
char retornaletra(){
    return 120;
    // Na tabela asc2, 120 =  x (em caractere).
}
