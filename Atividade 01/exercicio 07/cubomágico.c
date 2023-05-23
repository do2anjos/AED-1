#include <stdio.h>
#include <stdbool.h>

bool is_quadrado_magico(int A[][n], int n) {
    int sum_linha = 0;
    int sum_coluna = 0;
    int sum_diagonal = 0;
    int sum_linha_anterior = 0;
    
    // Verificar soma das linhas, colunas e diagonais
    for (int i = 0; i < n; i++) {
        sum_linha = 0;
        
        for (int j = 0; j < n; j++) {
            sum_linha += A[i][j];
            
            if (i == j) {
                sum_diagonal += A[i][j];
            }
            
            if (i == n - 1 - j) {
                sum_diagonal += A[i][j];
            }
        }
        
        if (sum_linha != sum_linha_anterior && sum_linha_anterior != 0) {
            return false;
        }
        
        sum_coluna += sum_linha;
    }
   
    if (sum_coluna != sum_linha_anterior && sum_linha_anterior != 0) {
        return false;
    }
    
    if (sum_diagonal != sum_linha_anterior && sum_linha_anterior != 0) {
        return false;
    }
    
    return true;
}

int main() {
    int n;
    printf("Digite a ordem da matriz quadrada: ");
    scanf("%d", &n);
    
    int A[n][n];
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    if (is_quadrado_magico(A, n)) {
        printf("A matriz é um quadrado mágico.\n");
    } else {
        printf("A matriz não é um quadrado mágico.\n");
    }
    
    return 0;
}
