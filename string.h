class string {

	protected : 
	int const max_size_=100;
	char* chaine_;
	int len_;
	int capacity_;



	public :
// constructors
	string();
	string(const char* mot);

//destructors
	~string();

	
//getters
	int capacity();



};
