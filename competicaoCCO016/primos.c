#include <stdio.h>

int main(){
    int primo, i, j, n, cont = 0;
    scanf("%d", &n);
    for(i = 2; i <= n; i++){
        primo = 1;
        for(j = 2; j < i; j++){
            if(i % j == 0){
                primo = 0;
                break;
            }
        }
        if(primo == 1){
            printf("%d\n", i);
            cont++;
        }
    }
    return 0;
}