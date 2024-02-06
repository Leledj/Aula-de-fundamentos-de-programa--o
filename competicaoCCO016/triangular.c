#include <stdio.h>

int main(){
    int triangular, i, j, n, cont = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        triangular = 0;
        for(j = 1; j <= i; j++){
            triangular += j;
        }
        if(triangular == n){
            printf("Triangular\n");
            cont++;
            break;
        }
    }
}