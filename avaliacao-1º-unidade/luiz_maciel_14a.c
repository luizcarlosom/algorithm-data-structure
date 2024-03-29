/*
    Instituição: IFPE campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Luiz Carlos Oliveira Maciel
    Data: 14/03/2024

    Questão 14A
    Faça um programa que leia uma string e a inverta. A string invertida deve ser 
    armazenada na mesma variável. Em seguida, imprima a string invertida.
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

void print_array(char string[], int tam_string) {
    for(int j = (tam_string - 1); j >= 0; j--) {
        printf("%c", string[j]);
    }
}

int main() {
    char string[MAX] = {0};

    scanf("%s", string);

    int tam_string = str_len(string);

    print_array(string, tam_string);

    return EXIT_SUCCESS;
}