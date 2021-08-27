#include <stdio.h>
#include <stdlib.h>

int fazAlgo(int x, int y){
       if(y == 0){
         return x;
       }else{
         return fazAlgo(y, x % y);
       }
  }


int main() {
    int a,b,res;
    printf("Informe o primeiro inteiro: ");
    scanf("%d",&a);
    printf("Informe o segundo inteiro: ");
    scanf("%d",&b);
    res=fazAlgo(a,b);
    printf("O resultado dos valores %d e %d=%d",a,b,res);
  }
