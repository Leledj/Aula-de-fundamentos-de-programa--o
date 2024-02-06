//Escreva um programa em C que leia uma matriz de números inteiros de tamanho m x n e determine o maior elemento presente em cada linha, armazenando os resultados em um vetor.

#include<stdio.h>

int main(){
    int i, j, n, m;
    printf("Digite o tamanho da matriz: ");
    scanf("%d %d", &n, &m);
    int matriz[n][m], vetor[n], maior;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        maior = matriz[i][0];
        for(j = 0; j < m; j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
        vetor[i] = maior;
    }
    printf("Vetor resultante: \n");
    for(i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}