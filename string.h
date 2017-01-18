class string {

	protected : 
	int const max_size_=100;
	int len_;
	int capacity_;
	char* chaine_;	


	public :
// constructors
	string();
	string(const string& s);
	string(const char* mot);


//destructors
	~string();
	
//getters
	int capacity();
	int length();
	int max_size();

// method
	char* c_str();
	bool empty();
	void reserve();
	int size();
	void clear();
	void resize(const int n);
};
