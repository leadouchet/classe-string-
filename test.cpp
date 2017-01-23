#include "string.h"
#include <stdio.h>
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
int main(){
	string a = string();
	char* phrase = new char[255];
	cin >> phrase;
	string b = string(phrase);
	char l ='l';
	string c = b + l;
	cout << c.c_str() << endl;
	delete [] phrase;
}
