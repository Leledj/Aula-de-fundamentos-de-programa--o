#include <stdio.h>

int main(){
    float salario, imposto;
    printf("Digite o salario: ");
    scanf("%f", &salario);
    if(salario <= 1903.98){
        imposto = 0;
    }else if(salario <= 2826.65){
        imposto = salario * 0.075;
    }else if(salario <= 3751.05){
        imposto = salario * 0.15;
    }else if(salario <= 4664.68){
        imposto = salario * 0.225;
    }else{
        imposto = salario * 0.275;
    }
    printf("Imposto: %.2f\n", imposto);
    printf("Salario liquido: %.2f\n", salario - imposto);
    return 0;
}