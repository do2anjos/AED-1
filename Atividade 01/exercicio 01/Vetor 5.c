#include <stdio.h>

int main() {
    int vetor[5];
    int i;

    // Loop para ler os 5 números e adicioná-los ao vetor
    for (i = 0; i < 5; i++) {
        printf("Digite um número inteiro: ");
        scanf("%d", &vetor[i]);
    }


    printf("Os números digitados foram:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}
