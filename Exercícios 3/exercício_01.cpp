#include <stdio.h>

void calcularQuadrado(int valor, int *quadrado){
    *quadrado =  valor * valor;
}


int main(int argc, char **argv){
    int valor;
    int quadrado;

    printf("\nInsira um numero");
    scanf("%d", &valor);

    calcularQuadrado(valor, &quadrado);

    printf("\n%d ao quadrado = %d", valor, quadrado);

    return 0;
}