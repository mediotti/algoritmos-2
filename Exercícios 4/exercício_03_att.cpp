#include <stdio.h>
#include <stdlib.h>

void funcConversao (float *temperaturaC, float *temperaturaF){
        *temperaturaF = ((1.8 * *temperaturaC) + 32);
    printf("\nA temperatura em Fahrenheit: %f", *temperaturaF);
}

void lerNum(float *tempC){
    printf("\nInsira uma temperatura em Celsius e o sistema ira converter para Fahrenheit: ");
    scanf("%f", tempC);
}


int main(int argc, char **argv){
    float *temperaturaCelsius, *temperaturaFahrenheit;
        temperaturaFahrenheit = (float*) malloc(sizeof(float));
        temperaturaCelsius = (float*)malloc(sizeof(float));
        lerNum(temperaturaCelsius);
        funcConversao(temperaturaCelsius, temperaturaFahrenheit);
    return 0;
}