# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

// Atribuindo a função
char retornaletra();

void main(){

    setlocale(LC_ALL, "");

    // Declarando a variavel
    char letra;

    // Variavel recebe função
    letra = retornaletra();

    // imprimindo a variavel letra
    printf("%c", letra);



    printf("\n\n\n");
    system("pause");
}

// Declarando a função com funcionalidade
char retornaletra(){
    return 120;
    // Na tabela asc2, 120 =  x (em caractere).
}
