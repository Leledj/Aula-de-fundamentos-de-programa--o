#include <stdio.h>

int main(){
    int primo, i, num;
    scanf("%d", &num);
    primo = 1;
    for(i = 2; i < num; i++){
        if(num % i == 0){
            primo = 0;
            break;
        }
    }
    if(primo == 1){
        printf("Primo\n");
    }else{
        printf("Nao primo\n");
    }
    return 0;
}