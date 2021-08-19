#include <stdio.h>
#include <stdlib.h>

//5-Transforme o trecho do-while abaixo em uma função recursiva:

void funcOi(){
    int a;
    printf("\nMenu:");
    printf("\n1 - Dizer oi");
    printf("\nOutro numero para sair: ");
    scanf("%d",&a);
    
    if(a == 1){
        printf("\nOi!\n");
        funcOi();
    }       
}

int main(int argc, char** argv) {
    funcOi();
	return 0;
}