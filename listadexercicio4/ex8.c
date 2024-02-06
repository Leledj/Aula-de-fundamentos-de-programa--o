// receba dois vetores de mesmo tamanho e retorne um vetor com a soma dos elementos de cada posicao

#include<stdio.h>

int main(){
    int n, i;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);
    int vetor1[n], vetor2[n], vetor3[n];
    for(i = 0; i < n; i++){
        printf("Digite o valor da posicao %d do vetor 1: ", i);
        scanf("%d", &vetor1[i]);
    }
    for(i = 0; i < n; i++){
        printf("Digite o valor da posicao %d do vetor 2: ", i);
        scanf("%d", &vetor2[i]);
    }
    for(i = 0; i < n; i++){
        vetor3[i] = vetor1[i] + vetor2[i];
    }
    printf("Vetor 3: ");
    for(i = 0; i < n; i++){
        printf("%d ", vetor3[i]);
    }
    printf("\n");
}