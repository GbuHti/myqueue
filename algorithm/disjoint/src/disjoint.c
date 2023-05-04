//
// Created by 余振波 on 2023/5/4.
//
#include "disjoint.h"
#include <stdio.h>

// 坐标x:   代表节点
// 值fa[x]: 代表节点的父节点
//T fa[NUM] = {};

// 初始化
void init(T *fa, size_t len)
{
    for (size_t i = 0; i < len; i++) {
        fa[i] = i;
    }
}

// 找到一个元素的父节点
T find(T *fa, T x)
{
    if (fa[x] == x) {
        return x;
    } else {
        return find(fa, fa[x]);
    }
}

// 将x的父节点置为y
void merge(T *fa, T x, T y)
{
    fa[find(fa, x)] = y;
}

void displayArr(T *fa, size_t num)
{
    for (size_t i = 0; i < num; i++) {
        printf("%ld ", i);
    }
    printf("\n");
    for (size_t i = 0; i < num; i++) {
        printf("%d ", fa[i]);
    }
    printf("\n\n");
}