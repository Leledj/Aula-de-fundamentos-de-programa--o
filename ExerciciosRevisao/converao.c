#include<stdio.h>

float converter(float valor, float cambio){
    return valor * cambio;
}

int main(){
    float valor, cambio;
    char moeda[100];

    printf("Digite o valor em reais: ");
    scanf("%f", &valor);
    printf("Digite o valor do cambio: ");
    scanf("%f", &cambio);
    printf("Digite a moeda: ");
    scanf("%s", moeda);

    printf("O valor em dolares eh: %.2f\n", converter(valor, cambio));

    return 0;
}