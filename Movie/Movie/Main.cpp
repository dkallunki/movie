# include <iostream>
#include  <string>
# include "Movie.h"
using namespace std;

void printMovie( Movie movie);

int main(){

	// look new, get memory
	string movie_Name;
	string movie_Rating;
	int movie_Year;
	
	cout<<"please enter your top three movie picks"<<endl<<endl;
	
		cout<<" Enter movie name no.1"<<endl;
		getline(cin,movie_Name);
		
		cout<<"Enter the year the movie was made"<<endl;
		cin>>movie_Year;
		cin.ignore();
		// call vailyear()
		cout<<"Enter the rating: G, PG, R,  or M"<< endl;
		getline(cin,movie_Rating);
		Movie movie1 ( movie_Name, movie_Year, movie_Rating);// put in loop


		
		// cut and paste 3x change to 2nd and 3rd
		cout<<" Enter movie name no.2"<<endl;
		getline(cin, movie_Name);
		cout<<"Enter the year the movie was made"<<endl;
		cin >> movie_Year;
		cin.ignore();
		// call vailyear()
		cout<<"Enter the rating: G, PG, R,  or M"<< endl;
		getline(cin ,movie_Rating);
		Movie movie2 ( movie_Name, movie_Year, movie_Rating);

		cout<<" Enter movie name no.3"<<endl;
		getline(cin, movie_Name);// use to get all words
		cout<<"Enter the year the movie was made"<<endl;
		cin >> movie_Year;// use for numbers
		cin.ignore();// use to get rid of "\n" after getline( cin, variable)
		
		cout<<"Enter the rating: G, PG, R,  or M"<< endl;
		getline(cin ,movie_Rating);
		Movie movie3 ( movie_Name, movie_Year, movie_Rating);
		
		// call movieDisplay for all in Movie array( make in class not here)
		printMovie( movie1);
		printMovie( movie2);
		printMovie( movie3);

		system("pause");

	return 0;

}// end Of Main

void printMovie( Movie movie){

	cout<<movie.getName()<<endl;
	cout<<movie.getYear()<<endl;
	cout<<movie.getRating()<<endl<<endl;


}