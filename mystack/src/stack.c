#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "stack.h"


// 初始化：栈指针指向栈顶
// 入栈：sp指向下一个要写入的位置，先写入 后--
// 出栈：先++ 再读出
MyStack *MyStackCreate(int capital) {
    MyStack * stack = (MyStack *)malloc(sizeof(MyStack));
    stack->data = (Element *)malloc(sizeof(Element) * capital);
    memset(stack->data, 0, capital*sizeof(Element));
    stack->capital = capital;
    stack->sp = capital - 1;

    return stack;
}

void MyStackPush(MyStack* obj, Element x) {
    if (obj->sp == 0) {
        return;
    }
    obj->data[obj->sp] = x;
    obj->sp = obj->sp - 1;
}

Element MyStackPop(MyStack* obj) {
    if (obj->sp == obj->capital - 1) {
        return INT32_MAX;
    }
    obj->sp = obj->sp + 1;
    return obj->data[obj->sp];
}

Element MyStackTop(MyStack* obj) {
    int tmp = obj->sp;
    return obj->data[tmp + 1];
}

bool MyStackEmpty(MyStack* obj) {
    return obj->sp == obj->capital - 1;
}

void MyStackFree(MyStack* obj) {
    if (obj != NULL) {
        if (obj->data != NULL) {
            free(obj->data);
        }
        free(obj);
    }
}

void PrintStack(MyStack *stack)
{
    for (int i = stack->capital - 1; i >=0; i--) {
        printf("%5d ", stack->data[i]);
    }
    printf("\n");
}