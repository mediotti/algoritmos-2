#include <stdio.h>
#include <stdlib.h>

void inicializar(char **j){
    *j = (char*)malloc(sizeof(char));
}

int main(int argc, char** argv) {
    char *z;
    inicializar(&z);
    *z = 'c';   
    printf("Valor: %c",*z);
    return 0;
}
