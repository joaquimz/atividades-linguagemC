//Maior Elemento e Posição (Matrizes e Funções) EX. 8

#include <stdio.h>

int encontrarMaior(int matriz[][3], int linhas, int *linha, int *coluna) {
    int maior = matriz[0][0];
    *linha = 0;
    *coluna = 0;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                *linha = i;
                *coluna = j;
            }
        }
    }
    return maior;
}

int main() {
    int matriz[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int linha, coluna;
    int maior = encontrarMaior(matriz, 3, &linha, &coluna);

    printf("Maior valor: %d\n", maior);
    printf("Posicao: linha %d, coluna %d\n", linha, coluna);

    return 0;
}