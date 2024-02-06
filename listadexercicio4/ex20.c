//matriz mxn e retorne matriz resultante da soma de cada linha com a linha anterior

#include<stdio.h>

int main(){
    int i, j, n, m;
    printf("Digite o tamanho da matriz: ");
    scanf("%d %d", &n, &m);
    int matriz[n][m], matriz2[n][m];
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            matriz2[i][j] = matriz[i][j];
        }
    }
    for(i = 1; i < n; i++){
        for(j = 0; j < m; j++){
            matriz2[i][j] = matriz[i][j] + matriz[i-1][j];
        }
    }
    printf("Matriz resultante: \n");
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }
}