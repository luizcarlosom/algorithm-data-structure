/*
    Instituição: IFPE campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Luiz Carlos Oliveira Maciel
    Data: 20/03/2024

    Questão 18A
    Escreva um programa que recebe uma string S e dois valores inteiros não 
    negativos i e j. Em seguida, imprima os caracteres contidos no segmento que 
    vai de i a j da string S.
*/
#include <stdio.h>
#include <stdlib.h>

// Definindo TAM Max da string
#define MAX 100

// Função que traz apenas os caracteres que estão no intervalo
void split_string(char string[], int i, int j) {
    int cont = j - i;

    for(int k = 0; k <= cont; k++) {
        printf("%c", string[i]);
        i++;
    }
}

int main() {
    char string[MAX];
    
    int i, j;

    scanf("%s\n", string);
    scanf("%d\n", &i);
    scanf("%d", &j);

    split_string(string, i, j);

    return EXIT_SUCCESS;
}