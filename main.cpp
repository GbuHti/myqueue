/***********************************************
#
#      Filename: main.cpp
#
#        Author: Yu Zhenbo- yzbwcx@gmail.com
#   Description: ---
#        Create: 2023-04-09 15:55:39
# Last Modified: 2023-04-09 15:55:39
***********************************************/
extern "C" {
#include "queue.h"
#include "stack.h"
#include "disjoint.h"
}
#include "gtest/gtest.h"

#define SIZE 10

class QueueTest : public ::testing::Test {
protected:
    void SetUp() override {
        queue_ = InitQueue(SIZE);
        stack_ = myStackCreate();
    }

    void TearDown() override {
        FiniQueue(queue_);
        myStackFree(stack_);
    }

    Queue *queue_;
    MyStack *stack_;
};

TEST_F(QueueTest, test01)
{
    EXPECT_EQ(Empty(queue_), true);
}

TEST_F(QueueTest, test02)
{
    int i = 0;
    for (i = 0; i < SIZE; i++) {
        EnQueue(queue_, i);
    }
    EXPECT_EQ(Full(queue_), true);

    i = 0;
    while(!Empty(queue_)) {
        EXPECT_EQ(DeQueue(queue_), i++);
    }
}

TEST_F(QueueTest, test03)
{
    EXPECT_EQ(myStackEmpty(stack_), true);
}

TEST_F(QueueTest, test04)
{
    int i = 0;
    for (i = 0; i < 8; i++) {
        myStackPush(stack_, i);
    }
    EXPECT_EQ(myStackTop(stack_), --i);
    myStackPop(stack_);
    while (!myStackEmpty(stack_)) {
        EXPECT_EQ(myStackPop(stack_), --i);
    }
    EXPECT_EQ(myStackEmpty(stack_), true);
}

TEST_F(QueueTest, test05_disjoint_basic)
{
    const int NUM = 6;
    int fa[NUM] = {0};
    init(fa, NUM);
    printf("1. init arr\n");
    displayArr(fa, NUM);

    // 避免环状结构, 否则永远循环
    fa[1] = 3;
    fa[3] = 2;
    fa[2] = 5;
    printf("2. set relation\n");
    displayArr(fa, NUM);

    T p = find(fa, 1);
    printf("3. find 1's parent:%d\n", p);

    merge(fa, 1, 4);
    printf("4. merge 1, 4\n");
    displayArr(fa, NUM);

    EXPECT_EQ(find(fa, 1), find(fa, 4));
    EXPECT_NE(find(fa, 0), find(fa, 4));

}

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
