/*
    Instituição: IFPE campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Luiz Carlos Oliveira Maciel
    Data: 29/02/2024

    Questão 05A
    Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros 
    números naturais que não são múltiplos de 7.
    Ao final, imprima esse vetor na tela.
*/

#include <stdio.h>
#include <stdlib.h>

// Tamanho máximo do vetor
#define MAX_SIZE 100

// Número que vai ser usado na verificação
#define NUM_VERIFY 7

// Função para printar os elementos de um array
void print_array(int array[]) {
    for(char l = 0; l < MAX_SIZE; l++) {
        printf("%d ", array[l]);
    }
}

// Função para inserir no vetor os 100 primeiros números naturais não multiplos de 7
void fill_vector(int numbers[]) {
    int cont = 0;
    int len = 0;

    while(len < MAX_SIZE) {
        if (cont % NUM_VERIFY != 0) {
            numbers[len] = cont; 
            len++;
        }
        cont++;
    }
}

int main() {
    int numbers[MAX_SIZE];

    // Inserindo os dados no vetor
    fill_vector(numbers);

    // Printando o vetor
    print_array(numbers);

    return EXIT_SUCCESS;
}