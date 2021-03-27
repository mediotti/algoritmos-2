#include <stdio.h>
#include <stdlib.h>

void funcMaiorMenor(float *numA, float *numB){
    if (numA>numB){
        printf("\nO numero %f e maior que %f", *numA, *numB);  
    }
    else if(numB>numA){
        printf("\nO numero %f e maior que %f", *numB, *numA);
    }
}

void lerNum(float *numA, float *numB){
    printf("\nInsira dois numeros e descubra qual deles e maior: ");
    scanf("%f %f", numA, numB);
}

int main(int argc, char **argv){
    float *num1, *num2;
    num1 = (float *) malloc(sizeof(float));
    num2 = (float *) malloc(sizeof(float));
        lerNum(num1, num2);
        funcMaiorMenor(num1, num2);
    return 0;
}