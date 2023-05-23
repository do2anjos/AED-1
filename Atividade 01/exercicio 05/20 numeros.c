#include <stdio.h>

#define TAMANHO_VETOR 20

int main() {
    int numeros[TAMANHO_VETOR];
    int par[TAMANHO_VETOR];
    int impar[TAMANHO_VETOR];
    int i, j = 0, k = 0;

    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("Digite o número inteiro %d: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            par[j] = numeros[i];
            j++;
        } else {
            impar[k] = numeros[i];
            k++;
        }
    }

    printf("Vetor de números inteiros:\n");
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    printf("Vetor de números pares:\n");
    for (i = 0; i < j; i++) {
        printf("%d ", par[i]);
    }
    printf("\n");

    printf("Vetor de números ímpares:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", impar[i]);
    }
    printf("\n");

    return 0;
}
