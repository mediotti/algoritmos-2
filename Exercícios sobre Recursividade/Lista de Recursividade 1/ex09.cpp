#include <stdio.h>
#include <stdlib.h>

//5-Transforme o trecho do-while abaixo em uma função recursiva:

void func(int i){
    if(i<4){
        printf("\nE da-lhe %d",i);
        ++i;
        func(i);   
    }
}

int main(int argc, char** argv) {
    int i = 0; 
    func(i);
	return 0;
}