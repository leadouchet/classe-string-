class string {

	protected : 
	size_t const max_size_=100;
	size_t len_;
	size_t capacity_;
	char* chaine_;	


	public :
// constructors
	string();
	string(const string& s);
	string(const char* mot);


//destructors
	~string();
	
//getters
	size_t capacity();
	size_t length() const;
	size_t max_size() const;

// method
	char* c_str();
	bool empty();
	void reserve();
	size_t size();
	void clear();
	void resize(const int n);
};
