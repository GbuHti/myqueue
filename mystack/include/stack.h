#ifndef __STACK_H__
#define __STACK_H__

#include <stdbool.h>

typedef int Element;

typedef struct {
    Element *data;
    int sp;
    int capital;
} MyStack;


MyStack *MyStackCreate(int capital);

void MyStackPush(MyStack* obj, Element x);

int MyStackPop(MyStack* obj);

/* 注意：栈先判空，不为空再调用此方法 */
int MyStackTop(MyStack* obj);

bool MyStackEmpty(MyStack* obj);

void MyStackFree(MyStack* obj);

void PrintStack(MyStack *stack);
#endif