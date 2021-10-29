#include <iostream>
#include "Factorial/factorial.h"
#include "gtest/gtest.h"

using namespace std;

// declarations

TEST(FactorialTest, Positive) {
  EXPECT_EQ(1, factorial(1));
  EXPECT_EQ(2, factorial(2));
  EXPECT_EQ(6, factorial(3));
  EXPECT_EQ(40320, factorial(8));
}

class FooTest : public ::testing::Test {
 protected:

  void FactorialTest(){
     // You can do set-up work for each test here.
  }
};
  
int main(int argc, char* argv[])
{   ::testing::InitGoogleTest(&argc, argv);
    cout << "hello from main!!!" << endl;
    cout << "Factorial value :" << factorial(5) << endl ;
    
    return RUN_ALL_TESTS();

}


