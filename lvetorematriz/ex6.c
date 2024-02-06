//Escreva uma função em C que receba como parâmetros uma matriz de números inteiros de tamanho m x n e um número inteiro x, e retorne a quantidade de vezes que x aparece na matriz.

#include<stdio.h>

int conta_x(int matriz[][3], int n, int m, int x){
    int i, j, cont = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(matriz[i][j] == x){
                cont++;
            }
        }
    }
    return cont;
}

int main(){
    int i, j, n = 3, m = 3, x;
    int matriz[3][3];
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Quantidade de vezes que %d aparece na matriz: %d\n", x, conta_x(matriz, n, m, x));
}