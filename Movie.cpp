//
//  Movie.cpp
//  favorite_movie_challenge
//
//  Created by Mathew Rasband on 4/11/21.
//

#include "Movie.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Movie::SetMovieName(string movieName) {
    
    movieTitle.push_back(movieName);
    
    return;
}

void Movie::SetMovieYear(int movieYear) {
    
        year.push_back(movieYear);
    
    return;
}

void Movie::SetMovieRating(string movieRating){
    
    rating.push_back(movieRating);
    
    return;
}

vector<string> Movie::GetMovieName() const {
    
    return movieTitle;
}

vector<int> Movie::GetMovieYear() const {
    
    return year;
}

vector<string> Movie::GetMovieRating() const {
    
    return rating;
}
