//Escreva uma função em C que receba como parâmetros uma matriz de números inteiros de tamanho m x n e retorne a média dos elementos presentes nas colunas pares da matriz.

#include<stdio.h>

float media_colunas_pares(int matriz[][3], int n, int m){
    int i, j, soma = 0, cont = 0;
    float media;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(j % 2 == 0){
                soma += matriz[i][j];
                cont++;
            }
        }
    }
    media = (float)soma / cont;
    return media;
}

int main(){
    int i, j, n = 3, m = 3;
    int matriz[3][3];
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Media das colunas pares: %.2f\n", media_colunas_pares(matriz, n, m));
}