#include "gtest/gtest.h"
#include "Hierarchie.h"

typedef Base* factoryMethod();

Base* instanceWithDefaultConst(){
  return new Child1;
}

Base* instanceWithConstParam(){
  return new Child2();
}
