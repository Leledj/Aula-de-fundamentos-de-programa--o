#include<stdio.h>

int main(){
    int num, soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    while(num != 1 && num != 4){
        int soma = 0;
        while(num != 0){
            soma = soma + (num % 10) * (num % 10);
            num = num / 10;
        }
        num = soma;
    }
    if(num == 1){
        printf("O numero eh feliz\n");
    }else{
        printf("O numero nao eh feliz\n");
    }
    return 0;
}