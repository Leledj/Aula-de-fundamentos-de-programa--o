#include<stdio.h>

int main(){
    int a, b;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    int *aux;
    aux = &a;
    a = b;
    b = *aux;
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    return 0;
}