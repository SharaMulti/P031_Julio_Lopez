/* Amerike university
Author: Julio López
Date: 03/05/25
Practice #: 31
Description: This program shall check if the user is old enough to see a movie from a list of movies*/
 
#include <iostream>
 using namespace std;

class Movie 
{
      private:
      string Name;
      string Resume;
      string Rating;
      int Lenght;

      public:

      void setName(string name)
      {
            Name = name;
      }
      void setResume(string resume)
      {
            Resume = resume;
      }
      void setRating(string rating)
      {
            Rating = rating;
      }
      int setLenght(int lenght)
      {
            Lenght = lenght;
      }

      string getName()
      {
            return Name;
      }
      string getResume()
      {
            return Resume;
      }
      string getRating()
      {
            return Rating;
      }
      int getLenght()
      {
            return Lenght;
      }

      void Info()
      {
            cout << "Name: " << getName();
            cout << "Resume: " << getResume();
            cout << "Rating: " << getRating();
            cout << "Lenght in minutes: " << getLenght();
      }
};

void SeeMovies(Movie movies[], int Options)
{
    cout << "Movies: \n";
    for(int i = 0; i < Options; i++)
    {
        cout << i + 1 << " " << movies[1].getName();  
    }
}

void Details(Movie& watch, int Age)
{
    cout << "Movie info";
    watch.Info();

    string rate = watch.getRating();
    bool canWatch = true;

    if (rate == "A" && Age < 12) canWatch = false;

    else if(rate == "B" && Age < 15) canWatch = false;

    else if (rate == "C" && Age < 18) canWatch = false;

    if (canWatch)
    cout << " You can watch it";
    else cout << " You cant watch it";
}

int main(){

    const int Movi = 3;
    Movie movies[Movi];

    movies[0].setName("Black Adam \n");
    movies[0].setResume("Its about a anit hero waking up in a world far different from the one he remembers \n");
    movies[0].setRating("B \n");
    movies[0].setLenght(125);

    movies[1].setName("A movie about eggs \n");
    movies[1].setResume("Its about a egg that wants to return to the farm he comes from to meet up with his mom \n");
    movies[1].setRating("A \n");
    movies[1].setLenght(90);

    movies[2].setName("The THING \n");
    movies[2].setResume("Its about a alien hiding withing a group of people and tries to kill them off \n");
    movies[2].setRating("C \n");
    movies[2].setLenght(109);

    SeeMovies(movies, Movi);

    int Choice, Age;

    cout << "Pick a movie number: ";
    cin  >> Choice;

    cout << "Type your age: ";
    cin >> Age;

    Details(movies[Choice - 1], Age);

    return 0;




}