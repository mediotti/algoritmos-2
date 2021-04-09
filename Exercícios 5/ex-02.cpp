#include <stdio.h>
#include <stdlib.h>
//1-Faça um programa que peça 10 valores e, depois, apresente-os na tela

void apresentarNumeros(float *numero, int i){
    printf("\nOs numeros inseridos foram: ");
        for (i = 0; i < 10; i++){
            printf("%.2f; ", numero[i]);
        }
        
}

void scanNumeros(float *numero, int i){
    printf("Insira 10 valores: ");
        for (i = 0; i < 10; i++){
            scanf("%f", &numero[i]);
        }
}

int main(int argc, char){
    int i;
    float *numero; 
        numero = (float*)malloc(10 * sizeof(float));  //10 são os espaços do vetor 
            scanNumeros(numero, i);
            apresentarNumeros(numero, i);
    return 0;
}