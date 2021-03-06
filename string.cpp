#include "string.h"
#include <cstdlib>
#include <cstdio>
#include <iostream>


//---------------------------------------------------------------------------------------------
//--------------------------------static attribute---------------------------------------------
//---------------------------------------------------------------------------------------------

const size_t  string::max_size_=100;



//---------------------------------------------------------------------------------------------
//-------------------------------constructors--------------------------------------------------
//---------------------------------------------------------------------------------------------


//Default constructor

string::string(){
	capacity_ = 10;
	chaine_ = new char[capacity_];
	len_ = 0;
}


//c-string constructor 

string::string(const char* mot){
  len_ = len_char(mot);
  capacity_ = len_+1;
  chaine_ = new char[capacity_];
  for (int k = 0; k <= capacity_ ; ++k){
    chaine_[k] = mot[k];
	}
}


//Copy constructor

string::string(const string& s){
	capacity_ = s.capacity_;
	len_ = s.len_;
	chaine_ = new char[capacity_];
	for(int k = 0 ; k != len_+1 ; k++){
		chaine_[k] = s.chaine_[k];
	}	
}



//---------------------------------------------------------------------------------------------
//-------------------------------geters--------------------------------------------------------
//---------------------------------------------------------------------------------------------


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



//---------------------------------------------------------------------------------------------
//-------------------------------destructor----------------------------------------------------
//---------------------------------------------------------------------------------------------


string::~string(){
  delete[] chaine_;
  chaine_ = nullptr;
}



//---------------------------------------------------------------------------------------------
//----------------------------------methods----------------------------------------------------
//---------------------------------------------------------------------------------------------


//len_ getter equivalent

size_t string::size() const{
	return len_;
}


//Clear string : erases the contents of the string

void string::clear(){
	delete[] chaine_;
	chaine_ = new char[capacity_];
	len_ = 0;
}


//Test if the string is empty

bool string::empty() const{
  if(len_ == 0){
    return(true);
  }
  else {
    return(false);
  }
}


//Request a change in capacity

void string::reserve(size_t n/*=0*/){
  if (n <= max_size_ && n > capacity_){
     const int int_n = n;
     this->resize(int_n);
    }
}


//Resize string 

void string::resize(const size_t n){
	if (n <= max_size_){
		if (n < len_){
			char* newword = new char[n];
			for (int i = 0; i <= n-1; ++i){
				newword[i] = chaine_[i];
			}
			delete[] chaine_;
			newword[n] ='\0';
			capacity_ = n;
			chaine_ = newword;
			len_ = n-1;
		}
		if (n > len_){
			capacity_ = n;
			char* newword = new char[capacity_];
			for (int i = 0; i <= len_; ++i){
				newword[i] = chaine_[i];
			}		
			delete[] chaine_;
			chaine_ = newword;
		}
	}
}


//Resize string and fill with c (char)

void string::resize (size_t n, char c){
	resize(n);
	if (n > len_){
		for (int i = len_ ; i < n ; ++i){
			chaine_[i] = c;
		}
	len_ = n-1;
	chaine_[n] = '\0';
	}
}


//---------------------------------------------------------------------------------------------
//---------------------------------- operators = ----------------------------------------------
//---------------------------------------------------------------------------------------------
//string assignement


string& string::operator= (char c){
	delete[] chaine_;
	chaine_ = new char[2];
	chaine_[0] = c;
	chaine_ [1] = '\0';
	len_ = 1;
	return *this;
}


string& string::operator= (const string str){
	delete [] chaine_;
	len_ = str.len_;
	capacity_ = str.capacity_;
	chaine_ = new char[capacity_];
	for (int k = 0 ; k != len_+1 ; k++){
		chaine_[k] = str.chaine_[k];
	}
	return *this;
}
 

string& string::operator= (const char* s){
  delete [] chaine_;
  capacity_ = len_char(s)+1;
  len_ = len_char(s);
  cpy_mem(s);
}



//---------------------------------------------------------------------------------------------
//---------------------------------- private functions ----------------------------------------
//---------------------------------------------------------------------------------------------


//return length of c-string

size_t string::len_char(const char* mot){
    size_t compt = 0;
    while (mot[compt] != '\0'){
	++compt;
    }
    return(compt);
}

//copy c-string in chaine_

void string::cpy_mem(const char* mot){
  chaine_ = new char[capacity_];
  for(int k = 0 ; k != len_+1 ; k++){
    chaine_[k] = mot[k];
  }
}



//---------------------------------------------------------------------------------------------
//----------------------------------  out member functions ------------------------------------
//---------------------------------------------------------------------------------------------


// concatenate operator (+) for one object of the string class and a c-string

string operator+ (const string& lhs, const char* rhs){
	if (lhs.empty()){
		return string(rhs);
	}
	else {
	string chaine2 = string(rhs);
	string concate = string(lhs);
	concate.len_ = lhs.len_ + chaine2.len_;
	concate.resize(concate.len_ + 1);
	for(int i = 0; i < chaine2.len_; ++i){
		concate.chaine_[lhs.len_+i] = rhs[i];
	}
	concate.chaine_[concate.len_+1] = '\0';
	return(concate);
	}
}


// concatenate operator (+) for one object of the string class and a char

string operator+ (const string& lhs, char rhs){
	string concate = string(lhs);
	concate.len_ = lhs.len_ + 1;
	concate.resize(concate.len_+1);
	concate.chaine_[concate.len_-1] = rhs;
	concate.chaine_[concate.len_] = '\0';
	return concate;
}


// concatenate operator (+) for two objects of the string class 

string operator+ (const string& lhs, const string& rhs){
	string concate = string(lhs);
	concate.len_ = lhs.len_ + rhs.len_;
	concate.resize(concate.len_ + 1);
	for(int i = 0; i < rhs.len_; i++){
		concate.chaine_[lhs.len_+i] = rhs.chaine_[i];
	}		
	concate.chaine_[concate.len_+1] = '\0';
	return(concate);	
}

