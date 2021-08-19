#include <stdio.h>
#include <stdlib.h>

//4-Faça um programa que conte até 6, mas de 2 em 2.

void funcContar(int n){
    if (n>=0){
        funcContar(n-2);
        printf("%d\n", n);
    }   
}

int main (int argc, char **argv){ 
    int n;
    printf("Insira um valor: ");
    scanf("%d", &n);
        if (n%2 == 0){
            funcContar(n);
        }else
            funcContar(n-1);
    return 0;
}