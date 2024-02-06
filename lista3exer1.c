//inverter numero
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, n1, n2, n3;
    printf("Digite um numero de 3 digitos: ");
    scanf("%d", &n);
    n1 = n/100;
    n2 = (n%100)/10;
    n3 = n%10;
    printf("O numero invertido é: %d%d%d", n3, n2, n1);
    return 0;
}