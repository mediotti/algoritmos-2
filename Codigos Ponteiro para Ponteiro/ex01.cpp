#include <stdlib.h>
#include <stdio.h>

void inicializa(int *a){
    *a = 3;
    
}

int main (int argc, char){
    int a;
        inicializa(&a);
        printf("\n%d\n\n", a);
    return 0;
}