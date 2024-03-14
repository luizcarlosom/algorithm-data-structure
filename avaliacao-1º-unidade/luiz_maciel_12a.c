/*
    Instituição: IFPE campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Luiz Carlos Oliveira Maciel
    Data: 14/03/2024

    Questão 12A
    Faça um programa que leia uma string e imprima as quatro primeiras letras dela.
*/
#include <stdio.h>
#include <stdlib.h>

// TAM MAX String
#define MAX 100

// TAM MAX print letras
#define MAX_CHAR 4

// Função para printar as 4 primeiros letras do vetor criado
void print_array(char string[]) {
    for(int l = 0; l < MAX_CHAR; l++) {
        printf("%c", string[l]);
    }
}

int main() {
    char string[MAX];

    scanf("%s", string);

    print_array(string);

    return EXIT_SUCCESS;
}