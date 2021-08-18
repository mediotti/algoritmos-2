#include <stdlib.h>
#include <stdio.h>

void inicializa(int **a){
    *a = (int*)malloc(2 * sizeof(int));
        **a=3; //Essa linha deve ficar na função de inicialização
        //**(a+1)=5; //Essa linha deve ficar na função de inicialização (DESAFIO!!!)

}

int main (int argc, char** argv){
    int *a;
    inicializa(&a);
	printf("%d\n",*a);
    //printf("%d\n",*(a+1));
	return 0;

}