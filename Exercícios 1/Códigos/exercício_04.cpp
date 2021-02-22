#include <stdio.h>
float funcConversao (float temperaturaCelsius){
    float temperaturaFahrenheit;
        temperaturaFahrenheit = ((1.8 * temperaturaCelsius) + 32);
    return temperaturaFahrenheit;
}

int main(int argc, char **argv){
    float temperaturaCelsius, resultado;
        printf("\nInsira uma temperatura e o sistema ira converter para Fahrenheit: ");
        scanf("%f", &temperaturaCelsius);
            resultado = funcConversao(temperaturaCelsius);
            printf("\nA temperatura em Celsius e %.2f e em Fahrenheit e: %.2f", temperaturaCelsius, resultado);
    return 0;
}