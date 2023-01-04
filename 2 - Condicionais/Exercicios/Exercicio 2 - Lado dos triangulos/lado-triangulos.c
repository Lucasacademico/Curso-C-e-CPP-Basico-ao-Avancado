#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    //crie um algoritmo e informe 3 valores e informe se eles s�o iguais entre si para
    //formarem os lados do triangulo equilatero

    int lado1, lado2, lado3;

    printf("Digite o lado 1 do tri�ngulo: ");
    scanf("%d", &lado1);

    printf("Digite o lado 2 do tri�ngulo: ");
    scanf("%d", &lado2);

    printf("Digite o lado 3 do tri�ngulo: ");
    scanf("%d", &lado3);

    /*
        -  Maneira simpleso
        if(lado1 == lado2 == lado3){
            printf("O triangulo � equilatero!");
        }
        else{
            printf("O triangulo N�o � equilatero!");
        }
    */

    //maneira mais complexa
    if( (lado1 == lado2) && (lado2 == lado3) ){
        printf("O triangulo � equilatero!");
    }else{
        if((lado1 == lado2) || (lado2 == lado3) || (lado3 == lado1)){
            printf("O triangulo � is�sceles");
        }else{
            printf("O tri�ngulo � escaleno");
        }
    }

    system("pause");
}
