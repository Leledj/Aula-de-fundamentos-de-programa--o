#include<stdio.h>

int main(){
    int num, fermat = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    while(num != 1){
        if(num % 2 == 0){
            num = num / 2;
        }else{
            num = 3 * num + 1;
        }
        fermat = fermat + 1;
    }
    printf("Fermat: %d\n", fermat);
    return 0;
}