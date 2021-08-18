#include <stdlib.h>
#include <stdio.h>

void inicializa(int **a){
	*a = (int*)malloc(sizeof(int));
	**a=3; //agora essa atribuição também deve ser colocada na função de inicialização.

}

int main (int argc, char**){
    int *a;
    inicializa(&a);
	printf("%d",*a);
	return 0;

}