#include<stdio.h>
#include<iostream>
#include<cstring>


int fun(char* pass){
  int res=0;
  char p[16];
  strcpy(p, pass);
  if (strcmp("123456789", p)==0){
    res = 1;
  }
  //printf("%s", p);
  return res;
}


int main(int argc, char** argv){

  if (fun(argv[1])){
    printf("Granted");
  }
  else{
    printf("Go away");
  }

  return 0;
}
