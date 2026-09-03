//Sistema de Triagem Hospitalar (IMC) EX. 2

#include <stdio.h>


float calcularIMC (float altura, double peso){
   float imc = peso /(altura * altura);
    return imc;
}
int main (){
    double peso;
    float altura;

    printf("Digite seu peso em kg:");
    scanf("%lf", &peso);
    printf("Digite sua altura em metros:");
    scanf("%f", &altura);

    float imc = calcularIMC(altura, peso);
    printf("Seu IMC é: %.2f\n", imc);

    if (imc < 18.5) {
     printf("Voce esta abaixo do peso!\n"); 
    } else if (imc < 24.9){
        printf("Voce esta no seu peso ideal!\n");
    } else {
        printf("Voce esta acima do peso\n");
    }
    
    return 0;
}