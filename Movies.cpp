#include "Movies.h"
#include <string>
#include <iostream>
#include <vector>
Movies::Movies()
{
}

Movies::~Movies()
{
}

Movies::Movies(Movies &source)
{
}
//adds the movie, increments watched if movie is already in movies vector
bool Movies::add_movie(std::string name, double rating, int watched) {
    for (int i = 0; i < movies.size(); i ++) {
        if (movies.at(i).get_name() == name) {
            std::cout << "Movie already on the list, incrementing watched" << std::endl;
            movies.at(i).increment_watched();
            return false;
        }
    }
    //creates a movie object, adds it to movies vector
    Movie temp(name, rating, watched);
    movies.push_back(temp);
    return true;
}
//increments the watched time, if the movie is already in the vector
bool Movies::increment_watched(std::string name) {
    for (int i = 0; i < movies.size(); i++) {
        if (name == movies.at(i).get_name()) {
            movies.at(i).increment_watched();
            return true;
        }
    }
    std::cout << "\nMovie not on list, you have to add it first\n";
    return false;
}
//displays all the movies located in the vector
void Movies::display() {
    std::cout << "\n==================\n";
    for (size_t i = 0; i < movies.size(); i++) {
        movies.at(i).display();
    }
    std::cout << "==================\n";
}
