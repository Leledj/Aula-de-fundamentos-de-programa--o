//um função em C que receba como parâmetro uma matriz quadrada de ordem n e retorne a soma dos elementos da diagonal principal.

#include<stdio.h>

int soma_diagonal(int matriz[][3], int n){
    int i, soma = 0;
    for(i = 0; i < n; i++){
        soma += matriz[i][i];
    }
    return soma;
}

int main(){
    int i, j, n = 3;
    int matriz[3][3];
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Soma da diagonal principal: %d\n", soma_diagonal(matriz, n));
}