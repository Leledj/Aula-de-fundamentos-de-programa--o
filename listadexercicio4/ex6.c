//media dos valores da matriz 3x3

#include<stdio.h>

int main(){
    int i, j, soma = 0;
    int matriz[3][3];
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            soma += matriz[i][j];
        }
    }
    printf("Media dos valores da matriz: %d\n", soma/9);
}