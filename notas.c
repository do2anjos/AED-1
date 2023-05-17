int main() {
    float notas[4];
    float soma = 0;
    float media;
    int i;

    for (i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 4;

    printf("A média das notas é: %.2f\n", media);

    return 0;
}
