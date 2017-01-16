class string {

	protected : 
	int const max_size_=100;
	char* chaine_;
	size_t len_;
	size_t capacity_;
	


	public :
// constructors
	string();
	string(const string& s);
	string(const char* mot);

//destructors
	~string();
	
//getters
	int capacity();

// method
	char* c_str();
	size_t size();
	void clear();
};

};
