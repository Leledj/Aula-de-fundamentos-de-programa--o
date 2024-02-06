#include<stdio.h>

int main(){
    int num, soma = 0, num2;
    printf("Digite um numero: ");
    scanf("%d", &num);
    num2 = num;
    while(num != 0){
        soma = soma + (num % 10) * (num % 10) * (num % 10);
        num = num / 10;
    }
    if(soma == num2){
        printf("O numero %d eh amstrong\n", num2);
    }else{
        printf("O numero %d nao eh amstrong\n", num2);
    }
    return 0;
}