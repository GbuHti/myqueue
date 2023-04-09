#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <stdbool.h>

typedef int Element;

typedef struct {
	Element * data;
	int capital;
	int wptr;
	int rptr;
    int lastOps;
} Queue;

Queue *InitQueue(int size);

void FiniQueue(Queue *queue);

void EnQueue(Queue *q, Element e);

Element DeQueue(Queue *queue);

bool Empty(Queue *queue);

bool Full(Queue *queue);

#endif
