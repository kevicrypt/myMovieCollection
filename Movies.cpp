#include<iostream>
#include"Movies.h"

Movies::Movies(){
}

Movies::~Movies() {
}

bool Movies::addMovie(std::string name, std::string genre, int score){
    for (size_t i = 0; i < moviesCollection.size(); i++)
    {
        if (moviesCollection[i].getName() == name)
        {
            return false;
        }  
    }
    Movie temporaryMovie{name,genre,score};
    moviesCollection.push_back(temporaryMovie); 
    return true;   
}

bool Movies::deleteMovie(std::string name){
    for (size_t i = 0; i < moviesCollection.size(); i++)
    {
        if (moviesCollection[i].getName() == name)
        {
            moviesCollection.erase(moviesCollection.begin()+i);
            return true;
        }  
    }
    return false;
}

void Movies::displayList () const {
    if (moviesCollection.size() == 0)
    {
        std::cout << "There is no movie to display." <<std::endl;
    } else {
        std::cout << "\n===================================" <<std::endl;
        std::cout << "Your movie list:" <<std::endl;
        for (const auto &movie: moviesCollection)
            movie.display();
        std::cout << "\n===================================" <<std::endl;
    }
    
}