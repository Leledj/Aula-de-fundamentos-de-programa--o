#include <stdio.h>
#include <stdlib.h>

void main()
{

    printf("Digite um numero\n");
    float a,b;
    float c;
    scanf("%f",&a);
    printf("Digite um numero\n");
    scanf("%f",&b);
    c=a/b;
    printf("Estou divisao os numeros %f e %f. O resultado obtido eh: %.2f\n",a,b,c);

}
