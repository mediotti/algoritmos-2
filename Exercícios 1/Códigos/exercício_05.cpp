#include <stdio.h>
float funcConversao (float temperaturaFahrenheit){
    float temperaturaCelsius;
        temperaturaCelsius = (5*(temperaturaFahrenheit-32))/9;
    return temperaturaCelsius;
}

int main(int argc, char **argv){
    float temperaturaFahrenheit, resultado;
        printf("\nInsira uma temperatura em Fahrenheit e o sistema ira converter para Celsius: ");
        scanf("%f", &temperaturaFahrenheit);
            resultado = funcConversao(temperaturaFahrenheit);
            printf("\nA temperatura em Celsius e: %.2f", resultado);
    return 0;
}