#include <stdio.h>

float funcConversaoCelsius (float temperaturaCelsius){
    float temperaturaFahrenheit;
        temperaturaFahrenheit = ((1.8 * temperaturaCelsius) + 32);
    return temperaturaFahrenheit;
}

float funcConversaoFahrenheit (float temperaturaFahrenheit){
    float temperaturaCelsius;
        temperaturaCelsius = (5*(temperaturaFahrenheit-32))/9;
    return temperaturaCelsius;
}

int main(int argc, char **argv){
    int opcao, repetirMenu;
    float temperaturaCelsius, resultado, temperaturaFahrenheit;
    do{
        printf("\n\n1 - CONVERTER UM VALOR DE CELSIUS PARA FAHRENHEIT");
        printf("\n2 - CONVERTER UM VALOR DE FAHRENHEIT PARA CELSIUS");
        printf("\n0 - SAIR\n");
        scanf("%d", &opcao);
            if (opcao == 1){
                float temperaturaCelsius, resultado;
                    printf("\nInsira uma temperatura em Celsius e o sistema ira converter para Fahrenheit: ");
                    scanf("%f", &temperaturaCelsius);
                        resultado = funcConversaoCelsius(temperaturaCelsius);
                    printf("\nA temperatura em Celsius e %.2f e em Fahrenheit e: %.2f", temperaturaCelsius, resultado);
                repetirMenu = 1;
            }
            else if(opcao == 2){
                float temperaturaFahrenheit, resultado;
                    printf("\nInsira uma temperatura em Fahrenheit e o sistema ira converter para Celsius: ");
                    scanf("%f", &temperaturaFahrenheit);
                        resultado = funcConversaoFahrenheit(temperaturaFahrenheit);
                    printf("\n%.2f grau(s) em Fahrenheit sera %.2f grau(s) Celsius.", temperaturaFahrenheit, resultado);
                repetirMenu = 1;
            }
            else if(opcao == 0){
                printf("O PROGRAMA SERA ENCERRADO");
                repetirMenu = 0;
            }
    }while (repetirMenu == 1);
    return 0;
}