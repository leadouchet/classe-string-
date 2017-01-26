---------------------------------------------------------------------------------------
                           STRING CLASS IMPLEMENTATION
---------------------------------------------------------------------------------------
Author : Florian Peron, Léa Riera, Léa Douchet
TP C++ 3 BIM

The string class provide tools to treat and modify string of single byte characters.
This work has been inspired from the cstring library describes in : 
http://www.cplusplus.com/reference/string/string/operator+/

This class need the cstdlib and cstdio library to function.

constructors : 
     string() : default constructor build an empty string of capacity 10, length 0 
     string(const string& s) : construct a copy of a string		
     string(const char* mot) : build a string with a pointed c-string 
destructor :
     ~string() : destroy the string object

operators : 
     operator= : assign a new value to the string and delete its current content. 
                 The new affected value can be a string, a c-string or a single character
     operator+ : concatenation of string with a c-string, an other string or a single 
                 character.(out member function)

getters : 
	size_t capacity() : Returns the size of the storage space currently allocated for the string, 
                            expressed in terms of bytes. Can be equal or greater than the lenght
	size_t length() : Returns the length of the string, in terms of bytes
	size_t max_size() : Returns the maximum length the string can reach.
	const char* c_str() : Returns a pointer to an array that contains a c-string representing 
                              the current value of the string object.	

method
	bool empty() : Return wether the string is empty (lenght=0)
	void reserve(size_t n) : Requests that the string capacity be adapted to a planned change in 
                                 size to a length of up to n characters.
	size_t size() : Returns the length of the string, in terms of bytes.	
	void clear() :  Erases the contents of the string, which becomes an empty string (with a length of 0 characters).
	void resize(const size_t n, char c) : Resizes the string to a length of n characters. If a char c is given the empty 
                                              places of the capacity will be filed with c
