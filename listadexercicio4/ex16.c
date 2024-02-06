//receba matriz de inteiros mxn e verifique se ela é simétrica

#include<stdio.h>

int main(){
    int i, j, n, m, simetrica = 1;
    printf("Digite o tamanho da matriz: ");
    scanf("%d %d", &n, &m);
    int matriz[n][m];
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(matriz[i][j] != matriz[j][i]){
                simetrica = 0;
            }
        }
    }
    if(simetrica == 1){
        printf("A matriz eh simetrica\n");
    }else{
        printf("A matriz nao eh simetrica\n");
    }
}