#include <stdio.h>

// Função para trocar dois números inteiros
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Função para ordenar os números de identificação usando o algoritmo Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        // Últimos i elementos já estão ordenados, então não precisamos checar eles
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

// Função para imprimir o array ordenado
void printArray(int arr[], int size) {
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    // Números de identificação dos participantes
    int participantes[] = {135, 42, 789, 23, 567};
    int n = sizeof(participantes)/sizeof(participantes[0]);
    
    printf("Array original:\n");
    printArray(participantes, n);
    
    bubbleSort(participantes, n);
    
    printf("\nArray ordenado:\n");
    printArray(participantes, n);
    
    return 0;
}
