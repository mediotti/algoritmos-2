#include <stdio.h>
#include <stdlib.h>

//1-	Faça um programa que peça um número e retorne a somatória deste número.

int funcSomar(int n){
    if (n == 1 || n == 0){
        printf(" %d ", n);
        return n;
    }else{
        printf(" %d +", n);
        return funcSomar(n-1) + n;
    }
}

int main (int argc, char **argv){ 
    int n;
    
    printf("\nInsira um numero para que seja feito a somatoria dos seus consecutivos(5+4+3+2+1): ");
    scanf("%d", &n);
    
    n = funcSomar(n);

    printf("\n\nO resultado e: %d", n);

    return 0;
}