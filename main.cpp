#include <iostream>
#include <stdio.h>
#include "Movie.h"
#include "Movies.h"
using namespace std;

void const menu();
char input();
Movies add_movie(Movies &list_ref);
void increment_watched(Movies &list_ref);
void const display(Movies &list_ref);
//simple menu
void const menu() {
    cout << "Welcome to the menu"
            << "\nPress 'a' to add a movie"
            << "\nPress 'd' to display all the movies"
            << "\nPredd 'i' to increment movie watchtime\n";
}
//adds a movie
Movies add_movie(Movies &list_ref) {
    string inpt_name;
    double inpt_rating = 0;
    int inpt_watched = 0;
    
    cout << "Enter name: ";
    cin.ignore();
    getline (cin, inpt_name);
    cout << "Enter rating: ";
    cin >> inpt_rating;
    cout << "Enter times watched: ";
    cin >> inpt_watched;
    
    list_ref.add_movie(inpt_name, inpt_rating, inpt_watched);
    return list_ref;
}
//takes input from user
char input(Movies &list_ref) {
    char choice;
    cin >> choice;
    
    switch (choice) {
        case 'a': 
            add_movie(list_ref);
            cout << "\nYou selected add movie\n" << endl;
            break;
        case 'd':
            display(list_ref);
            cout << "\nYou selected display all movies\n" << endl;
            break;
        case 'i':
            increment_watched(list_ref);
            cout << "\nYou selected increment movie\n" << endl;
            break;
        default:
            cout << "\nNot specified\n" << endl;
            break;
    }
    return choice;
}
//increments the movie that you enter
void increment_watched(Movies &list_ref) {
    cout << "\nEnter the movie's name that you want incremented: ";
    string movie_name;
    cin.ignore();
    getline (cin, movie_name);
    list_ref.increment_watched(movie_name);
}
//displays all the movies in movies vector
void const display(Movies &list_ref) {
   list_ref.display();
}

int main()
{
    char contin;
    Movies List;
    
    while (contin != 'x') {
        menu();
        input(List);
        cout << "Press 'c' to continue or 'x' to exit" << endl;
        cin >> contin;
    }
	return 0;
}
