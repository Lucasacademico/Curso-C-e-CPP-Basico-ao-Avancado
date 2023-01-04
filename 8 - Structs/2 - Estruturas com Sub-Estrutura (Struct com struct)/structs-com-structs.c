# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct Data{
    int dia, mes, ano;
}Data;


struct Aluno{
    int id;
    Data nascimento;
};

int main(){

    // Declarando a variavel struct aluno1
    struct Aluno aluno1;

    // Alocando valores para as variaveis struct
    aluno1.id = 7;
    aluno1.nascimento.dia = 5;
    aluno1.nascimento.mes = 10;
    aluno1.nascimento.ano = 1993;

    // Imprimindo valores
    printf("\nId do Aluno: %d", aluno1.id);
    printf("\nData de nascimento: %d / %d / %d", aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);



    return 0;
}
