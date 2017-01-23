#include "string.h"
#include <stdio.h>
#include <iostream>

using std::cout;
using std::endl;
using std::cin;



int main(){
	char* phrase = new char[255];
	cin >> phrase ;
	//constructor : 
	string a = string(); 
	string b = string(phrase);
	string c = string(b);

	// getters : 
	cout << "length = " << b.length() << " capacity = " << b.capacity() << endl;
	cout << " max_size = " << b.max_size() << " chaine = " << b.c_str() << 
	" size b = " << b.size() << endl;

	// methods : 
	b.resize(7);
	cout << "length " << b.length() << " capacity " << b.capacity() << endl;
	cout << "a vide ? " << a.empty() << " b vide ? " << b.empty() << endl;
	c.clear();
	cout << c.length() << endl;

	
	//operators : 
	a = 'c';
	string oper = a + phrase;
	cout << "length = " << a.length() << " capacity = " << a.capacity() << endl;
	cout << " chaine = " << a.c_str() << endl;
	c = b;
	cout << " chaine = " << c.c_str() << endl;
}
