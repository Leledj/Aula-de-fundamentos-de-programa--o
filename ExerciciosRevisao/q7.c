//Escreva um programa que use funções recursivas para encontrar o n-ésimo termo da sequência de Fibonacci.

#include <stdio.h>

int fibonacci(int n){
    if(n == 1 || n == 2){
        return 1;
    }else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(void){
    int n;
    printf("Digite o n-ésimo termo da sequência de Fibonacci: ");
    scanf("%d", &n);
    printf("O %d-ésimo termo da sequência de Fibonacci é %d\n", n, fibonacci(n));
    return 0;
}