#include <stdio.h>
#include <stdlib.h>

typedef struct NO {
    int data;
    struct NO *next;
} NO;

typedef struct STACK {
    NO *top;
} STACK; 

void init_stack(STACK *s) {
    s->top = NULL;
}

void stack_up(int data, STACK *s) {
    NO *ptr = (NO*)malloc(sizeof(NO));
    if(!ptr) {
        printf("Erro de alocação de mémoria.\n");
    } else {
        ptr->data = data;
        ptr->next = s->top;
        s->top = ptr;
    }
}

int unstack(STACK *p) {
    NO *ptr = p->top;
    if(!ptr) {
        printf("Pilha vazia\n");
    } else {
        p->top = p->top->next;
        ptr->next = NULL;
    }
}

void print_stack(STACK *s) {
    NO *ptr = s->top;
    if(!ptr) {
        printf("Pilha vazia.\n");
    } else {
        while(ptr != NULL) {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}

int main() {
    STACK *s1 = (STACK*)malloc(sizeof(STACK));
    if(!s1) {
        printf("Erro de alocação de mémoria");
        return EXIT_FAILURE;
    }

    init_stack(s1);

    stack_up(10, s1);

    print_stack(s1);

    unstack(s1);

    print_stack(s1);
}