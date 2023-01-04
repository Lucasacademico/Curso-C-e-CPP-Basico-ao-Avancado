# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    //Crie um algoritmo que imprima numeros pares de 10 ao 20
        //usando While, DoWhile, e for.

    int i, x, y;


    for(i = 10; i <= 20; i++){
        if(i % 2 == 0){
            printf("\n%d", i);
        }
    }



    printf("\n\n");
    x = 10;
    do{
        if(x % 2 == 0){
            printf("\n%d", x);
        }
        x++;
    }while(x <= 20);




    printf("\n\n");
    y = 10;
    while(y <= 20){
        if(y % 2 == 0){
            printf("\n%d", y);
        }
        y++;
    }


    printf("\n\n");
    system("pause");
}
