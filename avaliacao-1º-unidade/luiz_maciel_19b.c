/*
    Instituição: IFPE campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Luiz Carlos Oliveira Maciel
    Data: 21/03/2024

    Questão 19B
    Construa um programa que leia duas strings do teclado. Imprima uma mensagem
    informando se a segunda string lida está contida dentro da primeira.
*/
#include <stdio.h>
#include <stdlib.h>

// Definindo TAM Max da string
#define MAX 100

#define FALSE 0
#define TRUE 1

// Contabilizar TAM da string
int str_len(char* string) {
    int cont = 0;

    for(int i = 0; i < MAX; i++) {
        if (*(string+i) == '\0') break;
        cont++;
    }
    return cont;
}

// Função que retorna se é uma substring ou não
int is_substring(char* string_one, char* string_two) {
    int tam_string_one = str_len(string_one);
    int tam_string_two = str_len(string_two);

    int validator = FALSE;
    int cont = 1;

    for (int j = 0; j < tam_string_one; j++) {
        int temp = j;

        if (*(string_one+j) == *(string_two)) {
            for(int k = 1; k < tam_string_two; k++) {
                temp++;
                
                if (*(string_two+k) == *(string_one+temp)) {
                    validator = TRUE;
                    cont++;
                } else {
                    validator = FALSE;
                    break;
                }
            }
            if (validator = TRUE && cont == tam_string_two) {
                return TRUE;
            }
        }
    }
}

int main() {
    char* string_one = (char*)malloc(sizeof(char) * MAX);
    char* string_two = (char*)malloc(sizeof(char) * MAX);

    if (!string_one || !string_two) {
        printf("Erro na alocação de memória.");
        return EXIT_FAILURE;
    }

    scanf("%s", string_one);
    scanf("%s", string_two);

    is_substring(string_one, string_two) == TRUE ? printf("S") : printf("N"); 

    free(string_one);
    free(string_two);

    return EXIT_SUCCESS;
}