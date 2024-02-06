//receba um vetor e encontre o maior elemento

#include<stdio.h>

int main(){
    int i, n, maior;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n];
    for(i = 0; i < n; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    maior = vetor[0];
    for(i = 0; i < n; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    printf("Maior elemento: %d\n", maior);
}