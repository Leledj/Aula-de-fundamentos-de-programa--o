//maior valor de uma matriz 3x3

#include<stdio.h>

int main(){
    int i, j, maior = 0;
    int matriz[3][3];
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
    }
    printf("Maior valor da matriz: %d\n", maior);
}