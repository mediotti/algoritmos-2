#include <stdio.h>
#include <stdlib.h>

//3-Faça um programa que conte até 5, e diga se o número da vez é par ou ímpar.

void funcContar(int n){
    if (n<=5){
        if (n % 2 == 0){
            printf("%d - Par\n", n); 
        } else
        
        if (n % 2 != 0){
            printf("%d - Impar\n", n);
        }
        funcContar(++n);
    }  
}

int main (int argc, char **argv){ 
    funcContar(1);
    return 0;
}