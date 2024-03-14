/*
    Instituição: IFPE campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Luiz Carlos Oliveira Maciel
    Data: 14/03/2024

    Questão 13A
    Faça um programa que leia uma string e imprima as quatro primeiras letras dela.
*/
#include <stdio.h>
#include <stdlib.h>

// TAM MAX String
#define MAX 100

// Contabilizar TAM da string
int str_len(char string[]) {
    int cont = 0;

    for(int i = 0; i < MAX; i++) {
        if (string[i] == 0) break;
        cont++;
    }
    return cont;
}

int main() {
    char string[MAX] = {0};

    scanf("%s", string);

    printf("%d", str_len(string));

    return EXIT_SUCCESS;
}