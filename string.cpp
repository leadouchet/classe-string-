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
size_t string::capacity(){
  return capacity_;
}

size_t string::length() const{
	return len_;
}

size_t string::max_size() const{
	return max_size_;
}
//destructor--------------------------------------------------------------
string::~string(){
  delete chaine_;
}

//method---------------------------------------------------------

char* string::c_str(){
	char* c = new char[capacity_];
	for(int k = 0 ; k!=len_+1 ; k++){
		c[k] = chaine_[k];
	}
	return c;
}

size_t string::size(){
	return len_;
}

void string::clear(){
	delete[] chaine_;
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
		delete[] chaine_;
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
		delete[] chaine_;
		chaine_=newword;
	}
}

string& string::operator= (char c){
	delete[] chaine_;
	chaine_ = new char[2];
	chaine_[0] = c;
	chaine_ [1] = '\0';
	len_ = 1;
	return *this;
}



