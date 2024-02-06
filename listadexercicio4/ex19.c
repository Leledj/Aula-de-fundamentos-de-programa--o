//receba um vetor e retorne um vetor contendo apenas os elementos que ocorrem mais de uma vez

#include<stdio.h>

int main(){
    int n, i, j, k, l, repetido = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n], vetor_repetidos[n];
    for(i = 0; i < n; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    k = 0;
    for(i = 0; i < n; i++){
        repetido = 0;
        for(j = 0; j < n; j++){
            if(vetor[i] == vetor[j] && i != j){
                repetido = 1;
            }
        }
        if(repetido == 1){
            vetor_repetidos[k] = vetor[i];
            k++;
        }
    }
    printf("Vetor de repetidos: ");
    for(i = 0; i < k; i++){
        printf("%d ", vetor_repetidos[i]);
    }
    printf("\n");
}