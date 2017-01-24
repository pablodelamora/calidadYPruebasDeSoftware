#include "gtest/gtest.h"
#include "TypeParameterized.h"

typedef testing::Types<Child1, Child2> implementations;

INSTANTIATE_TYPED_TEST_CASE_P(MiTest, TypeParameterized, implementations);
