//Checkout de E-commerce (Logística e Vendas) EX. 4

#include <stdio.h>

void calcularTotalPedido (float valorBruto, float *frete, float *valorVenda){
    if (valorBruto > 200.00) {
      *valorVenda = valorBruto - (valorBruto * 0.10);  
    }
    else { 
        *valorVenda = valorBruto;
    }
    if (*valorVenda > 250.00) {
        *frete = 0.0;
    } else {
        *frete = 15.00;
    }
    
}
int main (){
    float bruto, valorFinal, valorFrete;

    printf("Digite o valor bruto da compra: ");
    scanf("%f", &bruto);

    calcularTotalPedido(bruto, &valorFrete,&valorFinal);

    float valorTotal = valorFinal + valorFrete;

    printf("Valor: %.2f\n", valorFinal);
    printf("Custo do frete: %.2f\n", valorFrete);
    printf("Valor Total: %.2f\n", valorTotal);

    return 0;
}