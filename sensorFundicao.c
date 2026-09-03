//Sensor de Funcição de Metais (Engenharia) EX. 3

#include <stdio.h>

float temperaturas[3] = {25, 62, 110};

float celsiusParaFahrenheit (float celsius){
   float f = celsius * 1.8 + 32;
    return f; 
}

int main (){
    for (int i = 0; i < 3; i++){
        float f = celsiusParaFahrenheit(temperaturas[i]);
        printf("%.2f C = %.2f F\n", temperaturas[i], f);
    }
    return 0;
}