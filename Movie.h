#ifndef _MOVIE_H_
#define _MOVIE_H_

#include<string>

class Movie
{
private:
    std::string name; //the name of the movie
    std::string genre; //the movie genre
    int score; //movie score 
public:
    //Constructor
    Movie(std::string name, std::string genre, int score);
    
    //Copy constructor
    Movie(const Movie &source);
    
    //Destructor
    ~Movie();

    // Basic getters and setters for private attributes
    void setName(std::string name) { this -> name = name;};
    std::string getName () const { return name; };

    void setGenre(std::string genre) {this -> genre = genre;};
    std::string getGenre () const { return genre; };

    void setScore(int score){ this -> score = score;};
    int getScore () const { return score; };

    // simply displays the movie information 
    void display() const;
};


#endif // _MOVIE_H_