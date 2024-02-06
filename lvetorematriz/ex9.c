//Escreva um programa em C que receba duas matrizes de números inteiros de tamanho m x n como entrada e verifique se elas são iguais (ou seja, se todos os elementos das duas matrizes são iguais).

#include<stdio.h>

int main(){
    int i, j, n, m, iguais = 1;
    printf("Digite o tamanho da matriz: ");
    scanf("%d %d", &n, &m);
    int matriz1[n][m], matriz2[n][m];
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("Digite o valor da posicao [%d][%d] da matriz 1: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("Digite o valor da posicao [%d][%d] da matriz 2: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(matriz1[i][j] != matriz2[i][j]){
                iguais = 0;
            }
        }
    }
    if(iguais == 1){
        printf("Matrizes iguais\n");
    }else{
        printf("Matrizes diferentes\n");
    }
}