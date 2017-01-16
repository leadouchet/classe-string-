#include "string.h"
#include <cstdlib>
#include <stdio.h>

//default constructor
string::string(){
	capacity_=10;
	chaine_= new char[capacity_];
	len_=0;
}

//destructor
string::~string(){
  delete chaine_;
}
