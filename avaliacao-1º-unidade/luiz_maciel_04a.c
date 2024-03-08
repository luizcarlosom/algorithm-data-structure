/*
    Instituição: IFPE campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Luiz Carlos Oliveira Maciel
    Data: 28/02/2024

    Questão 04A
    Faça um programa que receba do usuário dois arrays, A e B, 
    com 10 números inteiros cada.
    Crie um novo array C calculando C = A − B. Mostre na tela 
    os dados do array C.
*/

#include <stdio.h>
#include <stdlib.h>

// Tamanho máximo do vetor
#define MAX_SIZE 10

// Função para printar os elementos de um array
void print_array(int array[]){
    for(char l = 0; l < MAX_SIZE; l++) {
        printf("%d ", array[l]);
    }
}

// Função para subtrair um array do outro
void subtract_arrays(int numbers_a[], int numbers_b[], int numbers_c[]) {
    for(char k = 0; k < MAX_SIZE; k++) {
        numbers_c[k] = numbers_a[k] - numbers_b[k]; 
    }
}

// Função para ler os elementos de um array
void read_array(int array[]) {
    for(char i = 0; i < MAX_SIZE; i++) {
        scanf("%d", &array[i]);
    }
}

int main() {
    int numbers_a[MAX_SIZE]; 
    int numbers_b[MAX_SIZE];
    int numbers_c[MAX_SIZE];

    // Lendo os números para ao primeiro array que o usuário digitar
    read_array(numbers_a);

    // Lendo os números para o segundo array que o usuário digitar
    read_array(numbers_b);

    // Subtraindo arrays
    subtract_arrays(numbers_a, numbers_b, numbers_c);

    // Printando o novo array C
    print_array(numbers_c);

    return EXIT_SUCCESS;
}