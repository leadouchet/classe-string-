#include "string.h"
#include <stdio.h>
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
int main(){
  char* test = new char[255];
  test[0]='a';
  test[1]='b';
  test[2]=' ';
  test[3]='c';
  string a = string();
  a=test;
  cout << a.capacity()<<' '<<a.length()<<' '<<a.max_size()<<' '<<a.c_str()<<endl;
}
