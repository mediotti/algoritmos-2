#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <new>
using namespace std;
//2-Faça um programa que peça 4 valores, coloque estes valores em um  vetor global e, calcule a soma de todos os valores. Por fim, faça o cálculo da média. 
//Detalhe: crie um vetor já com os valores definidos para se concentrar no mais importante que é a soma.

float * vetor;

void funcMedia(float soma, int n){
    float media;
    media = soma / n;
    printf("\n\nO resultado da media e: %.2f", media);
    
}

float funcSomar(float vetor[], int n){
    if (n == 0){
        printf(" %f ", vetor[n]);
        return vetor[n-1];
    }else{
        printf(" %f +", vetor[n] );
        return vetor[n-1] + funcSomar(vetor, n-1);
    }
}

int main (int argc, char **argv){ 
    int tam, n;
    
    printf("Quantos numeros deseja adicionar no vetor?: ");
    scanf("%d", &tam);
    vetor = new float [tam];

    for (n=0; n<tam; n++){
      cout << "Insira um numero ";
      cin >> vetor[n];
    }
    
    float soma = funcSomar(vetor, n);
    printf("\n\nO resultado da soma e: %.2f", soma);

    funcMedia(soma, n);

    return 0;
}