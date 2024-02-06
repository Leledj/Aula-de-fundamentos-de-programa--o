//Crie um programa em C para listar todos os arquivos de um diretório específico.

#include <stdio.h>
#include <dirent.h>

int main() {
    struct dirent *de;  // Ponteiro para a entrada do diretório

    // opendir() retorna um ponteiro de DIR. 
    DIR *dr = opendir("."); 

    if (dr == NULL)  // se não conseguimos abrir o diretório
    {
        printf("Não foi possível abrir o diretório atual" );
        return 0;
    }

    // para readdir()
    while ((de = readdir(dr)) != NULL)
            printf("%s\n", de->d_name);

    closedir(dr);    
    return 0;
}