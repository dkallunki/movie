#ifndef MOVIE_H_
#define MOVIE_H_
#include<string>
using namespace std;

class Movie{

private:
	string movieName;
	int movieYear;
	string movieRating;
	

public:
	// constructors
	Movie();
	Movie( string, int, string);

	// deconstructor
	~Movie();

	// accessors
	string getMovieName();
	int getMovieYear();
	string getMovieRating();

	// mutators
	void setMovieName(string);
	void setMovieYear(int);
	void setMovieRating(string);

	//fxs
	void printMovie();// obj array


};
#endif // end of file






