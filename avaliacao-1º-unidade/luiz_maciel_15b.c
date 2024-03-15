/*
    Instituição: IFPE campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Luiz Carlos Oliveira Maciel
    Data: 15/03/2024

    Questão 15B
    Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. 
    Entre com um caractere (vogal ou consoante) e substitua todas as vogais da 
    palavra dada por esse caractere. Ao final, imprima a nova string e o número
    de vogais que ela possui.
*/
#include <stdio.h>
#include <stdlib.h>

// Definindo TAM Max da string e do array de vogais
#define MAX 100
#define MAX_VOG 5

// Preenchendo o vetor todo com 0
void fill_vector(char* string) {
    for(int o = 0; o < MAX; o++) {
        *(string+o) = 0;
    }
}

// Função para contabilizar a quantidade de vogais
int cont_vog(char* string) {
    int cont_vog = 0;
    char* vogs;
    
    vogs = (char*) malloc(sizeof(char) * MAX_VOG);

    if (!vogs) {
        printf("Erro na alocação de memória.");
        return EXIT_FAILURE;
    }

    vogs[0] = 'a';
    vogs[1] = 'e';
    vogs[2] = 'i';
    vogs[3] = 'o';
    vogs[4] = 'u';
    
    for(int i = 0; i < MAX; i++) {
        if (*(string+i) == 0) break;

        for(int l = 0; l < MAX_VOG; l++) {
            if (*(vogs+l) == *(string+i))
                cont_vog++;
        }
    }

    return cont_vog;
}

// Função para trocar as vogais pelo char escolhido pelo usuario
int replace_vog(char* string, char* vog_replace) {
    char* vogs;
    
    vogs = (char*) malloc(sizeof(char) * MAX_VOG);

    if (!vogs) {
        printf("Erro na alocação de memória.");
        return EXIT_FAILURE;
    }

    vogs[0] = 'a';
    vogs[1] = 'e';
    vogs[2] = 'i';
    vogs[3] = 'o';

    for(int m = 0; m < MAX; m++) {
        if (*(string+m) == 0) break;

        for(int n = 0; n < MAX_VOG; n++) {
            if (*(vogs+n) == *(string+m))
                *(string+m) = *(vog_replace);
        }
    }
}

// Função para printar a string com as vogais trocadas
void print_array(char* string) {
    for(int j = 0; j < MAX; j++) {
        if (string[j] == 0) break;

        printf("%c", string[j]);
    }
}

int main() {
    char* string;
    char* vog_replace;

    string = (char*) malloc(sizeof(char) * MAX);

    vog_replace = (char*) malloc(sizeof(char) + 1);

    if (!string || !vog_replace) {
        printf("Erro na alocação de memória.");
        return EXIT_FAILURE;
    }

    printf("Digite uma string: ");
    scanf("%s", string);

    printf("Numero de vogais: %d\n", cont_vog(string));

    printf("Digite um caractere para substituir vogais: ");
    scanf(" %c", vog_replace);

    replace_vog(string, vog_replace);

    printf("Nova string: ");
    print_array(string);

    free(string);

    return EXIT_SUCCESS;
}
