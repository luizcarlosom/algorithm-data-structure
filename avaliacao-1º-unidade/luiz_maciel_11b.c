/*
    Instituição: IFPE campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Luiz Carlos Oliveira Maciel
    Data: 13/03/2024

    Questão 11A
    Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3 × 3 
    de números inteiros. Em seguida, calcule um vetor contendo três posições, em 
    que cada posição deverá armazenar a soma dos números de cada coluna da matriz.
    Exiba na tela esse array.
*/
#include <stdio.h>
#include <stdlib.h>

// TAM MAX Matriz
#define NLINHAS 3
#define NCOLUNAS 3

// Função para ler os dados da matriz
void read_matrix(int** matrix) {
    for(int i = 0; i < NLINHAS; i++) {
        for(int j = 0; j < NCOLUNAS; j++) {
            scanf("%d", (*(matrix+i) + j));
        }
    }
}

// Função para ler os valores de cada coluna
void sum_columns(int** matrix, int* new_vector) {
    for (int cont_column = 0; cont_column < NCOLUNAS; cont_column++) {
        int sum = 0;

        for (int k = 0; k < NLINHAS; k++) {
            sum += (*(matrix + k) + cont_column);
        }

        *(new_vector + cont_column) = sum;
    }
}


// Função para printas o vetor criado
void print_array(int* new_vector) {
    for(int l = 0; l < NCOLUNAS; l++) {
        printf("%d ", *(new_vector + l));
    }
}

int main() {
    int** matrix;

    int* new_vector;

    // Alocando memória para as linhas
    matrix = (int**) malloc(NLINHAS * sizeof(int*));

    // Alocando memória para as colunas
    for(int m < 0; m < NCOLUNAS; m++) {
        *(matrix + m) = (int*) malloc(NCOLUNAS * sizeof(int));
    }

    // Alocando memória para o novo vetor
    new_vector = (int*) malloc(NCOLUNAS * sizeof(int));

    if (matrix == NULL || new_vector == NULL) {
        printf("Erro na alocação de memória.");
        return EXIT_FAILURE;
    }
    
    read_matrix(matrix);

    sum_columns(matrix, new_vector);

    print_array(new_vector);

    return EXIT_SUCCESS;
}