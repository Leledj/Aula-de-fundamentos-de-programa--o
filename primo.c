#include<stdio.h>

int main(){
    int a;
    printf("Digite um numero: ");
    scanf("%d", &a);
    if(a%a == 0 && a%1 == 0){
        printf("O numero %d eh primo", a);
    }else{
        printf("O numero %d nao eh primo", a);
    }
    return 0;
    
}