#ifndef _MOVIES_H_
#define _MOVIES_H_
#include<string>
#include<vector>
#include"Movie.h"


class Movies
{
private:
    std::vector<Movie> moviesCollection;

public:
    //Constructor
    Movies();
    //Desctructor
    ~Movies();

    //Add new movie
    bool addMovie(std::string, std::string, int);

    //Delete an existed movie
    bool deleteMovie(std::string);

    //Display the list
    void displayList() const ;
    
};






#endif // _MOVIES_H_