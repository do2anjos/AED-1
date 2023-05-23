#include <stdio.h>

#define NUM_ALUNOS 10

int main() {
    float notas[NUM_ALUNOS][4];
    float medias[NUM_ALUNOS];
    int i, j;
    int count = 0;

    for (i = 0; i < NUM_ALUNOS; i++) {
        float soma = 0;

        for (j = 0; j < 4; j++) {
            printf("Digite a nota %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];
        }

        medias[i] = soma / 4;
    }

    for (i = 0; i < NUM_ALUNOS; i++) {
        if (medias[i] >= 7) {
            count++;
        }
    }

    printf("O número de alunos com média maior ou igual a 7 é: %d\n", count);

    return 0;
}
