#ifndef MOVIE_H_
#define MOVIE_H_
#include<string>
using namespace std;

class Movie{

private:
	string movieName;
	int movieYear;
	string movieRating;
	//bool yearValid;

public:
	// constructors
	Movie();
	Movie( string, int, string);

	// deconstructor
	~Movie();

	// accessors
	string getName();
	int getYear();
	string getRating();

	// mutators
	void setName(string);
	void setYear(int);
	void setRating(string);

	//fxs
	void printMovie( Movie movie[3]);// obj array


};
#endif // end of file






