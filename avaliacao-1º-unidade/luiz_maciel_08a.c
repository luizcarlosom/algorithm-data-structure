/*
    Instituição: IFPE campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Luiz Carlos Oliveira Maciel
    Data: 07/03/2024

    Questão 08A
    Faça um programa para ler 10 números diferentes a serem armazenados em um vetor. 
    Os números deverão ser armazenados no vetor na ordem em que forem lidos, sendo 
    que, caso o usuário digite um número que já foi digitado anteriormente, o programa
    deverá pedir a ele para digitar outro número.
    Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando
    se ele existe entre os números que já foram fornecidos. Exiba na tela o vetor final 
    que foi digitado. 
*/
#include <stdio.h>
#include <stdlib.h>

// Tamanho máximo do vetor
#define MAX_SIZE 10

// VAR BOOL
#define FALSE 0
#define TRUE 1

// Verificação de valores iguais
int search_repeat_numbers(int number, int numbers[], int len) {
    for (int j = len - 1; j >= 0; j--) {
        if (number == numbers[j]) {
            return TRUE;
        }
    }
    return FALSE;
}

// Função para ler e verificar os elementos de um array
void read_and_verify_array(int array[]) {
    int test_repeat_number;

    for(int i = 0; i < MAX_SIZE; i++) {
        scanf("%d", &array[i]);

        if (i > 0) {
            test_repeat_number = search_repeat_numbers(array[i], array, i);
            
            while(test_repeat_number == TRUE) {
                printf("O numero %d ja existe no array, digite outro: ", array[i]);

                scanf("%d", &array[i]);

                test_repeat_number = search_repeat_numbers(array[i], array, i);
            }
        }
        
    }
}

// Função para printar os elementos de um array
void print_array(int array[]) {
    for(char l = 0; l < MAX_SIZE; l++) {
        printf("%d ", array[l]);
    }
}

int main() {
    int numbers[MAX_SIZE];

    read_and_verify_array(numbers);

    print_array(numbers);
    
    return EXIT_SUCCESS;
}