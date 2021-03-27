#include <stdio.h>
#include <stdlib.h>

void scanSalario(float *salarioAntigo){
    printf("\n Informe o seu salario atual: ");
    scanf("%f", salarioAntigo);
}

void calcSalario(float *salarioAntigo, float *salarioNovo){
    *salarioNovo = (*salarioAntigo + (*salarioAntigo*(10.67/100)));
}

void calcDesvalorizacao(float *salarioAntigo, float *salarioNovo, float *desvalorizacao){
        *desvalorizacao = *salarioNovo - *salarioAntigo;
}

int main(int argc, char **argv){
    float *salarioAntigo, *salarioNovo, *desvalorizacao;
    salarioAntigo = (float *) malloc(sizeof(float));
    salarioNovo = (float *) malloc(sizeof(float));
    desvalorizacao = (float *) malloc(sizeof(float));
    
    scanSalario(salarioAntigo);
    calcSalario(salarioAntigo, salarioNovo);
    calcDesvalorizacao(salarioAntigo, salarioNovo, desvalorizacao);
    
    printf("O seu salario deveria ser reajustado para R$ %.2f, caso isso não aconteca, voce teve uma perda aquisitiva de R$ %.2f", *salarioNovo, *desvalorizacao);
    return 0;
}