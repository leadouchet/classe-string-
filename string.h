class string {
	protected : 
	char* chaine_;
	int len_;
	int capacity_;
	int const max_size_=100;


	public :
// constructors
	string();
	string(const string& s);


// method
	char* c_str();

};
