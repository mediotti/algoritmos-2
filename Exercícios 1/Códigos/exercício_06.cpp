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
            printf("\n%.2f grau(s) em Fahrenheit sera %.2f grau(s) Celsius.", temperaturaFahrenheit, resultado);
    return 0;
}