#include "first.h"
#include "gtest/gtest.h"
//se puede poner la ruta completa para no usar -isystem

TEST(Factorial, positivos){
  ASSERT_EQ(1,1);
  ASSERT_EQ(120, factorial(5));
  ASSERT_EQ(1, factorial(0));
}

TEST(Factorial, negativos){
  ASSERT_EQ(0, factorial(-5));
}


//g++ -o prueba -isystem ../../../googletest/googletest/include/ Functions.h valueParametrized_test ../gtest_main.a -pthread
