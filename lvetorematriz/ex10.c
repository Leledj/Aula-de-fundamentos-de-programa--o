//Escreva uma função em C que receba como parâmetros uma matriz de números inteiros de tamanho m x n e retorne a quantidade de números pares presentes na matriz.

#include<stdio.h>

int conta_pares(int matriz[][3], int n, int m){
    int i, j, cont = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(matriz[i][j] % 2 == 0){
                cont++;
            }
        }
    }
    return cont;
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
    printf("Quantidade de numeros pares na matriz: %d\n", conta_pares(matriz, n, m));
}