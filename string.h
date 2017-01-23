#include <cstdlib>
#include <cstdio>

class string {
	friend string operator+ (const string& lhs, const char* rhs); // + operator for concatenation of string with c-string
	friend string operator+ (const string& lhs, char rhs);
	
	protected : 
	size_t const max_size_=100;			// Max capacity
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
	string& operator= (char c); 	// affectation operator for a character
	string& operator= (const string str);
};

// out member functions : 
string operator+ (const string& lhs, const char* rhs); 	// + operator for concatenation of string with c-string
string operator+ (const string& lhs, char rhs); 		// + operator for concatenation of string with char
