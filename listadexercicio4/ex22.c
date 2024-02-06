//matriz mxn e retorne a matriz resultante da transposição seguida da soma da matriz com sua transposta

#include<stdio.h>

int main(){
    int i, j, n, m;
    printf("Digite o tamanho da matriz: ");
    scanf("%d %d", &n, &m);
    int matriz[n][m], matriz2[m][n], matriz3[n][m];
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
            matriz3[i][j] = matriz[i][j] + matriz2[i][j];
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