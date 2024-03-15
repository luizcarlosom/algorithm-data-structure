/*
    Instituição: IFPE campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Luiz Carlos Oliveira Maciel
    Data: 14/03/2024

    Questão 14A
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

void string_reverse(char string[], int tam_string) {
    int cont = (tam_string - 1);

    for(int j = 0; j < tam_string; j++) {
        string[j] = string[cont];
        cont--; 
    }
}

void print_array(char string[], int tam_string) {
    for(int k = 0; k < tam_string; k++) {
        printf("%c", string[k]);
    }
}

int main() {
    char string[MAX] = {0};

    scanf("%s", string);

    int tam_string = str_len(string);

    string_reverse(string, tam_string);

    print_array(string, tam_string);

    return EXIT_SUCCESS;
}