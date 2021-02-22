#include <stdio.h>

void funcParImpar(int num){
    if (num%2==0){
        printf("\n %d e um numero par", num);
    }
    else{
        printf("\n %d e um numero impar", num);
    }
}

int main(int argc, char **argv){
    int num;
        printf("\nInsira um numero inteiro para descobrir se ele e par ou impar: ");
        scanf("%d", &num);
            funcParImpar(num);
    return 0;
}