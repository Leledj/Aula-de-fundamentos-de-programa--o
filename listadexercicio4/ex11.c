//receba um vetor e retorne um vetor contendo apenas os numeros primos

#include<stdio.h>

int main(){
    int n, i, j, k, primo = 1;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n], vetor_primos[n];
    for(i = 0; i < n; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    k = 0;
    for(i = 0; i < n; i++){
        primo = 1;
        for(j = 2; j < vetor[i]; j++){
            if(vetor[i] % j == 0){
                primo = 0;
            }
        }
        if(primo == 1){
            vetor_primos[k] = vetor[i];
            k++;
        }
    }
    printf("Vetor de primos: ");
    for(i = 0; i < k; i++){
        printf("%d ", vetor_primos[i]);
    }
    printf("\n");
}