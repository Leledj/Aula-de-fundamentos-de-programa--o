//Desenvolva um programa que verifique se uma string é palíndromo.

#include <stdio.h>
#include <string.h>

int main(void){
    char palavra[100];
    int i, j, tam, palindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tam = strlen(palavra);

    for(i = 0, j = tam - 1; i < tam / 2; i++, j--){
        if(palavra[i] != palavra[j]){
            palindromo = 0;
            break;
        }
    }

    if(palindromo){
        printf("A palavra %s é palindromo\n", palavra);
    }else{
        printf("A palavra %s não é palindromo\n", palavra);
    }

    return 0;
}