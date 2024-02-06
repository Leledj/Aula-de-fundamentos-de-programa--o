//receba um vetor e retorne um vetor com os elementos rotacionados para a direita

#include<stdio.h>

int main(){
    int n, i, j, aux;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n];
    for(i = 0; i < n; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    aux = vetor[n-1];
    for(i = n-1; i > 0; i--){
        vetor[i] = vetor[i-1];
    }
    vetor[0] = aux;
    printf("Vetor rotacionado: ");
    for(i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}