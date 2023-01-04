# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

bool retornaBooleano();

void main(){


    bool variavel_booleana;

    variavel_booleana = retornaBooleano();

    printf("%d", variavel_booleana);

    if(variavel_booleana){
        printf("\n… verdadeiro");
    }
    else{
        printf("\n… falso");
    }


    printf("\n\n\n");
    system("pause");
}

bool retornaBooleano(){
    return true;
}
