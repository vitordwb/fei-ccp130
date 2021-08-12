/*************************************************************************************************
 * AUTHOR: Vitor Watanabe
 * VISIT: https://github.com/vitordwb/fei-ccp130
 * 
 * 
 * A empresa X resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo: 
 * 
 *                      ------------------------------------------------------
 *                      |           Salário         |       Percentual       |
 *                      |---------------------------|------------------------|
 *                      |        0 - 400.00         |           15%          |
 *                      |     400.01 - 800.00       |           12%          |
 *                      |     800.01 - 1200.00      |           10%          |
 *                      |     1200.01 - 2000.00     |           7%           |
 *                      |     Acima de 2000.00      |           4%           |
 *                      ------------------------------------------------------
 * 
 * Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de reajuste ganho e o
 * índice reajustado, em percentual.
 *************************************************************************************************/

#include <stdio.h>

int main(void) {
    float wage, new_wage, reajust;
    printf("Digite o salário:\n");
    scanf("%f", &wage);

    if(wage <= 400){
        reajust = 15;
        new_wage = wage * (100+reajust)/100;
    }
    else if(wage <= 800){
        reajust = 12;
        new_wage = wage * (100 + reajust)/100;
    }
    else if(wage <= 1200){
        reajust = 10;
        new_wage = wage * (100 + reajust)/100;
    }
    else if(wage <= 2000){
        reajust = 7;
        new_wage = wage * (100 + reajust)/100;
    }
    else{
        reajust = 4;
        new_wage = wage * (100 + reajust)/100;
    }

    printf("Novo salario = %.2f\n", new_wage);
    printf("Valor do reajuste = %.2f\n", new_wage - wage);
    printf("Indice do reajuste = %.0f\n", reajust);

    return 0;
}