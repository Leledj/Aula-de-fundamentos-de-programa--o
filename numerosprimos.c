#include<stdio.h>

int main(){
    int num, i, cont = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    for(i = 1; i <= num; i++){
        if(num % i == 0){
            cont++;
        }
    }
    return 0;
}