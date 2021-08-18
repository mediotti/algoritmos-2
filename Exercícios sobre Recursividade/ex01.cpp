#include <stdio.h>
#include <stdlib.h>

void funcContar(){
    int n;
    if (n<4){
        funcContar();
        printf("%d", n);
        n = n+1;
    }
    
        
}

int main (int argc, char **argv){ 
    funcContar();
    return 0;
}