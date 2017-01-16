#include "string.h"
#include <cstdlib>
#include <cstdio>

//default constructor-------------------------------------------------
string::string(){
	capacity_=10;
	chaine_= new char[capacity_];
	len_=0;
}
//constructors----------------------------------------------------
string::string(const char* mot){
	int i = 0;
	capacity_ = 0;
	while (mot[i] != '\0'){
		++i;
		++capacity_;
	}
	len_= capacity_;
	chaine_ = new char[capacity_ + 1];
	for (int k = 0; k <= capacity_ ; ++k){
		chaine_[k]=mot[k];
	}
}

string::string(const string& s){
	capacity_ = s.capacity_;
	len_ = s.len_;
	chaine_ = new char[capacity_];
	for(int k = 0 ; k!=len_+1 ; k++){
		chaine_[k] = s.chaine_[k];
	}	
}


//destructor--------------------------------------------------------------
string::~string(){
  delete chaine_;
}

//getters------------------------------------------------------------
int string::capacity(){
  return capacity_;
}


//method---------------------------------------------------------

char* string::c_str(){
	char* c = new char[capacity_];
	for(int k = 0 ; k!=len_+1 ; k++){
		c[k] = chaine_[k];
	}
	return c;
}

bool string::empty(){
  if(this->length()==0){
    return(true);
  }
  else {
    return(false);
  }
}

void string::reserve(){


}
