#include <stdio.h>
#include <stdlib.h>

//1-Faça um programa que conte até 3, usando recursividade.

void funcContar(int n){
    if (n<=3){
        printf("%d\n", n);
        funcContar(++n);
    }   
}

int main (int argc, char **argv){ 
    funcContar(1);
    return 0;
}