#include<stdio.h>

int main(){
    int num, binario, resto, i = 1;
    printf("Digite um numero: ");
    scanf("%d", &num);
    while(num != 0){
        resto = num % 2;
        num = num / 2;
        binario = binario + resto * i;
        i = i * 10;
    }
    printf("Binario: %d\n", binario);
    return 0;
}