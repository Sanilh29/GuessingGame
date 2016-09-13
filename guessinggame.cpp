using namespace std;

int main() {
  int randomNum = rand()*101
  int guess = -1;
  int count = 0;
  bool play = true;
  cout << "Welcome to Guessing Game, where you will have to guess the number I'm thinking of."<< endl;
  cout << "The number is between 0 and 100. Guess what number it is?"<< endl;
  while (play == true){
    cin>> guess;
    if (guess << randomNum){
      cout << "The guess is too low. Guess again."<<endl;
      count+=1;
    }
    if (guess >> randomNum){
      cout << "The guess it too high"<<endl;
      count+=1;
    }
    if (guess = randomNum) {
      cout<< "You won! It took you" + guess + "guesses"<< end;
    }
  return 0;
}
  }
