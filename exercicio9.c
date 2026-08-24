#include <stdio.h>
#include <stdint.h>

#define MAX_ALUNOS 40
#define NOTA_MINIMA 6.0
#define CURSO "ADS"

typedef struct {
    char nome[50];
    uint8_t idade;
    int32_t nota;
} Aluno;

int main() {

    Aluno aluno = {"Tiago", 18, 8};

    printf("Curso: %s\n", CURSO);
    printf("Nome: %s\n", aluno.nome);
    printf("Idade: %u anos\n", aluno.idade);
    printf("Nota: %d\n", aluno.nota);
    printf("Maximo de alunos: %d\n", MAX_ALUNOS);

    if (aluno.nota >= NOTA_MINIMA) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado!\n");
    }

    return 0;
}
