// FIFO

#include <stdio.h>
#include <stdlib.h>

# define TAM 3

typedef struct QUEUE {
    int datas[TAM];
    int end;
} QUEUE;

void init_queue(QUEUE *q) {
    for(int i = 0; i < TAM; i++) {
        q->datas[i] = 0;
    }
    q->end = 0;
}

void queuing(int data, QUEUE *q) {
    if (q->end == TAM) {
        printf("Fila esta cheia\n");
    } else {
        q->datas[q->end] = data;
        q->end++;
    }
}

void dequeuing(QUEUE *q) {
    int dado;
    if (q->end == 0) {
        printf("A fila esta vazia.\n");
    } else {
        dado = q->datas[0];
        for(int i = 0; i < q->end; i++) {
            q->datas[i] = q->datas[i + 1];
        }
        q->end--;
    }
}

void print_queue(QUEUE *q) {
    for(int i = 0; i < q->end; i++) {
        printf("%d\n", q->datas[i]);
    }
}

int main() {
    QUEUE q1;

    init_queue(&q1);

    queuing(10, &q1);
    queuing(20, &q1);
    queuing(30, &q1);   

    print_queue(&q1);

    dequeuing(&q1);
    print_queue(&q1);

    dequeuing(&q1);
    print_queue(&q1);

    dequeuing(&q1);
    print_queue(&q1);

    dequeuing(&q1);
    print_queue(&q1);

    print_queue(&q1);
}