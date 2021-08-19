#include <stdio.h>
#include <stdlib.h>

//5-Transforme o trecho do-while abaixo em uma função recursiva:

void func(){
    int a;
	printf("\nDigite um numero entre 1 e 3: ");
	scanf("%d",&a);
    
    if(a<1 || a>3){
       printf("\nErrrrou! Tente novamente!");
       func();
    }     
}

int main(int argc, char** argv) {
    func();
    printf("\nTchau");
	return 0;
}