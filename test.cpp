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
	cout<< b.length() <<endl;
	cout<<b.max_size()<<endl;
	b.resize(7);
	cout<<b.length()<<endl;
	cout<<b.capacity()<<endl;
	
	string c = string(b);
	cout << c.size() << endl;
	a = 'c';
	cout<<a.length()<<endl;
	cout<<a.capacity()<<endl;
	cout << a.c_str() << endl;

}
