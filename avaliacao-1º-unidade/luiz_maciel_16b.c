/*
    Instituição: IFPE campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Luiz Carlos Oliveira Maciel
    Data: 20/03/2024

    Questão 16A
    Faça um programa que leia uma string e imprima uma mensagem dizendo se ela é
    um palíndromo ou não. Um palíndromo é uma palavra que tem a propriedade de 
    poder ser lida tanto da direita para a esquerda como da esquerda para a 
    direita. Exemplos: ovo, arara, rever, asa, osso etc.
*/
#include <stdio.h>
#include <stdlib.h>

// Definindo TAM Max da string
#define MAX 100

// Preenchendo o vetor todo com 0
void fill_vector(char* string) {
    for(int o = 0; o < MAX; o++) {
        *(string+o) = 0;
    }
}

// Função para contar a quantidade de caracteres
int cont_char(char* string) {
    int cont = 0;

    for(int i = 0; i < MAX; i++) {
        if (*(string+i) == 0) break;
        cont++;        
    }

    return cont;
}

// Invertendo string
void invert_string(char* string, char* inverted_string, int cont_char) {
    int cont = 0;

    for (int j = (cont_char - 1); j >= 0; j--) {
        *(inverted_string+cont) = *(string+j);
        cont++;
    }
}

int main() {
    char* string = (char*)malloc(sizeof(char) * MAX);

    if (!string) {
        printf("Erro na alocação de memória.");
        return EXIT_FAILURE;
    }

    fill_vector(string);

    scanf("%s", string);

    char* inverted_string = (char*)malloc(sizeof(char) * cont_char(string));

    if (!inverted_string) {
        printf("Erro na alocação de memória.");
        return EXIT_FAILURE;
    }

    invert_string(string, inverted_string, cont_char(string));

    *string == *inverted_string ? printf("S") : printf("N");

    free(string);
    free(inverted_string);

    return EXIT_SUCCESS;
}
