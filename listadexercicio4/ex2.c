//maior valor de um vetor

#include<stdio.h>

int main(){
    int n, i, maior = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n];
    for(i = 0; i < n; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < n; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    printf("Maior valor do vetor: %d\n", maior);
}