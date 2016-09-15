#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
using namespace std;


int main() {
  srand (time(NULL));
  int randomNum = rand()%101;
  int guess = -1;
  int count = 1;
  bool play = true;
  char yesno[4];
  cout << "Welcome to Guessing Game, where you will have to guess the number I'm thinking of." << endl;
  cout << "The number is between 0 and 100.Guess what number it is?" << endl;
  while (play == true){
    cin >> guess;
    if (guess < randomNum){
      cout << "The guess is too low. Guess again."<< endl;
      count++;
    }
    else if (guess > randomNum){
      cout << "The guess it too high. Guess again"<< endl;
      count++;
    }
    else if (guess == randomNum){
      cout << "You won! It took you " << count << " guesses"<< endl;
      play = false; 
      cout << "Do you want to play again?" << endl;
      cin>> yesno;
      if (0 == strcmp(yesno, "y")){
	play = true;
	randomNum = rand()%101;
      }
    }
  }
}
//random numbers are the same each time
