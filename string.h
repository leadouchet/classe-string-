class string {

	protected : 
	int const max_size_=100;		// Max capacity
	int len_;						// Length of the string
	int capacity_;					// Current capacity 
	char* chaine_;					// Array of char (content of the string)


	public :
// constructors
	string();						// Default constructor
	string(const string& s);		// Copy constructor
	string(const char* mot);		// Constructor from char*


//destructors
	~string();
	
//getters
	int capacity() const;    
	int length();
	int max_size();
	const char* c_str() const;					// Return C string equivalent
// method
	bool empty();					// Test if string is empty
	void reserve();					// Request a change in capacity
	int size();						// Return length of string
	void clear();					// Clear string
	void resize(const int n);		// Resize string
};
