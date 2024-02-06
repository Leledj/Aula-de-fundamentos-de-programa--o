//quantidade de pares de uma matriz 3x3

#include<stdio.h>

int main(){
    int i, j, pares = 0;
    int matriz[3][3];
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(matriz[i][j] % 2 == 0){
                pares++;
            }
        }
    }
    printf("Quantidade de numeros pares da matriz: %d\n", pares);
}