#include <stdio.h>
#include <stdlib.h>

void funcConversaoCelsius (float *temperaturaCelsius, float *resultado){
    *resultado = ((1.8 * *temperaturaCelsius) + 32);
}

float funcConversaoFahrenheit (float *temperaturaFahrenheit, float *resultado){
    *resultado = (5*(*temperaturaFahrenheit-32))/9;
}

int main(int argc, char **argv){
    int opcao, repetirMenu;
    float *resultado;
    resultado = (float *) malloc(sizeof(float));
    
    do{
        printf("\n\n1 - CONVERTER UM VALOR DE CELSIUS PARA FAHRENHEIT");
        printf("\n2 - CONVERTER UM VALOR DE FAHRENHEIT PARA CELSIUS");
        printf("\n0 - SAIR\n");
        scanf("%d", &opcao);
            
            if (opcao == 1){
                float *temperaturaCelsius;
                temperaturaCelsius = (float*) malloc(sizeof(float));
                    printf("\nInsira uma temperatura em Celsius e o sistema ira converter para Fahrenheit: ");
                    scanf("%f", temperaturaCelsius);
                    funcConversaoCelsius(temperaturaCelsius, resultado);
                    printf("\nA temperatura em Celsius e %.2f e em Fahrenheit e: %.2f", *temperaturaCelsius, *resultado);
                repetirMenu = 1;
            }
            
            else if(opcao == 2){
                float *temperaturaFahrenheit;
                temperaturaFahrenheit = (float*) malloc(sizeof(float));
                    printf("\nInsira uma temperatura em Fahrenheit e o sistema ira converter para Celsius: ");
                    scanf("%f", temperaturaFahrenheit);
                    funcConversaoFahrenheit(temperaturaFahrenheit, resultado);
                    printf("\n%.2f grau(s) em Fahrenheit sera %.2f grau(s) Celsius.", *temperaturaFahrenheit, *resultado);
                repetirMenu = 1;
            }
            
            else if(opcao == 0){
                printf("O PROGRAMA SERA ENCERRADO");
                repetirMenu = 0;
            }    
    }while (repetirMenu == 1);
    return 0;
}