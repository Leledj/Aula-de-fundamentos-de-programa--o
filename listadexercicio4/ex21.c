//receba um vetor e retorne um vetor contendo os elementos que são palindromos

#include<stdio.h>

int main(){
    int n, i, j, k, l, palindromo = 1;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n], vetor_palindromos[n];
    for(i = 0; i < n; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    k = 0;
    for(i = 0; i < n; i++){
        palindromo = 1;
        for(j = 0; j < n; j++){
            if(vetor[i] != vetor[n-1-i]){
                palindromo = 0;
            }
        }
        if(palindromo == 1){
            vetor_palindromos[k] = vetor[i];
            k++;
        }
    }
    printf("Vetor de palindromos: ");
    for(i = 0; i < k; i++){
        printf("%d ", vetor_palindromos[i]);
    }
    printf("\n");
}