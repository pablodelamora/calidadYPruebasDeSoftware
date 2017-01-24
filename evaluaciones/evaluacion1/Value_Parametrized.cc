#include "gtest/gtest.h"
#include "Ordenamiento.cc"

typedef Ordenamiento<int>* factoryMethod();

Ordenamiento<int>* instance1(){
  return new Ordenamiento<int>;
}


class Fixure: public testing::TestWithParam<factoryMethod*>{
protected:
  Ordenamiento<int>* instance2Test;
public:
  void SetUp(){
    instance2Test = (*GetParam())();
  }
  void TearDown(){
    delete instance2Test;
    instance2Test = NULL;
  }
};

//TEST_P(Fixure, testName){
//  this->instance2Test->doSomething();
//}

TEST_P(Fixure, testName){
  int vec[]={5,3,8,2,9,6,1,4,7};
  this->instance2Test->burbuja(vec,10,Ordenamiento<int>::asc);
  for (int i=0; i<9; i++){
    EXPECT_LE(vec[i], vec[i+1]);
  }
}

TEST_P(Fixure, testName2){
  int vec[]={5,3,8,2,9,6,1,4,7};
  this->instance2Test->insercion(vec,10,Ordenamiento<int>::asc);
  for (int i=0; i<9; i++){
    EXPECT_LE(vec[i], vec[i+1]);
  }
}

TEST_P(Fixure, testName3){
  int vec[]={5,3,8,2,9,6,1,4,7};
  this->instance2Test->seleccion(vec,10,Ordenamiento<int>::asc);
  for (int i=0; i<9; i++){
    EXPECT_LE(vec[i], vec[i+1]);
  }
}

TEST_P(Fixure, testName4){
  int vec[]={5,3,8,2,9,6,1,4,7};
  this->instance2Test->quicksort(vec,0,9,Ordenamiento<int>::asc);
  for (int i=0; i<9; i++){
    EXPECT_LE(vec[i], vec[i+1]);
  }
}

TEST_P(Fixure, testName5){
  int vec[]={5,3,8,2,9,6,1,4,7};
  this->instance2Test->mergesort(vec,0,9,Ordenamiento<int>::asc,10);
  for (int i=0; i<9; i++){
    EXPECT_LE(vec[i], vec[i+1]);
  }
}

INSTANTIATE_TEST_CASE_P(CaseName, Fixure, testing::Values(&instance1));
