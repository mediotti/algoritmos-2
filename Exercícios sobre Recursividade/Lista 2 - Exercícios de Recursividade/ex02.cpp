#include <stdio.h>
#include <stdlib.h>

//2-Faça um programa que peça 4 valores, coloque estes valores em um  vetor global e, calcule a soma de todos os valores. Por fim, faça o cálculo da média. 
//Detalhe: crie um vetor já com os valores definidos para se concentrar no mais importante que é a soma.

int funcSomar(int n){
    if (n == 1 || n == 0){
        printf(" %d ", n);
        return n;
    }else{
        printf(" %d +", n);
        int res = funcSomar(n-1);
        return res + n;
    }

}

int main (int argc, char **argv){ 
    float v[4] = {3, 5, 9.2, 10};
    
    n = funcSomar(v);

    printf("\n\nO resultado e: %d", n);

    return 0;
}