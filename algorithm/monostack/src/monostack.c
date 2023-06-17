#include <stdio.h>
#include "monostack.h"
#include "stack.h"

static void PrintArr(T *arr, int len)
{
    for (int i = 0; i < len; i++) {
        printf("%5d ", i);
    }
    printf("\n");
    for (int i = 0; i < len; i++) {
        printf("%5d ", arr[i]);
    }
    printf("\n\n");
}

void GetMinDistance(T *src, T *dst, int len)
{
    MyStack *stack = MyStackCreate(len);
    PrintArr(src, len);
    MyStackPush(stack, 0);
    for (int i = 1;  i < len; i++) {
        /* 将要入栈的元素会成为栈里面的最大元素, 把比 它指向的值 大的元素出栈 */
        while ((!MyStackEmpty(stack)) && (src[i] < src[MyStackTop(stack)])) {
            int old = MyStackPop(stack);
            dst[old] = i - old;  // 在输出数组中更新
        }
        MyStackPush(stack, i);   // 新入栈
        PrintArr(dst, len);
        PrintStack(stack);
        printf("\n");
    }
    while(!MyStackEmpty(stack)) {
        dst[MyStackPop(stack)] = -1;
    }
    MyStackFree(stack);
}
