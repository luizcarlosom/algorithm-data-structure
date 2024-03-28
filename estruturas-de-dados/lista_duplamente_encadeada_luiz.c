#include <stdio.h>
#include <stdlib.h>

// Definindo registro
typedef struct registro {
    int content;
    struct registro *prev;
    struct registro *prox;
} registro;

// Inserindo novos nós na linked list
void append_to_list(registro **linked_list, int data) {
    registro *new_node = (registro*)malloc(sizeof(registro));

    if (new_node == NULL) {
        printf("Erro: Falha na alocação de memória\n");
        exit(EXIT_FAILURE);
    }

    new_node->content = data;
    new_node->prev = NULL;
    new_node->prox = NULL;

    if (*linked_list == NULL) {
        *linked_list = new_node;
    } else {
        registro *last_node = *linked_list;

        while (last_node->prox != NULL) {
            last_node = last_node->prox;
        }
        
        last_node->prox = new_node;
        new_node->prev = last_node;
    }
}

// Função para printar todos os nós da linked list
void print_list(registro *linked_list) {
    registro *temp = linked_list;

    while (temp->prox != NULL) {
        temp = temp->prox;
    }

    while (temp != NULL) {
        printf("%d ", temp->content);
        temp = temp->prev;
    }
}  

int main() {
    registro *linked_list = NULL;

    registro *last_element = NULL;

    append_to_list(&linked_list, 10);
    append_to_list(&linked_list, 20);
    append_to_list(&linked_list, 30);

    print_list(linked_list);

    return EXIT_SUCCESS;
}
