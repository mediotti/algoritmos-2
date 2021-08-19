#include <stdio.h>
#include <stdlib.h>

void dizerOi(int i){
    if(i<4){
        printf("Oi!\n");
        dizerOi(++i);
    }      
}

int main (int argc, char **argv){ 
    dizerOi(1);
    return 0;
}