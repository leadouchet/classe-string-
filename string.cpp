#include "string.h"
#include <cstdlib>
#include <stdio.h>

//default constructor
string::string(){
	capacity_=10;
	chaine_= new char[capacity_];
	len_=0;
}
//constructeurs
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

//destructor
string::~string(){
  delete chaine_;
}

//getters
int string::capacity(){
  return capacity_;
}
