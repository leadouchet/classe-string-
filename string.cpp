#include "string.h"
#include <cstdlib>
#include <cstdio>

//default constructor
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
	++capacity_;
	chaine_ = new char[capacity_+1];
	for (int k = 0; k <= capacity_ ; ++k){
		chaine_[k]=mot[k];
	}
}

string::string(const string& s){
	capacity_ = s.capacity_;
	len_ = s.len_;
	chaine_ = new char[capacity_+1];
	for(int k = 0 ; k!=len_+1 ; k++){
		chaine_[k] = s.chaine_[k];
	}	
}
//getters------------------------------------------------------------
int string::capacity() const{
  return capacity_;
}

int string::length(){
	return len_;
}

int string::max_size(){
	return max_size_;
}

const char* string::c_str() const{
	return chaine_;
}
//destructor--------------------------------------------------------------
string::~string(){
  delete chaine_;
}

//method---------------------------------------------------------


int string::size(){
	return len_;
}

void string::clear(){
	delete chaine_;
	chaine_ = new char[capacity_];
	len_ = 0;
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
void string::resize(const int n){
	if (n < len_){
		char* newword = new char[n+1];
		for (int i = 0; i <= n-1; ++i){
			newword[i] = chaine_[i];
		}
		delete chaine_;
		newword[n]='\0';
		capacity_=n+1;
		chaine_ = new char [capacity_+1];
		chaine_ = newword;
		len_ = n;
	}
	if (n > len_){
		capacity_=n;
		char* newword = new char[capacity_+1];
		for (int i = 0; i <= len_+1; ++i){
			newword[i] = chaine_[i];
		}		
		delete chaine_;
		chaine_=newword;

	}

}

