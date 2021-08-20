#include <stdio.h>
#include <stdlib.h>

//Calcular o fatorial do numero inserido.

int funcSomar(int n){
    if (n == 1 || n == 0){
        printf(" %d ", n);
        return 1;
    }else{
        printf(" %d x", n);
        int res = funcSomar(n-1);
        return res * n;
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