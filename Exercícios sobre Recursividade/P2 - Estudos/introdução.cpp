#include <stdio.h>
#include <stdlib.h>

void dizerOi(int n){
    if (n>=1){
        printf("oi!\n");
        dizerOi(n-1);
    }
}

int main (int argc, char** argv){
    dizerOi(5);
    return 0;
}