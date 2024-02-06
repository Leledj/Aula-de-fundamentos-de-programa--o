#include <stdio.h>

int main(){
    int a,b,c;
    printf("Digite o valor de A: ");
    scanf("%d",&a);
    printf("Digite o valor de B: ");
    scanf("%d",&b);
    printf("Digite o valor de C: ");
    scanf("%d",&c);

    if(a == b && b == c){
        printf("Triangulo Equilatero\n");
    }else if(a == b || b == c || a == c){
        printf("Triangulo Isosceles\n");
    }else{
        printf("Triangulo Escaleno\n");
    }
    return 0;
}