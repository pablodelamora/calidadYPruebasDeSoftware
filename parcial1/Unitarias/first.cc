#include <iostream>
using namespace std;
int factorial(int);


int factorial(int n)
{
    if (n<0){
      return 0;
    }
    else{
      int fact;
      if (n==0)
          return 1;
      else{
           return n*factorial(n-1);
         }
       }
}
