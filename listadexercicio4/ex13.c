//receba uma matriz 3x3 e retorne a soma dos elementos nas posicoes pares e a multiplicacao dos elementos nas posicoes impares

#include<stdio.h>

int main(){
    int i, j, soma = 0, mult = 1;
    int matriz[3][3];
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if((i+j) % 2 == 0){
                soma += matriz[i][j];
            }else{
                mult *= matriz[i][j];
            }
        }
    }
    printf("Soma dos elementos nas posicoes pares: %d\n", soma);
    printf("Multiplicacao dos elementos nas posicoes impares: %d\n", mult);
}