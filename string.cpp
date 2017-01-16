#include "string.h"
#include <cstdlib>
#include <cstdio>

//default constructor
string::string(){
	capacity_=10;
	chaine_= new char[capacity_];
	len_=0;
}
//
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

//destructor
string::~string(){
  delete chaine_;
}

//Getters
int string::length(){
	return len_;
}

int string::max_size(){
	return max_size_;
}

