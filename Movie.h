#ifndef MOVIE_H
#define MOVIE_H
#include <string>

class Movie
{
private:
    std::string name;
    double rating = 0;
    int watched = 0;
    
public:
    Movie(std::string inpt_name, double inpt_rating, int inpt_watched);
    ~Movie();
    
    //Getters and setters for the movie objects
    std::string get_name() const {return name;}
    void set_name(std::string inpt_name) {name = inpt_name;}
    
    double get_rating() const {return rating;}
    void set_rating(double inpt_rating) {rating = inpt_rating;}
    
    int get_watched() const {return watched;}
    void set_watched(int inpt_watched) {watched = inpt_watched;}
    //displays the object
    void const display();
    // adds +1 watched to the object
    void increment_watched() {
        watched++;
    }
};

#endif // MOVIE_H
