#include <stdio.h>

int main(){
    int tabuleiro[3][3];
    int i, j;
    int jogador = 1;
    int linha, coluna;
    int jogadas = 0;
    int ganhou = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            tabuleiro[i][j] = 0;
        }
    }

    while(jogadas < 9 && ganhou == 0){
        printf("Jogador %d, digite a linha e a coluna: ", jogador);
        scanf("%d %d", &linha, &coluna);

        if(tabuleiro[linha][coluna] == 0){
            tabuleiro[linha][coluna] = jogador;
            jogadas++;
            if(jogador == 1){
                jogador = 2;
            }else{
                jogador = 1;
            }
        }else{
            printf("Posicao ja ocupada!\n");
        }

        for(i = 0; i < 3; i++){
            if(tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != 0){
                ganhou = tabuleiro[i][0];
            }
        }

        for(j = 0; j < 3; j++){
            if(tabuleiro[0][j] == tabuleiro[1][j] && tabuleiro[1][j] == tabuleiro[2][j] && tabuleiro[0][j] != 0){
                ganhou = tabuleiro[0][j];
            }
        }

        if(tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != 0){
            ganhou = tabuleiro[0][0];
        }

        if(tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != 0){
            ganhou = tabuleiro[0][2];
        }
        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
    }

    if(ganhou == 0){
        printf("Deu velha!\n");
    }else{
        printf("Jogador %d ganhou!\n", ganhou);
    }

    return 0;
}