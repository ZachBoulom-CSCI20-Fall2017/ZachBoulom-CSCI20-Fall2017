#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void guessingGame ();

int main()
{
    cout<<"We are going to play the guessing game 3 times"<<endl;
    guessingGame();
    guessingGame();
    guessingGame();
}

void guessingGame ()
{
    srand(time(0));
    int randomNumber = rand() % 10 + 1;

    int userNumber = 0;
    cout<<"Please choose a number between 1 and 10";
    cin>>userNumber;

    cout<<"You picked: "<<userNumber<<"  The number was: "<<randomNumber<<endl;
}

//Identify with //* 2-4 items that are important
//Including c standard library, using void when creating your function

//Identify with //? 2-4 items that are incorrect, unclear, or you have questions on.
//What is ctime, what is sran(time(0));, and why is void guessingGame (); at the top

//Comment the function appropriately
// void GuessingGame ()

//Identify the following parts of the function:
//  definition
//      
//  declaration
//      void GuessingGame ()
//  body
/*       srand(time(0));
         int randomNumber = rand() % 10 + 1;

         int userNumber = 0;
         cout<<"Please choose a number between 1 and 10";
         cin>>userNumber;

         cout<<"You picked: "<<userNumber<<"  The number was: "<<randomNumber<<endl;
*/
//  function call
/*          guessingGame();
            guessingGame();
            guessingGame();
*/