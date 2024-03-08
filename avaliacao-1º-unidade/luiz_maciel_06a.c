/*
    Instituição: IFPE campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Luiz Carlos Oliveira Maciel
    Data: 06/03/2024

    Questão 06A
    Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, 
    calcule o quadrado de cada elemento desse vetor armazenando esse 
    resultado em outro vetor.
    Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos 
    de números.
*/

#include <stdio.h>
#include <stdlib.h>

// Tamanho máximo do vetor
#define MAX_SIZE 20

// Função para ler os elementos de um array
void read_array(int array[]) {
    for(char i = 0; i < MAX_SIZE; i++) {
        scanf("%d", &array[i]);
    }
}

// Função para elevar um único número ao quadrado
int number_squared(int number) {
    return number * number;
}

// Função que vai varrer o array elevando todos o números ao quadrado
void square_all_numbers(int array[]) {
    for(char j = 0; j < MAX_SIZE; j++) {
        array[j] = number_squared(array[j]);
        
        printf("%d ", array[j]);
    }
}

int main() {
    int numbers[MAX_SIZE];

    read_array(numbers);

    square_all_numbers(numbers);

    return EXIT_SUCCESS;
}