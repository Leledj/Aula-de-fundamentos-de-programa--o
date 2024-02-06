#include <stdio.h>

int main() {

    int options[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("%d\n\n\n", options[8]);



    char response;
    do {
        printf("Have you already made up your mind? (Y/N) ");
        scanf(" %c", &response);

        if(response == 'Y') {
            printf("Let's start\n");
        } else if(response == 'N') {
            printf("So make up your mind!\n");
        } else {
            printf("%c is not an answer\n", response);
        }
    } while(response != 'Y');
}