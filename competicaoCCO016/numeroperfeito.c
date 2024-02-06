#include<stdio.h>

int main(){
    int num, i, soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    for(i = 1; i < num; i++){
        if(num % i == 0){
            soma = soma + i;
        }
    }
    if(soma == num){
        printf("O numero %d eh perfeito\n", num);
    }else{
        printf("O numero %d nao eh perfeito\n", num);
    }
    return 0;
}