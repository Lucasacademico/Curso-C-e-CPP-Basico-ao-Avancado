# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

void main(){

    char palavra[255];

    printf("Digite uma palavra: ");
    setbuf(stdin, 0);
    fgets(palavra, 255, stdin);

    // limpar o excesso de memória não utilizada pela variavel 'palavra'
    palavra[strlen(palavra) - 1] = '\0';

    printf("\n\n%s", palavra);

    printf("\n\n\n");
    system("pause");
}

/*

    Sempre que escrevemos uma palavra (mesmo que menor do que o tamanho atribuido),
    o ideial é sempre limparmos a memoria, tirando as casas que não vão ser utilizadas.
    Ex:
        [b][a][t][a][t][a][][][][][]......[254][\0];

    Como podemos ver no exemplo, sobrou muita memoria não utilizada. Perceba também
    que na ultima casa o sistema insere na memoria "\0", pois é a maneira que o sistema
    faz para saber que é o fim da memoria.


    Analisando linha de codigo:

        palavra[strlen(palavra) - 1] = '\0';

    Detalhando:
    - palavra[strlen(palavra) - 1] = '\0'; - Atribuimos dentro da variavel 'palavra':
        L strlen: significa tamanho da string

        L strlen(palavra) - atribuimos dentro dos parenteses a variavel que iremos
          manipular.

        L palavra[strlen(palavra) - 1] - Inserimos o '-1' para informar que a memoria
        deve fechar logo após o uso total das palavras, sem necessidade de usar

        L palavra[strlen(palavra) - 1] = '\0'; - por ultimo, igualamos toda a função
        com o fechador da memoria '\0'.



*/
