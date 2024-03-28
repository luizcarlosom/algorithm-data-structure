//LIFO

#include <stdio.h>
#include <stdlib.h>

#define TAM 10

typedef struct STACK {
    int data[TAM];
    int top;
} STACK;

void init_stack(STACK *p1) {
    for(int i = 0; i < TAM; i++) {
        p1->data[i] = 0;
    }
    p1->top = 0;
}

void stack_up(STACK *p1, int data) {
    if (p1->top == TAM) {
        printf("A pilha está cheia!\n");
        return;
    } else {
        p1->data[p1->top] = data;
        p1->top++;
        return;
    }
}

int unstack(STACK *p1) {
    int temp;

    if (p1->top == 0) {
        printf("A pilha esta vazia\n");
    } else {
        p1->top--;
        temp = p1->data[p1->top];
        printf("Numero retirado da pilha: %d\n", temp);
        return p1->data[p1->top];
    }
}

void print_stack(STACK *p1) {
    for(int j = 0; j < p1->top; j++) {
        printf("Numero: %d\n", p1->data[j]);
    }
    return;
}

int main() {
    STACK p1;

    init_stack(&p1);

    stack_up(&p1, 1);
    stack_up(&p1, 2);
    stack_up(&p1, 3);
    stack_up(&p1, 4);
    stack_up(&p1, 5);
    stack_up(&p1, 6);
    stack_up(&p1, 7);
    stack_up(&p1, 8);
    stack_up(&p1, 9);
    stack_up(&p1, 10);

    print_stack(&p1);

    unstack(&p1);
    unstack(&p1);
    
    return EXIT_SUCCESS;
}