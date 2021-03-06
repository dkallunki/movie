#include <iostream>
#include "Movie.h"
#include <string>
using namespace std;
#include <iomanip>

// constructors defined

Movie::Movie() {

movieName="The men in Black ";// initailize to something VALID
movieYear=1900;
movieRating="G ";

}
// these are the parameters coming in vs movieYear is an obj that is already made
Movie::Movie( string name, int year, string rating){// if you set year=1999, these can be OPTIONAL parameters, when needed
													// setting parameters in a class call can be (MIB, ,G) ; year will default

	movieName = name;
	while ( year < 1900 || year> 2016){
		cout<<"Invalid year. Please enter a date range between 1900 and 2016"<<endl;
		cin>>year;
		cin.ignore();
	}
	this->movieYear = year;// you don't need this->; because the names are different( 2 different varaibale: 1obj & 1 class variable)
	this->movieRating = rating;
}
// destructor

Movie::~Movie() {}

// accessors
string Movie::getMovieName(){// better getmovieName(); to denote variable your  refferancing
	return movieName;
}

int Movie::getMovieYear(){
	return movieYear;
}

string Movie:: getMovieRating(){
	return movieRating;
}
// mutators

void Movie::setMovieName( string n){// to append any objs already in stack, not used here

	movieName=n;
}
void Movie::setMovieYear(int y){

	while ( y < 1900 || y> 2016){
		cout<<"Invalid year. Please enter a date range between 1900 and 2016"<<endl;
		cin>>y;
		cin.ignore();
	}

	this->movieYear= y;// place the new change from here into my created obj "this->"
}
void Movie:: setMovieRating(string r){
	movieRating=r;
}
//************methods


void Movie::printMovie( ){
	
	cout<<"     "<<getMovieName()<<" ,"
	    <<setw(8)<<"made in the year: "<<getMovieYear()
		<<"  "<<"rated: "<<getMovieRating()<<endl<<endl;
	
		
}// obj array
