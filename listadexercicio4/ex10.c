//verificar ordenação de um vetor

#include<stdio.h>

int main(){
    int n, i, ordenado = 1;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n];
    for(i = 0; i < n; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < n - 1; i++){
        if(vetor[i] > vetor[i + 1]){
            ordenado = 0;
        }
    }
    if(ordenado){
        printf("O vetor esta ordenado\n");
    }else{
        printf("O vetor nao esta ordenado\n");
    }
}