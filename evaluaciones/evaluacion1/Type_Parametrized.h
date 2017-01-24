#include "gtest/gtest.h"
#include "Ordenamiento.cc"

template<class instanceType>
class TypeParameterized : public testing::Test
{
public:
    TypeParameterized()
    {
        instance2Test = new instanceType;
    }
    ~TypeParameterized()
    {
        delete instance2Test;
        instance2Test = NULL;
    }
protected:
    Ordenamiento<int>* instance2Test;
};

TYPED_TEST_CASE_P(TypeParameterized);

//TYPED_TEST_P(TypeParameterized, simple)
//{
//    EXPECT_EQ(1, this->instance2Test->doSomething());
//}



TYPED_TEST_P(TypeParameterized, test){
  int vec[]={5,3,8,2,9,6,1,4,7};
  this->instance2Test->burbuja(vec,10,Ordenamiento<int>::asc);
  for (int i=0; i<9; i++){
    EXPECT_LE(vec[i], vec[i+1]);
  }
}

TYPED_TEST_P(TypeParameterized, test2){
  int vec[]={5,3,8,2,9,6,1,4,7};
  this->instance2Test->insercion(vec,10,Ordenamiento<int>::asc);
  for (int i=0; i<9; i++){
    EXPECT_LE(vec[i], vec[i+1]);
  }
}

TYPED_TEST_P(TypeParameterized, test3){
  int vec[]={5,3,8,2,9,6,1,4,7};
  this->instance2Test->seleccion(vec,10,Ordenamiento<int>::asc);
  for (int i=0; i<9; i++){
    EXPECT_LE(vec[i], vec[i+1]);
  }
}

TYPED_TEST_P(TypeParameterized, test4){
  int vec[]={5,3,8,2,9,6,1,4,7};
  this->instance2Test->quicksort(vec,0,9,Ordenamiento<int>::asc);
  for (int i=0; i<9; i++){
    EXPECT_LE(vec[i], vec[i+1]);
  }
}

TYPED_TEST_P(TypeParameterized, test5){
  int vec[]={5,3,8,2,9,6,1,4,7};
  this->instance2Test->mergesort(vec,0,9,Ordenamiento<int>::asc,10);
  for (int i=0; i<9; i++){
    EXPECT_LE(vec[i], vec[i+1]);
  }
}



REGISTER_TYPED_TEST_CASE_P(TypeParameterized, test,test2,test3,test4,test5);
