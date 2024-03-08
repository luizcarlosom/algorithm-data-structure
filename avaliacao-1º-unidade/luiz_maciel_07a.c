/*
    Instituição: IFPE campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Luiz Carlos Oliveira Maciel
    Data: 07/03/2024

    Questão 07A
    Faça um programa que leia um vetor de 10 posições.
    Verifique se existem valores iguais e os escreva na tela.
*/

#include <stdio.h>
#include <stdlib.h>

// Tamanho máximo do vetor
#define MAX_SIZE 10

// Função para ler os elementos de um array
void read_array(int array[]) {
    for(char i = 0; i < MAX_SIZE; i++) {
        scanf("%d", &array[i]);
    }
}

 // Verificação de valores iguais e impressão na tela
void check_equality_numbers(int numbers[]) {
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (numbers[i] == numbers[j]) {
                printf("%d\n", numbers[i]);
                break;
            }
        }
    }
}

int main() {
    int numbers[MAX_SIZE];

    read_array(numbers);

    check_equality_numbers(numbers);

    return EXIT_SUCCESS;
}

