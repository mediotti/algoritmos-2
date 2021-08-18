#include <stdlib.h>
#include <stdio.h>
void inicializa(int **b){
    *b = (int*)malloc(sizeof(int));
}

int main (int argc, char){
    int *a;
    inicializa(&a);
	*a=3; //Essa linha deve ficar na função main
	printf("%d",*a);

return 0;
}