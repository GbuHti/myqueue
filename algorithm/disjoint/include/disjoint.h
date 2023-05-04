//
// Created by 余振波 on 2023/5/4.
//

#ifndef QUEUE_DISJOINT_H
#define QUEUE_DISJOINT_H

#include <stdint.h>
#include <stdio.h>
typedef int T;


// 初始化
void init(T *fa, size_t len);

// 找到一个元素的父节点
T find(T *fa, T x);


// 将x的父节点置为y
void merge(T *fa, T x, T y);

void displayArr(T *fa, size_t num);

#endif //QUEUE_DISJOINT_H
