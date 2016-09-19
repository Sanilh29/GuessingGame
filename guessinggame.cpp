//Sanil Hattangadi, 9/19/16, user has to guess the number the computers thinking of
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
using namespace std;


int main() {
  srand (time(NULL)); //creates random number
  int randomNum = rand()%101;
  int guess = -1;
  int count = 1; //guess number start at 1
  bool play = true; 
  char yesno[4];
  cout << "Welcome to Guessing Game, where you will have to guess the number I'm thinking of." << endl; //say this
  cout << "The number is between 0 and 100.Guess what number it is?" << endl;
  while (play == true){ //when true, do this
    cin >> guess; //the number we type, becomes the guess
    if (guess < randomNum){ //if guess is to low
      cout << "The guess is too low. Guess again."<< endl;
      count++;//add 1 the the number of guesses
    }
    else if (guess > randomNum){ // guess is too high
      cout << "The guess it too high. Guess again"<< endl;
      count++; //add 1 to the number of guesses
    }
    else if (guess == randomNum){ // if guess equals random number
      cout << "You won! It took you " << count << " guesses"<< endl;
      play = false;  //the game ends
      cout << "Do you want to play again?" << endl;
      cin>> yesno;
      if (0 == strcmp(yesno, "y")){
	play = true; 
	randomNum = rand()%101; //create a new number
      }
    }
  }
}
//random numbers are the same each time
