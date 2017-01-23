#include "string.h"
#include <stdio.h>
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
int main(){
	string a = string();
	char* mot1 = new char[255];
	cin >> mot1;
	string b = string(mot1);
	a = 'c';
	cout << a.c_str() << endl;
	a = b;
	cout << a.c_str() << endl;
}
