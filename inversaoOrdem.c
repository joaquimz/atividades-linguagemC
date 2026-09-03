//Inversão de Ordem (Vetores e Funções) EX. 7

#include <stdio.h>

void inverterVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho / 2; i++) {
        int temp = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = temp;
    }
}

void imprimirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetor[6];

    for (int i = 0; i < 6; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    printf("Vetor original: ");
    imprimirVetor(vetor, 6);

    inverterVetor(vetor, 6);

    printf("Vetor invertido: ");
    imprimirVetor(vetor, 6);

    return 0;
}