/*
    Instituição: IFPE campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Luiz Carlos Oliveira Maciel
    Data: 19/02/2024

    Questão 01B
    Escreva um programa que leia do teclado um vetor de 10 posições.
    Escreva na tela quantos valores pares foram armazenados nesse vetor
*/

#include <stdio.h>
#include <stdlib.h>

// Tamanho máximo do vetor
#define MAX_SIZE 10

// Função para contar a quantidade de números pares
int contar_pares(int numeros[]) {
    int cont = 0;

    for(int j=0; j < MAX_SIZE; j++) {
        if (*(numeros+j) % 2 == 0) 
            cont++;
    }
    return cont;
}

int main() {
    // Alocando dinamicamente memória
    int* numeros = malloc(sizeof(int) * MAX_SIZE);

    // Lendo os números que o usuário digitar
    for(int i = 0; i < MAX_SIZE; i++) 
        scanf("%d", numeros+i);

    int quant_pares = contar_pares(numeros);

    printf("%d", quant_pares);

    // Liberando memória alocada dinamicamente
    free(numeros);
    return EXIT_SUCCESS;
}