# include <iostream>
#include  <string>
# include "Movie.h"

using namespace std;
// array of class objects #3




int main(){

	string name;
	int year;
	string rating;

	Movie movie[3];
	cout<<"kallunkij change "<<endl<<endl;
	cout<<"please enter your top three movie picks"<<endl<<endl;

		for(int i=0; i < 3; i++)
		{
		cout<<" Enter movie name no."<< i + 1 << endl;
		getline(cin,name);
		movie [i].setMovieName(name);
		
		cout<<"Enter the year the movie was made"<<endl;
		cin>> year;
		cin.ignore();//
			
			movie[i].setMovieYear(year);
		
		cout<<"Enter the rating: G, PG, R,  or M"<< endl;
		getline(cin,rating);
			
			movie[i].setMovieRating (rating);
		
		}
		
		//cout<<movie[1].getMovieName();

		// call movieDisplay for all in Movie array( make in class not here)
		printMovie(movie[3]);
		
		//system("pause");
		cin.get();

	return 0;

}// end Of Main

