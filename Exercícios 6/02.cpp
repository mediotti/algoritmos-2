#include <stdio.h>
#include <stdlib.h>

void inicializar(double **y){
    *y = (double*) malloc(sizeof(double));
}

int main(int argc, char** argv) {
    double *x;
    inicializar(&x);
    *x = 3.2;
    printf("Valor: %lf",*x);
    
    free(x);
    return 0;
}
