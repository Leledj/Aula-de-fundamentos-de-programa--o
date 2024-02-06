//retorna o indice do menor valor de um vetor

#include<stdio.h>

int main(){
    int n, i, menor = 0, indice = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n];
    for(i = 0; i < n; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < n; i++){
        if(vetor[i] < menor){
            menor = vetor[i];
            indice = i;
        }
    }
    printf("Menor valor do vetor: %d\n", menor);
    printf("Indice do menor valor do vetor: %d\n", indice);
}