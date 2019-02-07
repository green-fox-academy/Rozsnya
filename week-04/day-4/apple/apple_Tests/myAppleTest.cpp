//
// Created by peter on 2019. 02. 07..
//

#include "gtest/gtest.h"
#include "myApple.h"

TEST(testApple, firstTest)
{
    //Arrange
    myApple apple;

    //Act
    std::string value = apple.getApple();
    //Assert
    ASSERT_EQ(value, "apple");
}
TEST(testApple, secondTest)
{
    //Arrange
    myApple apple;

    //Act
    std::string value = apple.getApple();
    //Assert
    ASSERT_NE(value, "pear");
}