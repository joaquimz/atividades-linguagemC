 //Média de Notas (Vetores e Funções) EX. 5

#include <stdio.h>

void lerNotas (float notas[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
}

float calcularMedia (float notas[], int tamanho){
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += notas[i];
    }
    return soma / tamanho;
}

int main(){
    float notaFinal = 0;
    int tamanho = 5;
    float notas [5];

    lerNotas (notas, tamanho);
    notaFinal = calcularMedia(notas, tamanho);

    printf("Media final é: %.2f \n", notaFinal);

    return 0;

}