//matriz mxn e retorne matriz com as linhas ordenadas em ordem crescente de acordo com a primeira coluna

#include<stdio.h>

int main(){
    int i, j, k, l, aux, n, m;
    printf("Digite o tamanho da matriz: ");
    scanf("%d %d", &n, &m);
    int matriz[n][m];
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            for(k = 0; k < n; k++){
                for(l = 0; l < m; l++){
                    if(matriz[i][j] < matriz[k][l]){
                        aux = matriz[i][j];
                        matriz[i][j] = matriz[k][l];
                        matriz[k][l] = aux;
                    }
                }
            }
        }
    }
    printf("Matriz ordenada: \n");
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}