#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <new>
using namespace std;

//4- Faça um programa que peça 4 valores, coloque estes valores em um vetor global e, apresente, no fim, o menor valor do vetor. 
//Detalhe: crie um vetor já com os valores definidos para se concentrar no mais importante que é a soma.

float * vetor;

void preencherVetor(int tam, int n){
    if(n<tam){
        cout << "Insira um numero ";
        cin >> vetor[n];
        n=n+1;
        preencherVetor(tam, n);
    }
}

float funcMenor(int tam, int indice_menor ){
    if(tam == 0){
        return vetor[indice_menor];
    } else{
        if(vetor[tam-1] < vetor[indice_menor]){
            return funcMenor(tam-1, tam-1);
        }else
            return funcMenor(tam-1, indice_menor);
    }
}

int main (int argc, char **argv){ 
    int tam, n;
    
    printf("Quantos numeros deseja adicionar no vetor?: ");
    scanf("%d", &tam);
    vetor = new float [tam];

    //Preenchimento do vetor
    preencherVetor(tam, 0);    
    
    printf("\n\nO menor numero e: %.2f", funcMenor(tam, 0));

    return 0;
}