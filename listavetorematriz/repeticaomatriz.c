#include<stdio.h>

int main(){
    int m,n,i,j;
    printf("Digite o numero de linhas: ");
    scanf("%d",&m);
    printf("Digite o numero de colunas: ");
    scanf("%d",&n);
    int matriz[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Digite o valor da posicao [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("\n\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(matriz[i][j]==matriz[i][j+1]){
                printf("O valor %d se repete na linha %d\n",matriz[i][j],i);
            }
        }
    }
    return 0;
}