//Crie um programa que use ponteiros para copiar dados de um array para outro.

#include <stdio.h>

int main(void){
    int i, tam;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tam);
    int array1[tam], array2[tam], *p1, *p2;
    p1 = array1;
    p2 = array2;
    for(i = 0; i < tam; i++){
        printf("Digite o elemento %d do array: ", i + 1);
        scanf("%d", p1);
        p1++;
    }
    p1 = array1;
    for(i = 0; i < tam; i++){
        *p2 = *p1;
        p1++;
        p2++;
    }
    p2 = array2;
    printf("O array copiado é: ");
    for(i = 0; i < tam; i++){
        printf("%d ", *p2);
        p2++;
    }
    printf("\n");
    return 0;
}