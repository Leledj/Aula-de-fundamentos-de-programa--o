#include <stdio.h>
#include <stdlib.h>

int main(){
    int *aux = (int *) malloc(sizeof(int));
    int a, b;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    
    *aux = a + b;
    printf("A + B = %d\n", *aux);
    free(aux);
    return 0;
}