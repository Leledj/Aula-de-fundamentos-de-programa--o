//calcularCombinação

#include <stdio.h>

int main(){
    int n, p, i, j, k, l, m, n_fat, p_fat, np_fat, comb;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de p: ");
    scanf("%d", &p);
    n_fat = 1;
    p_fat = 1;
    np_fat = 1;
    for(i = 1; i <= n; i++){
        n_fat = n_fat * i;
    }
    for(j = 1; j <= p; j++){
        p_fat = p_fat * j;
    }
    for(k = 1; k <= (n-p); k++){
        np_fat = np_fat * k;
    }
    comb = n_fat / (p_fat * np_fat);
    printf("O valor de %d combinado %d eh %d", n, p, comb);
    return 0;
}