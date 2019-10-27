#include "firstLib/PublicClass.hpp"

#include "gtest/gtest.h"

//#todo add test description
TEST(firstTest, test1){
  auto generator = ::firstLib::PublicClass();
  EXPECT_EQ(generator.generateNumber(), 0);
}

//#todo add test description
TEST(firstTest, test2) {
  auto generator = ::firstLib::PublicClass();
  generator.setGeneratorSeed(3);
  EXPECT_EQ(3, generator.generateNumber());
}

//#todo fix me
TEST(firstTest, test3) {
  EXPECT_FALSE(true);
}
