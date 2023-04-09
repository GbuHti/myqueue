#include "queue.h"
#include <stdlib.h>

// 写指针指向下一个要写入的位置, 先写入，后++
// 读指针指向下一个读取的位置，先读取, 后++
// 空判断：读指针 == 写指针 && 上一次是读操作
// 满判断：写指针 == 读指针 && 上一次是写操作
// 
Queue *InitQueue(int size)
{
	Queue *queue = (Queue *)malloc(sizeof(Queue));

	queue->data = (Element *)malloc(sizeof(Element)*size);
    queue->capital = size;
	queue->wptr = 0;
	queue->rptr = 0;
    queue->lastOps = 0; // 0 for read out; 1 for writer in;

    return queue;
}

void FiniQueue(Queue *queue)
{
    if (queue != NULL) {
        if (queue->data != NULL) {
            free(queue->data);
        }
        free(queue);
    }
}

bool Empty(Queue *queue)
{
	return (queue->rptr == queue->wptr) && (queue->lastOps == 0);
}

bool Full(Queue *queue)
{
	return (queue->wptr == queue->rptr) && (queue->lastOps == 1);
}

// 用户在使用入队前，应判断队列是否为满，否则结果未定义
void EnQueue(Queue *queue, Element e)
{
	if(!Full(queue)) {
		queue->data[queue->wptr] = e;	
		queue->wptr = (queue->wptr + 1) % queue->capital;
        queue->lastOps = 1;
	}
}

// 用户在使用出队前，应判断队列是否为空，否则结果未定义
Element DeQueue(Queue *queue)
{
	Element e;
	if (!Empty(queue)) {
		e = queue->data[queue->rptr];
        queue->rptr = (queue->rptr + 1) % queue->capital;
        queue->lastOps = 0;
	}
	return e;
}
