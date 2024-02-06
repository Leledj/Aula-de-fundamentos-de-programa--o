//Programa de segundo grau
//Autor: CodigoC
//Data: 10/06/2012

#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta, x1, x2;
    
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    
    delta = (b*b) - (4*a*c);
    
    if(delta < 0){
        printf("Nao existe raiz real");
    }else{
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
    
    return 0;
}