#include "string.h"
#include <cstdlib>
#include <cstdio>

//static attribute
const size_t  string::max_size_=100;

//default constructor
string::string(){
	capacity_=10;
	chaine_= new char[capacity_];
	len_=0;
}
//constructors----------------------------------------------------
string::string(const char* mot){
  len_=len_char(mot);
  capacity_ = len_+1;
  chaine_ = new char[capacity_];
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
size_t string::capacity() const{
  return capacity_;
}

size_t string::length() const{
	return len_;
}

size_t string::max_size() const{
	return max_size_;
}

const char* string::c_str() const{
	return chaine_;
}
//destructor--------------------------------------------------------------
string::~string(){
  delete[] chaine_;
  chaine_= nullptr;
}

//method---------------------------------------------------------


size_t string::size() const{
	return len_;
}

void string::clear(){
	delete[] chaine_;
	chaine_ = new char[capacity_];
	len_ = 0;
}
bool string::empty() const{
  if(len_==0){
    return(true);
  }
  else {
    return(false);
  }
}

void string::reserve(size_t n/*=0*/){
  if (n<=max_size_ && n>capacity_){
     const int int_n = n;
     this->resize(int_n);
    }



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

//operator 

string& string::operator= (const char* s){
  delete [] chaine_;
  capacity_=len_char(s)+1;
  len_=len_char(s);
  cpy_mem(s);
}



//private


size_t string::len_char(const char* mot){
    size_t compt=0;
    while (mot[compt] != '\0'){
	++compt;
    }
    return(compt);
    
  }

void string::cpy_mem(const char* mot){
  chaine_ = new char[capacity_];
  for(int k = 0 ; k!=len_+1 ; k++){
    chaine_[k] = mot[k];
  }
}
  
