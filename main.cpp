#include<iostream>
#include<iostream>
#include"Movie.h"
#include"Movies.h"

using namespace std;

void addMovie(Movies &movie, std::string name, std::string genre, int score ) {
    if (movie.addMovie(name, genre, score)){
        std::cout << name << " added successfully." <<std::endl;
    } else {
        std::cout << name << " already exists." <<std::endl; 
    }
}

void deleteMovie(Movies &movie, std::string name) {
    if (movie.deleteMovie(name)){
        std::cout << name << " deleted successfully." <<std::endl;
    } else {
        std::cout << name << " not found !" <<std::endl; 
    }
}


int main () {
    char selectedButton {};
    Movies myList;

    do {
        cout << "----------------------------------------------" <<endl;
        cout << "Welcome to this movie manager" <<endl;
        cout << "S - Show list" << endl;
        cout << "A - Add new movie to the list"<<endl;
        cout << "I - Increment the number you have watched a movie"<<endl;
        cout << "D - Delete movie from the list"<<endl;
        cout << "Q - Quit this menu"<<endl;
        cout <<" Please select one: ";
        cin >> selectedButton;

        if (selectedButton == 'A' || selectedButton == 'a'){
            std::string userEnteredMovieName {};
            std::string userEnteredMoviegenre {};
            int userEnteredScore {};

            cout <<" Please enter move name, genre, and score with one space between each: ";
            cin >> userEnteredMovieName >> userEnteredMoviegenre >> userEnteredScore ;

            addMovie(myList,userEnteredMovieName,userEnteredMoviegenre,userEnteredScore);

        }else if (selectedButton == 'D' || selectedButton == 'd'){
            std::string userEnteredMovieName {};

            cout <<" Which movie you want to delete: ";
            cin >> userEnteredMovieName;

            deleteMovie(myList,userEnteredMovieName);

        }else if (selectedButton == 'S' || selectedButton == 's'){
            myList.displayList();
        } else if (selectedButton == 'Q' || selectedButton == 'q'){
            cout<< "Goodbye..." <<endl;
        }else {
            cout<< "You entered an unknown option. Please try again: " <<endl;
        }           
        
    } while (selectedButton != 'q' && selectedButton != 'Q');
    
    cout <<endl ; 
    return 0;
}