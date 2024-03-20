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

// Função para contar a quantidade de caracteres
int cont_char(char string[]) {
    int cont = 0;

    for(int i = 0; i < MAX; i++) {
        if (string[i] == 0) break;
        cont++;        
    }

    return cont;
}

// Invertendo string
void invert_string(char string[], char inverted_string[], int cont_char) {
    int cont = 0;

    for (int j = (cont_char - 1); j >= 0; j--) {
        inverted_string[cont] = string[j];
        cont++;
    }
}

int main() {
    char string[MAX] = {0};

    scanf("%s", string);

    char inverted_string[cont_char(string)];

    invert_string(string, inverted_string, cont_char(string));

    *string == *inverted_string ? printf("S") : printf("N");

    return EXIT_SUCCESS;
}
