#include<stdio.h>

int main(){
    int num, fibo = 1, fibo2 = 1, fibo3 = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num == 1){
        printf("1\n");
    }else if(num == 2){
        printf("1\n1\n");
    }else{
        printf("1\n1\n");
        while(num > 2){
            fibo3 = fibo + fibo2;
            fibo = fibo2;
            fibo2 = fibo3;
            num = num - 1;
            printf("%d\n", fibo3);
        }
    }
    return 0;
}