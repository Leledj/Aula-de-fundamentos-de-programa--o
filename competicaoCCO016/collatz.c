#include<stdio.h>

int main(){
    int num, collatz = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    while(num != 1){
        if(num % 2 == 0){
            num = num / 2;
        }else{
            num = 3 * num + 1;
        }
        collatz = collatz + 1;
    }
    printf("Collatz: %d\n", collatz);
    return 0;
}