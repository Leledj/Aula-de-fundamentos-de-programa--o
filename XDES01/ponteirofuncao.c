#include <stdio.h>
#include <stdlib.h>

void soma(int *a, int *b, int *c){
    *c = *a + *b;
}

int main(){
    int a, b, c;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    soma(&a, &b, &c);
    printf("A + B = %d\n", c);
    return 0;
}