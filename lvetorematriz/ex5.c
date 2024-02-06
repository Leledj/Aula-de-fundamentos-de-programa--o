//Escreva um programa em C que receba duas matrizes de números inteiros de tamanho m x n como entrada e calcule a soma das duas matrizes, armazenando o resultado em uma terceira matriz.

#include<stdio.h>

int main(){
    int i, j, n, m;
    printf("Digite o tamanho da matriz: ");
    scanf("%d %d", &n, &m);
    int matriz1[n][m], matriz2[n][m], matriz3[n][m];
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
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    printf("Matriz resultante: \n");
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d ", matriz3[i][j]);
        }
        printf("\n");
    }
}