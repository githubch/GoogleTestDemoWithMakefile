#include "../src/myheader/test1.h"
#include "gtest/gtest.h"

TEST(TestA, test_fact){
   TestA* result =  new TestA();
   EXPECT_EQ(3, result->sum(1, 2));
}

int main(int argc, char ** argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
