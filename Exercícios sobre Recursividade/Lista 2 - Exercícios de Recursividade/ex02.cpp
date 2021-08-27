#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <new>
using namespace std;
//2-Faça um programa que peça 4 valores, coloque estes valores em um  vetor global e, calcule a soma de todos os valores. Por fim, faça o cálculo da média. 
//Detalhe: crie um vetor já com os valores definidos para se concentrar no mais importante que é a soma.

float * vetor;

float FuncSomar(int n){
    if (n == 0){
        printf(" %f ", vetor[0]);
        return vetor[0];
    }else{
        printf(" %f +", vetor[n] );
        return FuncSomar(n-1) + vetor[n];
    }


}

/*float funcSomar(float vetor[], int n){
    if (n == 0){
        printf(" %f ", vetor[0]);
        return vetor[0];
    }else{
        printf(" %f +", vetor[n] );
        return vetor[n-1] + funcSomar(vetor, n-1);
    }
}*/

int main (int argc, char **argv){ 
    int tam, n;
    
    printf("Quantos numeros deseja adicionar no vetor?: ");
    scanf("%d", &tam);
    vetor = new float [tam];

    for (n=0; n<tam; n++){
      cout << "Insira um numero ";
      cin >> vetor[n];
    }
    
    float soma = FuncSomar(n);
    printf("\n\nO resultado da soma e: %.2f", soma);
    printf("\n\nO resultado da media e: %.2f", soma / n);

    return 0;
}