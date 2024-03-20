/*
    Instituição: IFPE campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Luiz Carlos Oliveira Maciel
    Data: 20/03/2024

    Questão 17B
    Escreva um programa que leia uma string do teclado e converta todos os seus 
    caracteres em maiúscula.
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

// Transformando as letras em maiusculas
char upper_case(char string) {
    switch (string) {
        case 'a':
            return 'A';
        case 'b':
            return 'B';
        case 'c':
            return 'C';
        case 'd':
            return 'D';
        case 'e':
            return 'E';
        case 'f':
            return 'F';
        case 'g':
            return 'G';
        case 'h':
            return 'H';
        case 'i':
            return 'I';
        case 'j':
            return 'J';
        case 'k':
            return 'K';
        case 'l':
            return 'L';
        case 'm':
            return 'M';
        case 'n':
            return 'N';
        case 'o':
            return 'O';
        case 'p':
            return 'P';
        case 'q':
            return 'Q';
        case 'r':
            return 'R';
        case 's':
            return 'S';
        case 't':
            return 'T';
        case 'u':
            return 'U';
        case 'v':
            return 'V';
        case 'w':
            return 'W';
        case 'x':
            return 'X';
        case 'y':
            return 'Y';
        case 'z':
            return 'Z';
        default:
            printf("VALOR INVALIDO!");
    }
}

// Função que varre todo o array verificando se as letras são maiusculas caso não ele transforma
void find_array(char* string) {
    for(int i = 0; i < MAX; i++) {
        if (*(string+i) == 0) break;
        *(string+i) = upper_case(*(string+i));       
    }
}

// Função para printar a string com as vogais trocadas
void print_array(char* string) {
    for(int j = 0; j < MAX; j++) {
        if (*(string+j) == 0) break;

        printf("%c", *(string+j));
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

    find_array(string);

    print_array(string);

    free(string);

    return EXIT_SUCCESS;
}
