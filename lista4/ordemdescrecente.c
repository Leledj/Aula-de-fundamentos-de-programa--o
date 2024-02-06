#include<stdio.h>

int main(){
    int matriz[3][3], matriz2[3][3], i, j, aux;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                for(int l = 0; l < 3; l++){
                    if(matriz[i][j] > matriz[k][l]){
                        aux = matriz[i][j];
                        matriz[i][j] = matriz[k][l];
                        matriz[k][l] = aux;
                    }
                }
            }
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            matriz2[i][j] = matriz[i][j];
        }
    }
    printf("Matriz em ordem decrescente:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }
    return 0;
}