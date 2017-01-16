#include "string.h"
#include <stdio.h>
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
int main(){
	string a = string();
	string b = string(a);
	char* phrase = new char[255];
	cin >> phrase;
	string c = string(phrase);
}
