#include<stdio.h>

int main(){
    int num1, num2, resto;
    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);
    while(num2 != 0){
        resto = num1 % num2;
        num1 = num2;
        num2 = resto;
    }
    printf("MDC: %d\n", num1);
    return 0;
}