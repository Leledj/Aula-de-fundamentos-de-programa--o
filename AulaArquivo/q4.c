//Crie um programa para copiar o conteúdo de um arquivo para outro.

#include<stdio.h>

int main(){
    FILE *arq1, *arq2;
    char nome1[100], nome2[100], c;

    printf("Digite o nome do arquivo de origem: ");
    scanf("%s", nome1);
    printf("Digite o nome do arquivo de destino: ");
    scanf("%s", nome2);

    arq1 = fopen(nome1, "r");
    arq2 = fopen(nome2, "w");

    while((c = fgetc(arq1)) != EOF){
        fputc(c, arq2);
    }

    fclose(arq1);
    fclose(arq2);

    return 0;
}
