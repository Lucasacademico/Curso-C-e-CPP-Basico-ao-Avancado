#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    //Crie um algoritmo que leia 3 notas e calcule a media deles
    //Se o valor for maior que 7 informo que o aluno foi aprovado
    //Se não foi reprovado.

    float nota1, nota2, nota3, media;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if (media >= 7){
        printf("Aluno Aprovado com media: %f", media);
    }
    else{
        printf("Aluno Reprovado com media: %f", media);
    }

    system("pause");
}
