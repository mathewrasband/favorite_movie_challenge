//
//  main.cpp
//  favorite_movie_challenge
//
//  Created by Mathew Rasband on 4/11/21.
//

#include "Movie.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string movieName = "";
    int movieYear    = 0;
    string movieRating = "";
    Movie favoriteMovie;
    
    for (int i = 0; i < 3; ++i) {
        cout << "Favorite movie: " << endl;
        cin.ignore();
        getline(cin, movieName);
        cout << "What year did it come out? " << endl;
        cin >> movieYear;
        if(movieYear > 2021 || movieYear < 1895) {
            cout << "You have entered an invalid year." << endl;
            break;
        }
        cout << "What was it rated? " << endl;
        cin >> movieRating;
        
        favoriteMovie.SetMovieName(movieName);
        favoriteMovie.SetMovieYear(movieYear);
        favoriteMovie.SetMovieRating(movieRating);
    }
    
    cout << endl;
    
    for (int i = 0; i < 3; ++i) {
        cout << favoriteMovie.GetMovieName().at(i) << endl;
        cout << favoriteMovie.GetMovieYear().at(i) << endl;
        cout << favoriteMovie.GetMovieRating().at(i) << endl;
    }
    
    return 0;
}
