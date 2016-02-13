# include <iostream>
#include  <string>
# include "Movie.h"
//#include <cstdlib>
using namespace std;
// array of class objects #3


/*
struct StructMovie// in main
{
	string movieName;
	int movieYear;
	string movieRating;

};*/

//void printMovie( StructMovie structmovie[3]);//


int main(){

	Movie movie[3];
	
	cout<<"please enter your top three movie picks"<<endl<<endl;

		for(int i=0; i < 3; i++)
		{
		cout<<" Enter movie name no."<< i + 1 << endl;
		getline(cin,movie[i].movieName, 50);
		
		cout<<"Enter the year the movie was made"<<endl;
		cin>>movie[i].movieYear;
		cin.ignore();
		
		cout<<"Enter the rating: G, PG, R,  or M"<< endl;
		getline(cin,movie[i].movieRating);
		
		}
		
		
		// call movieDisplay for all in Movie array( make in class not here)
		printMovie(movie[3]);
		
		system("pause");

	return 0;

}// end Of Main

