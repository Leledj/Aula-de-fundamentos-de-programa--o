#include <stdio.h>
#include <stdlib.h>  

int main() {
    
    int *ptr = (int *)malloc(sizeof(int));

    
    if (ptr == NULL) {
        fprintf(stderr, "Alocação de memória falhou\n");
        exit(EXIT_FAILURE);
    }

    
    *ptr = 42;
    printf("Valor: %d\n", *ptr);

    
    free(ptr);

    return 0;
}
