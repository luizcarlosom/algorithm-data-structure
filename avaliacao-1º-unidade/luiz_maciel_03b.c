/*
    Instituição: IFPE campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Luiz Carlos Oliveira Maciel
    Data: 28/02/2024

    Questão 03B
    Faça um programa que preencha um vetor com 10 números reais.
    Em seguida, calcule e mostre na tela a quantidade de números 
    negativos e a soma dos números positivos desse vetor.
*/

#include <stdio.h>
#include <stdlib.h>

// Tamanho máximo do vetor
#define MAX_SIZE 10

// Função para contar quantidade de números negativos
int cont_num_neg(float* numbers) {
    int cont = 0;

    for(char j = 0; j < MAX_SIZE; j++) {
        if (*(numbers+j) < 0) cont++;
    }
    return cont;
}

// Função para somar todos os números positivos
float sum_num_pos(float* numbers) {
    float sum = 0;

    for(char k = 0; k < MAX_SIZE; k++) {
        if (*(numbers+k) >= 0) sum += *(numbers+k);
    }
    return sum;
}

int main() {
    float* numbers = malloc(sizeof(float) * MAX_SIZE);
    
    int quant_neg;

    float sum_pos;

    // Lendo os números que o usuário digitar
    for(char i = 0; i < MAX_SIZE; i++) {
        scanf("%f", numbers+i);
    }

    quant_neg = cont_num_neg(numbers);
    
    sum_pos = sum_num_pos(numbers);

    printf("%d %.2f", quant_neg, sum_pos);

    // Liberando memória alocada dinamicamente
    free(numbers);
    return EXIT_SUCCESS;
}