#include <stdio.h>
#include <stdlib.h>

//2-Faça um programa que conte de 3 até 0, usando recursividade.

void funcContar(int n){
    if (n>=0){
        printf("%d\n", n);
        funcContar(--n);
    }   
}

int main (int argc, char **argv){ 
    funcContar(3);
    return 0;
}