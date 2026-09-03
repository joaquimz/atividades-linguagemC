//Conversor de Câmbio Viagem (Finanças) EX. 1

#include <stdio.h>

float BRL = 5.19;

float converterDolarParaReal(float USD) {
    float conversao = BRL * USD;
    return conversao;  
}
int main (){
    float USD;
    printf("Digite a quantidade de Dolares (USD) que voce deseja converter:");
    scanf("%f", &USD);
    float c = converterDolarParaReal(USD);

    printf("Valor convertido: %.2f\n",c);
    return 0;
}

