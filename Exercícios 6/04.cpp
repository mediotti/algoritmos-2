#include <stdio.h>
#include <stdlib.h>

void inicializar(int **b){
    *b = (int*)malloc(sizeof(int));
}

int main(int argc, char** argv) {
    int *a;
        inicializar(&a);
        printf("\nDigite um valor: ");
        scanf("%d",a);
        printf("Valor: %d",*a);
    return 0;
}
