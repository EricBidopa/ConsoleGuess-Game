#include <iostream>
#include <random>
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::getline;


int main(){
  string userName;
  int userGuess;
  int from;
  int to;
  cout<<"Hello Superstar,\t Welcome to my Arena, what name should I call you? \t Please type is below :)"<<endl;
  getline(cin, userName);
  cout<<"Hey "<<userName<<", I am super excited to play this game with you"<<endl;
  cout<<"Rules: You are going to choose a range for me to choose a Random number number from the range you choose \t Afterwards, You will have to guess the number I choose within your chosen range to win \t Dont worry, I will give you some clues "<<userName<<endl;
  cout<<"so lets begin" <<userName<<"! :)"<<endl;
  cout<<"Let get started with a the range for you want me to choose the random number from"<<endl;
  cout<<"Type the first Number (starts from) Below: "<<endl;
  cin>>from;
  cout<<"great, Type the next number(to) for the range: "<<endl;
  cin>>to;


  // initialize random number generator engine 
    std::random_device rd;
    std::mt19937 gen(rd());
    //Define range for the random number
    std::uniform_int_distribution<int> distr(from, to);

    int randomNumber = distr(gen); //variable to generate and store random number.
    // cout<<randomNumber<<endl;
    cout<< "All inputs stored "<<userName<<":)"<<endl;
    cout<<"I have chosed a number and stored in my head from the range you gave me"<<endl;
    cout<<"Let\'s see if you are lucky enough. Guess the number in my head, Don\'t worry, \n if you are wrong on your first try, I will give you clues to help you get closer"<<endl;
    cout<<"Type your guess below: "<<endl;
    cin>>userGuess;
    while (userGuess != randomNumber)
    {
      if ( (randomNumber - userGuess) >= 0.5 * to && userGuess <= randomNumber){
        cout<<"Nerrh!!, Your guess is \"super far\" and less than the number in my head. Try again by typing another number below "<<userName<<endl;
        cin>>userGuess;

      }
      else if ( (randomNumber - userGuess) >= 0.5 * to && userGuess >= randomNumber){
        cout<<"Nerrh!!, Your guess is \"super far\" and greater than the number in my head. Try again by typing another number below "<<userName<<endl;
        cin>>userGuess;

      }
      else if ( (randomNumber - userGuess) >= 0.4 * to && userGuess <= randomNumber){
        cout<<"Nerrh!!, Your guess is \"farely far\" and less than the number in my head. Try again by typing another number below "<<userName<<endl;
        cin>>userGuess;

      }
      else if ( (randomNumber - userGuess) >= 0.4 * to && userGuess >= randomNumber){
        cout<<"Nerrh!!, Your guess is \"farely far\" and greater than the number in my head. Try again by typing another number below "<<userName<<endl;
        cin>>userGuess;

      }
      else if ( (randomNumber - userGuess) >= 0.3 * to && userGuess <= randomNumber){
        cout<<"Nerrh!!, Your guess is \" not too far\" and less than the number in my head. Try again by typing another number below "<<userName<<endl;
        cin>>userGuess;

      }
      else if ( (randomNumber - userGuess) >= 0.3 * to && userGuess >= randomNumber){
        cout<<"Nerrh!!, Your guess is \"not to far\" and greator than the number in my head. Try again by typing another number below "<<userName<<endl;
        cin>>userGuess;

      }
      else if ( (randomNumber - userGuess) >= 0.2 * to && userGuess <= randomNumber){
        cout<<"Nerrh!!, Your guess is \"close\" and less than the number in my head. Try again by typing another number below "<<userName<<endl;
        cin>>userGuess;

      }
      else if ( (randomNumber - userGuess) >= 0.2 * to && userGuess >= randomNumber){
        cout<<"Nerrh!!, Your guess is \"close\" and greater than the number in my head. Try again by typing another number below "<<userName<<endl;
        cin>>userGuess;
      }
      else if ( (randomNumber - userGuess) >= 0.1 * to && userGuess <= randomNumber){
        cout<<"Nerrh!!, Your guess is \"super close!!\" and less than the number in my head. Try again by typing another number below. You almost got it "<<userName<<endl;
        cin>>userGuess;

      }
      else if ( (randomNumber - userGuess) >= 0.1 * to && userGuess >= randomNumber){
        cout<<"Nerrh!!, Your guess is \"super close!!\" and less than the number in my head. Try again by typing another number below. You almost got it "<<userName<<endl;
        cin>>userGuess;

      }
      else if ( (randomNumber - userGuess) < 0.1 * to && userGuess >= randomNumber){
        cout<<"Nerrh!!, Your guess is \"super close!!\" and greater than the number in my head. Try again by typing another number below. You almost got it "<<userName<<endl;
        cin>>userGuess;
      }
      else if ( (randomNumber - userGuess) < 0.1 * to && userGuess <= randomNumber){
        cout<<"Nerrh!!, Your guess is \"super close!!\" and less than the number in my head. Try again by typing another number below. You almost got it "<<userName<<endl;
        cin>>userGuess;
        
      }
      else{
        cout<<"This never gets executed"<<endl;
      }
      
    }
    cout<< "You are INDEED LUCKY "<<userName<< "It was an honor having you play this game with me"<<endl;
  return 0;
}

