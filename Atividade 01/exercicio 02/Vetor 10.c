#include <stdio.h>

int main() {
    float vetor[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite um número real: ");
        scanf("%f", &vetor[i]);
    }

    printf("Os números digitados na ordem inversa são:\n");
    for (i = 9; i >= 0; i--) {
        printf("%f\n", vetor[i]);
    }

    return 0;
}
