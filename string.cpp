#include "string.h"
#include <cstdlib>
#include <stdio.h>

//constructeur par defaut
string::string(){
	capacity_=10;
	chaine_= new char[capacity_];
	len_=0;
}