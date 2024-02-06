#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void process_data(int *data, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        data[i] = i;
    }
}

int main() {
    size_t num_datasets = 10;
    size_t dataset_size = 1000000;

    clock_t start_with_free = clock();  

    for (size_t i = 0; i < num_datasets; ++i) {
        int *data = (int *)malloc(dataset_size * sizeof(int));
        if (data == NULL) {
            fprintf(stderr, "Alocação de memória falhou\n");
            exit(EXIT_FAILURE);
        }
        process_data(data, dataset_size);
        free(data);
    }

    clock_t end_with_free = clock();  

    printf("Tempo de execução com free: %f segundos\n", (double)(end_with_free - start_with_free) / CLOCKS_PER_SEC);

    clock_t start_without_free = clock(); 

    for (size_t i = 0; i < num_datasets; ++i) {
        int *data = (int *)malloc(dataset_size * sizeof(int));
        if (data == NULL) {
            fprintf(stderr, "Alocação de memória falhou\n");
            exit(EXIT_FAILURE);
        }
        process_data(data, dataset_size);
        // Sem free
    }

    clock_t end_without_free = clock();  

    printf("Tempo de execução sem free: %f segundos\n", (double)(end_without_free - start_without_free) / CLOCKS_PER_SEC);

    return 0;
}
