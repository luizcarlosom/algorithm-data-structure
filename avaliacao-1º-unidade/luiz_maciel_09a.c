/*
    Instituição: IFPE campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Luiz Carlos Oliveira Maciel
    Data: 07/03/2024

    Questão 09A
    Faça um programa que calcule o desvio-padrão d de um vetor V contendo n 
    números em que m é a média desse vetor.
    Considere n = 8. O vetor v deve ser lido do teclado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Tamanho máximo do vetor
#define MAX_SIZE 8

// Função para ler os elementos do array
void read_array(int array[]) {
    for(int i = 0; i < MAX_SIZE; i++) {
        scanf("%d", &array[i]);
    }
}

// Função para printar os elementos de um array
void print_array(int array[]) {
    for(int l = 0; l < MAX_SIZE; l++) {
        printf("%d ", array[l]);
    }
}

// Função para calcular a média de um array
int average_array(int array[]) {
    int sum = 0;

    for(int l = 0; l < MAX_SIZE; l++) {
        sum += array[l];
    }

    return sum / MAX_SIZE;
}

// Função para calcular a diferença entre a média e o valor
void difference_between_value_average(int average, int array[]) {
    for(int l = 0; l < MAX_SIZE; l++) {
        array[l] -= average;
    }
}

// Função para elevar a diferença entre o valor e a média ao quadrado
void numbers_squared(int array[]) {
    for(int l = 0; l < MAX_SIZE; l++) {
        array[l] = (array[l] * array[l]);
    }
}

int main() {
    int numbers[MAX_SIZE];

    read_array(numbers);

    int average = average_array(numbers);
    
    difference_between_value_average(average, numbers);

    numbers_squared(numbers);

    int average_squared = average_array(numbers);

    int square_root = sqrt(average_squared);

    printf("%d", square_root);
    
    return EXIT_SUCCESS;
}