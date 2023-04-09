#include <stdlib.h>
#include "stack.h"
#define SIZE 10

// 初始化：栈指针指向栈顶
// 入栈：sp指向下一个要写入的位置，先写入 后--
// 出栈：先++ 再读出
MyStack* myStackCreate() {
    MyStack * stack = (MyStack *)malloc(sizeof(MyStack));
    stack->data = (Element *)malloc(sizeof(Element) * SIZE);
    stack->capital = SIZE;
    stack->sp = SIZE - 1;

    return stack;
}

void myStackPush(MyStack* obj, Element x) {
    if (obj->sp == 0) {
        return;
    }
    obj->data[obj->sp] = x;
    obj->sp = obj->sp - 1;
}

Element myStackPop(MyStack* obj) {
    if (obj->sp == obj->capital - 1) {
        return INT32_MAX;
    }
    obj->sp = obj->sp + 1;
    return obj->data[obj->sp];
}

Element myStackTop(MyStack* obj) {
    int tmp = obj->sp;
    return obj->data[tmp + 1];
}

bool myStackEmpty(MyStack* obj) {
    return obj->sp == obj->capital - 1;
}

void myStackFree(MyStack* obj) {
    if (obj != NULL) {
        if (obj->data != NULL) {
            free(obj->data);
        }
        free(obj);
    }
}