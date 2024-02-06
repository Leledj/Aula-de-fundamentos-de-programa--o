#include<stdio.h>

int main(){
    int num, fatorial = 1;
    printf("Digite um numero: ");
    scanf("%d", &num);
    while(num > 1){
        fatorial = fatorial * num;
        num = num - 1;
    }
    printf("Fatorial: %d\n", fatorial);
    return 0;
}