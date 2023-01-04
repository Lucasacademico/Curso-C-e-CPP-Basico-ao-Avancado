# include <stdio.h>
# include <stdlib.h>

typedef struct data{
    int dia, mes, ano
}data;

struct aluno{
    int id;
    float nota;
    char nome[255];
    data nascimento;
};

int main(){

    //
    struct aluno aluno1;

    aluno1.id = 23;
    aluno1.nota = 9.9;
    strcpy(aluno1.nome, "Lucas da Rocha Andrade");
    aluno1.nascimento.dia = 05;
    aluno1.nascimento.mes = 10;
    aluno1.nascimento.ano = 1993;

    printf("\nNome: %s", aluno1.nome);
    printf("\nID do Aluno: %d", aluno1.id);
    printf("\nNota: %f", aluno1.nota);
    printf("\nData de nascimento: %d / %d / %d", aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);





    return 0;
}
