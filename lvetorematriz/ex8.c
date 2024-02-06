//Escreva uma função em C que receba como parâmetros uma matriz de números inteiros de tamanho m x n e uma coluna c, e retorne a soma dos elementos presentes na coluna c.

#include<stdio.h>

int soma_coluna(int matriz[][3], int n, int m, int c){
    int i, soma = 0;
    for(i = 0; i < n; i++){
        soma += matriz[i][c];
    }
    return soma;
}

int main(){
    int i, j, n = 3, m = 3, c;
    int matriz[3][3];
    printf("Digite o valor da coluna: ");
    scanf("%d", &c);
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Soma dos elementos da coluna %d: %d\n", c, soma_coluna(matriz, n, m, c));
}