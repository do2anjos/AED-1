#include <stdio.h>

struct dma
{
    int dia;
    int mes;
    int ano;
};

int calcularDiasDecorridos(struct dma data1, struct dma data2)
{
    int dias1 = data1.dia + data1.mes * 30 + data1.ano * 365;
    int dias2 = data2.dia + data2.mes * 30 + data2.ano * 365;

    return dias2 - dias1;
}

int main()
{
    struct dma data1, data2;

    printf("Digite a primeira data (dia, mês, ano): ");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);

    printf("Digite a segunda data (dia, mês, ano): ");
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

    int diasDecorridos = calcularDiasDecorridos(data1, data2);

    printf("O número de dias decorridos entre as duas datas é: %d\n", diasDecorridos);

    return 0;
}
