#include<stdio.h>

int main(){
    int matriz[3][3], i, j, soma = 0, multiplicacao = 1;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i%2 == 0 && j%2 == 0){
                soma += matriz[i][j];
            }
            else{
                multiplicacao *= matriz[i][j];
            }
        }
    }
    printf("Soma dos elementos das posicoes pares: %d\n", soma);
    printf("Multiplicacao dos elementos das posicoes impares: %d\n", multiplicacao);
    return 0;
}