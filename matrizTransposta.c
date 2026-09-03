// Matriz Transposta (Matrizes e Funções) EX. 10

#include <stdio.h>

void transpor(int A[][2], int B[][3], int linhasA, int colunasA) {
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasA; j++) {
            B[j][i] = A[i][j];
        }
    }
}

void imprimirMatriz(int m[][2], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[3][2];
    int B[2][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite o valor A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    transpor(A, B, 3, 2);

    printf("Matriz A (3x2):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("Matriz B - transposta (2x3):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}