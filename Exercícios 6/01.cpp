#include <stdio.h>
#include <stdlib.h>

void inicializar (int **z){
    *z = (int*)malloc(sizeof(int)); 
}

int main(int argc, char **argv){
    int *p;
        inicializar(&p);
        *p = 5;
        printf("\nValor: %d", *p);
        free(p);
    return 0;
}
