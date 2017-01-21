#include "gtest/gtest.h"
#include "Hierarchie.h"

typedef Base* factoryMethod();

Base* instance1(){
  return new Child1;
}

Base* instance2(){
  return new Child2;
}

template<int parameter>
Base* instanceWithConstParam(){
  return new Child3(parameter);
}

class Fixure: public testing::TestWithParam<factoryMethod*>{
protected:
  Base* instance2Test;
public:
  void SetUp(){
    instance2Test = (*GetParam())();
  }
  void TearDown(){
    delete instance2Test;
    instance2Test = NULL;
  }
};

TEST_P(Fixure, testName){
  this->instance2Test->doSomething();
}

INSTANTIATE_TEST_CASE_P(CaseName, Fixure, testing::Values(&instance1, &instance2, &instanceWithConstParam<10>));
