#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <new>
using namespace std;

//3- Faça um programa que peça 4 valores, coloque estes valores em um vetor global e, apresente, no fim, o maior valor do vetor. 
//Detalhe: crie um vetor já com os valores definidos para se concentrar no mais importante que é a soma.

float * vetor;

float funcMaior(float vetor[], int tam, int indice_maior ){
    if(tam == 0){
        return vetor[indice_maior];
    } else{
        if(vetor[tam-1] > vetor[indice_maior]){
            return funcMaior(vetor, tam-1, tam-1);
        }else
            return funcMaior(vetor, tam-1, indice_maior);
    }
}

int main (int argc, char **argv){ 
    int tam, n;
    
    printf("Quantos numeros deseja adicionar no vetor?: ");
    scanf("%d", &tam);
    vetor = new float [tam];

    //Preenchimento do vetor
    for (n=0; n<tam; n++){
      cout << "Insira um numero ";
      cin >> vetor[n];
    }
    
    printf("\n\nO maior numero e: %.2f", funcMaior(vetor, tam, 0));

    return 0;
}