#include <stdio.h>

int main(int argc, char **argv){
    float salarioAntigo, salarioNovo, desvalorizacao;
        printf("\n Informe o seu salario atual: ");
        scanf("%f", &salarioAntigo);
            salarioNovo = (salarioAntigo + (salarioAntigo*(10.67/100)));
            desvalorizacao = salarioNovo - salarioAntigo;
        printf("O seu salario deveria ser reajustado para R$ %.2f, caso isso não aconteca, voce teve uma perda aquisitiva de R$ %.2f", salarioNovo, desvalorizacao);
    return 0;
}