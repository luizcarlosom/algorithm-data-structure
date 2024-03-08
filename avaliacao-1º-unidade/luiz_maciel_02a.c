/*
    Instituição: IFPE campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Luiz Carlos Oliveira Maciel
    Data: 19/02/2024

    Questão 02A
    Faça um programa que receba do usuário um vetor X com 10 posições.
    Em seguida deverão ser impressos o maior e o menor elemento desse vetor.
*/

#include <stdio.h>
#include <stdlib.h>

// Tamanho máximo do vetor
#define MAX_SIZE 10

// Maior e menor número que cabe em um INT
#define MAX_INT 2147483647
#define MIN_INT -2147483647

// Função que procura o maior número do vetor
int procurar_maior_num(int numeros[]) {
    int maior_num = MIN_INT;

    for(int j = 0; j < MAX_SIZE; j++) {
        if (numeros[j] > maior_num)
            maior_num = numeros[j];
    }   
    return maior_num;
}

// Função que procura o menor número do vetor
int procurar_menor_num(int numeros[]) {
    int menor_num = MAX_INT;

    for(int k = 0; k < MAX_SIZE; k++) {
        if (numeros[k] < menor_num)
            menor_num = numeros[k];
    }   
    return menor_num;
}

int main() {
    int numeros[MAX_SIZE], maior_num, menor_num;

    // Lendo os números que o usuário digitar
    for(int i = 0; i < MAX_SIZE; i++) 
        scanf("%d", &numeros[i]);

    maior_num = procurar_maior_num(numeros);
    menor_num = procurar_menor_num(numeros);

    printf("%d %d", maior_num, menor_num);
    return EXIT_SUCCESS;
}