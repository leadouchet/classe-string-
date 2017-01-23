#include <cstdlib>
#include <cstdio>

class string {

	protected : 
	static const size_t max_size_;			// Max capacity
	size_t len_;						// Length of the string
	size_t capacity_;					// Current capacity 
	char* chaine_;						// Array of char (content of the string)


	public :
// constructors
	string();						// Default constructor
	string(const string& s);		// Copy constructor
	string(const char* mot);		// Constructor from char*


//destructors
	~string();
	
//getters
	size_t capacity() const;
	size_t length() const;
	size_t max_size() const;
	const char* c_str() const;					// Return C string equivalent
// method
	bool empty() const;					// Test if string is empty
	void reserve();					// Request a change in capacity
	size_t size() const;						// Return length of string
	void clear();					// Clear string
	void resize(const int n);		// Resize string

//operator
	string& operator=(const char* s);
	friend string operator+ (const string& lhs, const char* rhs); // + operator for concatenation of string with c-string
	friend string operator+ (const string& lhs, char rhs);
	

       private :

size_t len_char(const char* mot);
void  cpy_mem(const char* mot);



};
