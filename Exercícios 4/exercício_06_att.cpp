#include <stdio.h>
#include <stdlib.h>

void funcConversao (float *temperaturaF, float *temperaturaC){
        *temperaturaC = (5*(*temperaturaF-32))/9;
    printf("\nA temperatura em Fahrenheit e %.2f e em Celsius: %.2f", *temperaturaF, *temperaturaC);
}

void lerNum(float *tempF){
    printf("\nInsira uma temperatura Fahrenheit e o sistema ira converter para Celsius: ");
    scanf("%f", tempF);
}


int main(int argc, char **argv){
    float *temperaturaCelsius, *temperaturaFahrenheit;
        temperaturaFahrenheit = (float*) malloc(sizeof(float));
        temperaturaCelsius = (float*)malloc(sizeof(float));
        lerNum(temperaturaFahrenheit);
        funcConversao(temperaturaFahrenheit, temperaturaCelsius);
    return 0;
}