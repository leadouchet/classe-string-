#include "string.h"
#include <cstdlib>
#include <cstdio>

//constructors
string::string(){
	capacity_=10;
	chaine_= new char[capacity_];
	len_=0;
}

string::string(const string& s){
	capacity_ = s.capacity_;
	len_ = s.len_;
	chaine_ = new char[capacity_];
	for(int k = 0 ; k!=len_+1 ; k++){
		chaine_[k] = s.chaine_[k];
	}
	
}
