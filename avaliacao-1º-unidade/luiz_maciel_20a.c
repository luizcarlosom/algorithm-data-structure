/*
    Instituição: IFPE campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Luiz Carlos Oliveira Maciel
    Data: 21/03/2024

    Questão 20A
    O código de César é uma das técnicas de cifragem mais simples e conhecidas. 
    É um tipo de substituição no qual cada letra do texto é substituída por outra, 
    que se apresenta n posições após ela no alfabeto. Por exemplo, com uma troca 
    de três posições, a letra A seria substituída por D, B se tornaria E e assim 
    por diante. Escreva um programa que faça uso desse código de César para três
    posições. Entre com uma string e imprima a string codificada.
*/
#include <stdio.h>
#include <stdlib.h>

// Definindo TAM Max da string
#define MAX 100

#define TAM_ALPHABET 26

// Contabilizar TAM da string
int str_len(char string[]) {
    int cont = 0;

    for(int i = 0; i < MAX; i++) {
        if (string[i] == '\0') break;
        cont++;
    }
    return cont;
}

char handle_overflow_alphabet(char character) {
    switch(character) {
        case 'z':
            return 'c';
        case 'y':
            return 'b';
        case 'x':
            return 'a';
        default:
            printf("STRING NAO RECONHECIDA!");
    }
}

// Codificando string utilizando a sigla de Cesar e printando também
void encode_string(char string[], char alphabet_br[]) {
    int len_string = str_len(string);

    for(int j = 0; j < len_string; j++) {
        char temp;
        for(int k = 0; k < TAM_ALPHABET; k++) {
            if (string[j] == alphabet_br[k]) {
                if (string[j] == 'z' || string[j] == 'y' || string[j] == 'x') {
                    printf("%c", handle_overflow_alphabet(string[j]));
                    break;
                } else {
                    string[j] = alphabet_br[k + 3];
                    printf("%c", string[j]);
                    break;
                }
            }
        }
    }

}

int main() {
    char alphabet_br[TAM_ALPHABET] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 
        'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 
        's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
    };

    char string[MAX];

    scanf("%s", string);

    encode_string(string, alphabet_br);

    return EXIT_SUCCESS;
}