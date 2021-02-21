#include <stdio.h>

void funcMaiorMenor(float num1, float num2){
    if (num1>num2){
        printf("\nO numero %.2f e maior que %.2f", num1, num2);  
    }
    else if(num2>num1){
        printf("\nO numero %.2f e maior que %.2f", num2, num1);
    }
}
int main(int argc, char **argv){
    float num1, num2;
        printf("\nInsira dois numeros e descubra qual deles e maior: ");
        scanf("%f %f", &num1, &num2);
            funcMaiorMenor(num1, num2);
    return 0;
}