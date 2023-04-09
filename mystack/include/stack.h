#ifndef __STACK_H__
#define __STACK_H__

#include <stdbool.h>

typedef int Element;

typedef struct {
    Element *data;
    int sp;
    int capital;
} MyStack;


MyStack* myStackCreate();

void myStackPush(MyStack* obj, Element x);

int myStackPop(MyStack* obj);

int myStackTop(MyStack* obj);

bool myStackEmpty(MyStack* obj);

void myStackFree(MyStack* obj);

#endif