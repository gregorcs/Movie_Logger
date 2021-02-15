#include "Movie.h"
#include <string>
#include <iostream>
Movie::Movie(std::string inpt_name, double inpt_rating, int inpt_watched)
 : name(inpt_name), rating(inpt_rating), watched(inpt_watched) 
{
}

Movie::~Movie()
{
}
//displays movie object
void const Movie::display() {
    std::cout << name << " " << rating << " " << watched << std::endl;
}
