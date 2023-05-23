#include <stdio.h>

#define MAX_M 100
#define MAX_N 100
#define MAX_P 100

void multiplicarMatrizes(float A[][MAX_N], float B[][MAX_P], float C[][MAX_P], int m, int n, int p) {
    int i, j, k;

    // multiplicação matrizes A e B
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int m, n, p;
    float A[MAX_M][MAX_N], B[MAX_N][MAX_P], C[MAX_M][MAX_P];
    int i, j;

    printf("Digite o número de linhas da matriz A: ");
    scanf("%d", &m);
    printf("Digite o número de colunas da matriz A e o número de linhas da matriz B: ");
    scanf("%d", &n);
    printf("Digite o número de colunas da matriz B: ");
    scanf("%d", &p);

    printf("Digite os elementos da matriz A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    printf("Digite os elementos da matriz B:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%f", &B[i][j]);
        }
    }

    // produto das matrizes A e B
    multiplicarMatrizes(A, B, C, m, n, p);

    // matriz resultante C
    printf("Produto da matriz A por B (matriz C):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            printf("%.2f ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
