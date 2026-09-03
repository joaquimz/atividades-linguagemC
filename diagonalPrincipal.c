// Diagonal Principal (Matrizes e Funções) EX. 9

#include <stdio.h>

float somaDiagonal(float matriz[][4], int ordem) {
    float soma = 0;
    for (int i = 0; i < ordem; i++) {
        soma += matriz[i][i];
    }
    return soma;
}

int main() {
    float matriz[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    float soma = somaDiagonal(matriz, 4);
    printf("Soma da diagonal principal: %.2f\n", soma);

    return 0;
}