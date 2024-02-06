//receba uma matriz e retorne o determinante

#include<stdio.h>

int main(){
    int i, j, k, l, n, m, det = 0, aux = 1;
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &n);
    int matriz[n][n];
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            aux = 1;
            for(k = 0; k < n; k++){
                for(l = 0; l < n; l++){
                    if(k != i && l != j){
                        aux *= matriz[k][l];
                    }
                }
            }
            det += aux;
        }
    }
    printf("Determinante: %d\n", det);
}