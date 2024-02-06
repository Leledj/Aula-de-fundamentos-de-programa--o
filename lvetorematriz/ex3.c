//Escreva um programa em C que leia uma matriz de números inteiros de tamanho m x n e verifique se ela é simétrica (ou seja, se a matriz é igual à sua transposta).

#include<stdio.h>

int main(){
    int i, j, n, m, simetrica = 1;
    printf("Digite o tamanho da matriz: ");
    scanf("%d %d", &n, &m);
    int matriz[n][m], matriz2[m][n];
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            matriz2[j][i] = matriz[i][j];
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(matriz[i][j] != matriz2[i][j]){
                simetrica = 0;
            }
        }
    }
    if(simetrica == 1){
        printf("Matriz simetrica\n");
    }else{
        printf("Matriz nao simetrica\n");
    }
}