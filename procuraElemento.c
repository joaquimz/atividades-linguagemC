// Procura por elemento (Vetores e Funçoes) EX. 6

#include <stdio.h>

int procuraElemento (int vetor[],int tamanho, int x){
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == x) {
            return i;
        }
    }
    return -1;
}

int main (){
    int vetor [10];
    int x = 0;

    for (int i = 0; i < 10; i++){
        printf("Digite um numero:");
        scanf("%d", &vetor[i]);
    }

    printf("Digite o numero que deseja procurar: ");
    scanf("%d", &x);

    int resultado = procuraElemento(vetor, 10, x);

    if (resultado == -1) {
        printf("Numero nao encontrado!\n");
    } else {
        printf("Numero encontrado na posicao %d!\n", resultado);
    }

    return 0;
}