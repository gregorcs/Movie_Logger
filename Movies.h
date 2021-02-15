#ifndef MOVIES_H
#define MOVIES_H
#include "Movie.h"
#include <vector>
class Movies
{
private:
    std::vector<Movie> movies;
public:
    Movies();
    ~Movies();
    Movies(Movies &source);

    bool add_movie(std::string name, double rating, int watched);
    bool increment_watched(std::string name);
    void display();
};

#endif // MOVIES_H
