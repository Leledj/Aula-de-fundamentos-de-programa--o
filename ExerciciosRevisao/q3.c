//Escreva um programa que encontre a transposta de uma matriz nxm.

#include <stdio.h>

int main(){
    int n, m, i, j;
    printf("Digite o numero de linhas e colunas da matriz: ");
    scanf("%d %d", &n, &m);
    int matriz[n][m], transposta[m][n];
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("Digite o elemento da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("A matriz digitada foi:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("A matriz transposta é:\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            transposta[i][j] = matriz[j][i];
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }
    return 0;
}