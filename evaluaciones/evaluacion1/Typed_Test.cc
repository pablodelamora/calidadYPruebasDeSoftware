#include "gtest/gtest.h"
#include "Ordenamiento.cc"

template<class instanceType>
class FixTyped: public testing::Test{
public:
  FixTyped(){
    instance2Test = new instanceType;
  }
protected:
  Ordenamiento<int>* instance2Test;
};

typedef testing::Types<Ordenamiento<int>> implementations;

TYPED_TEST_CASE(FixTyped, implementations);

TYPED_TEST(FixTyped, testName){
  int vec[]={5,3,8,2,9,6,1,4,7};
  this->instance2Test->burbuja(vec,10,Ordenamiento<int>::asc);
  for (int i=0; i<9; i++){
    EXPECT_LE(vec[i], vec[i+1]);
  }
}

TYPED_TEST(FixTyped, testName2){
  int vec[]={5,3,8,2,9,6,1,4,7};
  this->instance2Test->insercion(vec,10,Ordenamiento<int>::asc);
  for (int i=0; i<9; i++){
    EXPECT_LE(vec[i], vec[i+1]);
  }
}

TYPED_TEST(FixTyped, testName3){
  int vec[]={5,3,8,2,9,6,1,4,7};
  this->instance2Test->seleccion(vec,10,Ordenamiento<int>::asc);
  for (int i=0; i<9; i++){
    EXPECT_LE(vec[i], vec[i+1]);
  }
}

TYPED_TEST(FixTyped, testName4){
  int vec[]={5,3,8,2,9,6,1,4,7};
  this->instance2Test->quicksort(vec,0,9,Ordenamiento<int>::asc);
  for (int i=0; i<9; i++){
    EXPECT_LE(vec[i], vec[i+1]);
  }
}

TYPED_TEST(FixTyped, testName5){
  int vec[]={5,3,8,2,9,6,1,4,7};
  this->instance2Test->mergesort(vec,0,9,Ordenamiento<int>::asc,10);
  for (int i=0; i<9; i++){
    EXPECT_LE(vec[i], vec[i+1]);
  }
}

TYPED_TEST(FixTyped, testName6){
  int vec[]={5,3,8,2,9,6,1,4,7};
  this->instance2Test->burbuja(vec,10,Ordenamiento<int>::desc);
  for (int i=0; i<9; i++){
    EXPECT_GE(vec[i], vec[i+1]);
  }
}

TYPED_TEST(FixTyped, testName7){
  int vec[]={5,3,8,2,9,6,1,4,7};
  this->instance2Test->insercion(vec,10,Ordenamiento<int>::desc);
  for (int i=0; i<9; i++){
    EXPECT_GE(vec[i], vec[i+1]);
  }
}

TYPED_TEST(FixTyped, testName8){
  int vec[]={5,3,8,2,9,6,1,4,7};
  this->instance2Test->seleccion(vec,10,Ordenamiento<int>::desc);
  for (int i=0; i<9; i++){
    EXPECT_GE(vec[i], vec[i+1]);
  }
}

TYPED_TEST(FixTyped, testName9){
  int vec[]={5,3,8,2,9,6,1,4,7};
  this->instance2Test->quicksort(vec,0,9,Ordenamiento<int>::desc);
  for (int i=0; i<9; i++){
    EXPECT_GE(vec[i], vec[i+1]);
  }
}

TYPED_TEST(FixTyped, testName10){
  int vec[]={5,3,8,2,9,6,1,4,7};
  this->instance2Test->mergesort(vec,0,9,Ordenamiento<int>::desc,10);
  for (int i=0; i<9; i++){
    EXPECT_GE(vec[i], vec[i+1]);
  }
}
