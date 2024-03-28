// FIFO

#include <stdio.h>
#include <stdlib.h>

typedef struct NO {
    int data;
    struct NO *next
} NO;

typedef struct QUEUE {
    NO* init;
    NO* fim;
} QUEUE;

void queuing(int dado, QUEUE *q) {
    NO *ptr;
}