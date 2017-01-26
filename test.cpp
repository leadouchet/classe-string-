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
	cout << "after clean " << c.length() << c.capacity() << endl;
	cout<<""<< endl;
	c.reserve(10);
	cout << "request capacity 10 : " << c.capacity() << endl;
	

	
	//operators : 
	a = 'c';
	string oper = a + phrase;
	cout << "length = " << a.length() << " capacity = " << a.capacity() << endl;
	cout << " chaine = " << a.c_str() << endl;
	c = b;
	cout << " chaine = " << c.c_str() << endl;
	string e = phrase; 
	cout << " chaine_e = " << e.c_str() << endl;

	string d = b + c;
	cout << "length = " << d.length() << " capacity = " << d.capacity() << endl;
	cout << " max_size = " << d.max_size() << " chaine = " << d.c_str() << 
	" size b = " << d.size() << endl;

	string f = d + 'i';
	cout << "length = " << f.length() << " capacity = " << f.capacity() << endl;
	cout << " max_size = " << f.max_size() << " chaine = " << f.c_str() << 
	" size b = " << f.size() << endl;
}
