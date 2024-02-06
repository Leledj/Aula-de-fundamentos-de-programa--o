//quantidade de numeros pares de um vetor

#include<stdio.h>

int main(){
    int n, i, pares = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n];
    for(i = 0; i < n; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < n; i++){
        if(vetor[i] % 2 == 0){
            pares++;
        }
    }
    printf("Quantidade de numeros pares do vetor: %d\n", pares);
}