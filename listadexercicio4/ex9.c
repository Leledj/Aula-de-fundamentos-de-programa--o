//matriz 3x3 e mostre quantidade de vezes que o valor aparece na matriz

#include<stdio.h>

int main(){
    int i, j, valor, vezes = 0;
    int matriz[3][3];
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Digite o valor a ser procurado: ");
    scanf("%d", &valor);
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(matriz[i][j] == valor){
                vezes++;
            }
        }
    }
    printf("O valor %d aparece %d vezes na matriz\n", valor, vezes);
}