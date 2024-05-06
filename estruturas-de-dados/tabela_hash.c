#include <stdio.h>
#include <stdlib.h>

#define TAM 10

typedef struct node {
    int key;
    struct node *prox
} node;

typedef struct {
    node *start;
    int tam;
} List;

void start_list(List *l) {
    l->start = NULL;
    l->tam = 0;
}

void insert_list(List *l, int value) {
    node *new_node = malloc(sizeof(node));

    if(!new_node) {
        printf("Erro: Falha na alocação de memória\n");
    } else {
        new_node->key = value;
        new_node->prox = l->start;
        l->start = new_node;
        l->tam++;
    }
}

int find_list(List *l, int value) {
    node *aux = l->start;

    while(aux && aux->key != value)
        aux = aux->prox;
    
    if(aux)
        return aux->key;

    return EXIT_FAILURE;
}

void print_list(List *l) {
    node *aux = l->start;

    printf(" Tam: %d: ", l->tam);

    while(aux) {
        printf("%d ", aux->key);
        aux = aux->prox;
    }
}

int function_hash(int key) {
    return key % TAM;
}

void start_hash_table(List t[]) {
    int i;

    for(i = 0; i < TAM; i++) 
        start_list(&t[i]);
}

void fill_hash_table(List t[], int value) {
    int id = function_hash(value);

    insert_list(&t[id], value);
}

int find_hash_table(List t[], int key) {
    int id = function_hash(key);

    printf("\nIndice gerada: %d\n", id);

    return find_list(&t[id], key);
}

void print_hash_table(List t[]) {
    for(int i = 0; i < TAM; i++) {
        printf("%2d = ", i);
        print_list(&t[i]);
        printf("\n");
    }
}

int main() {
    int option, value, res;

    List table[TAM];

    start_hash_table(table);

    do{
        printf("\n\t0 - Sair\n\t1 - Inserir\n\t2 - Buscar\n\t3 - Imprimir\n");
        scanf("%d", &option);

        switch(option) {
            case 1:
                printf("\tQual valor deseja inserir? ");
                
                scanf("%d", &value);

                fill_hash_table(table, value);
                break;
            case 2:
                printf("\tQual valor deseja buscar? ");
                
                scanf("%d", &value);
                
                res = find_hash_table(table, value);
                
                if(res != 0)
                    printf("\tValor encontrado: %d\n", res);
                else
                    printf("Valor não encontrado!\n");
                break;
            case 3:
                print_hash_table(table);
            default:
                printf("Opcao invalida!\n");
                break;
        }
    }while(option != 0);
 }