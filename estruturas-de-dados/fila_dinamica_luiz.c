// FIFO

#include <stdio.h>
#include <stdlib.h>

typedef struct NO {
    int data;
    struct NO *next
} NO;

typedef struct QUEUE {
    NO* init;
    NO* end;
} QUEUE;

void queuing(int data, QUEUE *q) {
    NO *ptr = (NO*)malloc(sizeof(NO));
    if (!ptr) {
        printf("Erro na alocação de memória");
    } else {
        ptr->data = data;
        ptr->next = NULL;
        if(!q->init) {
            q->init = ptr;
        } else {
            q->end->next = ptr;
        }
        q->end = ptr;
    }
}

void dequeuing(QUEUE *q) {
    NO *ptr = q->init;
    if (!ptr) {
        printf("Fila vazia.\n");
    } else {
        q->init = q->init->next;
        ptr->next = NULL;
        free(ptr);
        if (!q->init) {
            q->end = NULL;
        }
    }
}

void print_queue(QUEUE *q) {
    NO *ptr = q->init;
    if (!ptr) {
        printf("Fila vazia.\n");
    } else {
        while(ptr) {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}

void main() {
    QUEUE q1;

    queuing(10, &q1);
    queuing(20, &q1);
    queuing(30, &q1);

    print_queue(&q1);

    dequeuing(&q1);
    print_queue(&q1);
}