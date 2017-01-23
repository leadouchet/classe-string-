class string {

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
	size_t capacity();
	size_t length() const;
	size_t max_size() const;

// method
	char* c_str();					// Return C string equivalent
	bool empty();					// Test if string is empty
	void reserve();					// Request a change in capacity
	size_t size();						// Return length of string
	void clear();					// Clear string
	void resize(const int n);		// Resize string
};
