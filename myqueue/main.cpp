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
}
#include "gtest/gtest.h"

#define SIZE 10

class QueueTest : public ::testing::Test {
protected:
    void SetUp() override {
        queue_ = InitQueue(SIZE);
    }

    void TearDown() override {
        FiniQueue(queue_);
    }

    Queue *queue_;
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

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
