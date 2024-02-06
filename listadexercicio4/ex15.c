//receba um vetor e retorne um vetor com os elementos duplicados

#include<stdio.h>

int main(){
    int n, i, j, k = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n], vetor_duplicado[n*2];
    for(i = 0; i < n; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < n; i++){
        vetor_duplicado[k] = vetor[i];
        k++;
        vetor_duplicado[k] = vetor[i];
        k++;
    }
    printf("Vetor duplicado: ");
    for(i = 0; i < k; i++){
        printf("%d ", vetor_duplicado[i]);
    }
    printf("\n");
}