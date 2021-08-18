#include <stdlib.h>
#include <stdio.h>

void inicializa(int **a){
    *a = (int*)malloc(2 * sizeof(int));
}

int main (int argc, char**){
    int *a;
    inicializa(&a);
	*a=3; //Essa linha deve ficar na função main
	*(a+1)=5; //Essa linha deve ficar na função main
	printf("%d\n",*a);
    printf("%d\n",*(a+1));
	return 0;

}