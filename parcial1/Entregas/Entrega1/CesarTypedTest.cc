#include "gtest/gtest.h"
#include "Cifrado.h"

template<class instanceType>
class FixTyped: public testing::Test{
public:
  FixTyped(){
    instance2Test = new instanceType;
  }
protected:
  Cifrado* instance2Test;
};

typedef testing::Types<Cesar> implementations;

TYPED_TEST_CASE(FixTyped, implementations);

TYPED_TEST(FixTyped, testName){
  EXPECT_EQ('GARDEN', this->instance2Test->decrypt());
}
