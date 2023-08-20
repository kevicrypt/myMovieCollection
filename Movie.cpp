#include<iostream>
#include "Movie.h"

// Implemention of the construcor
Movie::Movie(std::string name, std::string genre, int score)
    : name(name), genre(genre),score(score) {
}

//Implemention of the copy constructor
Movie::Movie(const Movie &source)
    : Movie{source.name, source.genre, source.score}  {
}

// Implementation of the destructor
Movie::~Movie(){
}

// Implementation of the display method
void Movie::display() const{
    std::cout << "Name: " << name << ", genre: " << genre << ", Score: " << score <<std::endl ;
}