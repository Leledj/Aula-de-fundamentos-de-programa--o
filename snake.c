//jogo snake

#include <stdio.h>
#include <stdlib.h>


#include <time.h>

#define cima 72
#define baixo 80
#define esquerda 75
#define direita 77

int x, y, comidaX, comidaY, tamanho = 1, fim = 0, pontos = 0, velocidade = 100;
int caldaX[100], caldaY[100];

void gotoxy(int x, int y){
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD){x-1, y-1});
}

void desenhar(){
    system("cls");
    gotoxy(0, 0);
    printf("Pontos: %d", pontos);
    for(int i = 0; i < 80; i++){
        printf("-");
    }
    printf("\n");
    for(int i = 0; i < 20; i++){
        printf("|");
        for(int j = 0; j < 80; j++){
            if(i == y && j == x){
                printf("O");
            }else if(i == comidaY && j == comidaX){
                printf("X");
            }else{
                int printou = 0;
                for(int k = 0; k < tamanho; k++){
                    if(caldaX[k] == j && caldaY[k] == i){
                        printf("o");
                        printou = 1;
                    }
                }
                if(!printou){
                    printf(" ");
                }
            }
        }
        printf("|\n");
    }
    for(int i = 0; i < 80; i++){
        printf("-");
    }
}

void input(){
    if(kbhit()){
        switch(getch()){
            case cima:
                y--;
                break;
            case baixo:
                y++;
                break;
            case esquerda:
                x--;
                break;
            case direita:
                x++;
                break;
            case 'q':
                fim = 1;
                break;
        }
    }
}

void logica(){
    int prevX = caldaX[0];
    int prevY = caldaY[0];
    int prev2X, prev2Y;
    caldaX[0] = x;
    caldaY[0] = y;
    for(int i = 1; i < tamanho; i++){
        prev2X = caldaX[i];
        prev2Y = caldaY[i];
        caldaX[i] = prevX;
        caldaY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    if(x < 0 || x > 79 || y < 0 || y > 19){
        fim = 1;
    }
    for(int i = 0; i < tamanho; i++){
        if(caldaX[i] == x && caldaY[i] == y){
            fim = 1;
        }
    }
    if(x == comidaX && y == comidaY){
        pontos += 10;
        tamanho++;
        comidaX = rand() % 80;
        comidaY = rand() % 20;
    }
}

int main(){
    srand(time(NULL));
    x = 40;
    y = 10;
    comidaX = rand() % 80;
    comidaY = rand() % 20;
    while(!fim){
        desenhar();
        input();
        logica();
        Sleep(velocidade);
    }
    return 0;
}
