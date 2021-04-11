//
//  Movie.hpp
//  favorite_movie_challenge
//
//  Created by Mathew Rasband on 4/11/21.
//

#ifndef Movie_hpp
#define Movie_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Movie{
public:
    void SetMovieName(string movieName);
    void SetMovieYear(int movieYear);
    void SetMovieRating(string movieRating);
    
    vector<string> GetMovieName() const;
    vector<int> GetMovieYear() const;
    vector<string> GetMovieRating() const;
private:
    vector<string> movieTitle;
    vector<int> year;
    vector<string> rating;
};

#endif /* Movie_hpp */
