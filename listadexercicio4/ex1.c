//soma de elementos de vetores

#include<stdio.h>

int main(){
    int n, i, soma = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n];
    for(i = 0; i < n; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < n; i++){
        soma += vetor[i];
    }
    printf("Soma dos elementos do vetor: %d\n", soma);
}