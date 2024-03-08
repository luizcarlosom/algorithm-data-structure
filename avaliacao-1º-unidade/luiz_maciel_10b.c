/*
    Instituição: IFPE campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Luiz Carlos Oliveira Maciel
    Data: 07/03/2024

    Questão 10A
    Leia um vetor com 10 números de ponto flutuante. 
    Em seguida, ordene os elementos desse vetor e 
    imprima o vetor na tela.
*/
#include <stdio.h>
#include <stdlib.h>

// Tamanho máximo do vetor
#define MAX_SIZE 10

// Função para ler os elementos do array
void read_array(float* array) {
    for(int i = 0; i < MAX_SIZE; i++) {
        scanf("%f", array+i);
    }
}

// Função para printar os elementos de um array
void print_array(float* array) {
    for(int l = 0; l < MAX_SIZE; l++) {
        printf("%.1f ", *(array+l));
    }
}

// Bubble sort para ordenar array
void bubble_sort(float* array, int len) {
    int i, j, temp;

    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - i - 1; j++) {
            if (*(array+j) > *(array + j + 1)) {
                temp = *(array+j);
                *(array+j) = *(array + j + 1);
                *(array + j + 1) = temp;
            }
        }
    }
}

int main() {
    float* numbers = (float*) malloc(sizeof(float) * MAX_SIZE);
    
    if (numbers == NULL) {
        printf("Erro na alocação de memória.");
        return EXIT_FAILURE;
    }

    read_array(numbers);

    bubble_sort(numbers, MAX_SIZE);

    print_array(numbers);

    // Liberando memória alocada dinamicamente
    free(numbers);

    return EXIT_SUCCESS;
}