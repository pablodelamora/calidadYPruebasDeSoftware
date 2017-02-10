#include<stdio.h>
#include<iostream>
#include<cstring>



int main(int argc, char** argv){
  char array1[9];
  char array2[9];
  int value = 10;

  strcpy(array1, "arrayOne");
  strcpy(array2, "arrayTwo");
strcpy(array1, argv[1]);

  printf("array 1 is at %p with value %s", array1, array1);
  std::cout << std::endl;
  printf("array 2 is at %p with value %s", array2, array2);
  std::cout << std::endl;
  printf("value is at %p with value %i", &value, value);
  std::cout << std::endl;
  std::cout << std::endl;


  return 0;
}
