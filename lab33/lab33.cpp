/*
Zach Boulom
10/18/17
Guessing game program that should read in a value between 1 and 50 
(if they enter a value outside of that range it should ask them to re-enter a value until they enter a valid value).
The program will check the user’s number against the computer generated number. 
If the user’s number is too high it will say “Too High” and ask the user to guess again. 
If the user’s number is too low, it will say “Too Low” and ask the user to guess again. 
If the user finds the number, the program will tell the user “Just Right” and end the program.
It should count down from 5 before telling them that they are correct or not.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//generates random number
int RandomNumberGenerator(){
    srand(time(0));
    int random_number = (rand() % 50) + 1;
    return random_number;
}

//counts down from 5 to 1
int CountDown(){
    int i = 0;
    for (i=5; i>0; --i){
        cout << i << endl << endl;
    }
}

int main() {
   int user_guess = 0;
   int random_number = 0;
   
   random_number = RandomNumberGenerator();
   
   cout << "Guess A Number From 1-50" << endl;
   cin >> user_guess;
   
   //compares user's guess to our generated number
   while(user_guess != random_number){
       if(user_guess > random_number){
           CountDown();
           cout << "too high" << endl;
           cin >> user_guess;
       }
       else if(user_guess < random_number){
           CountDown();
           cout << "too low" << endl;
           cin >> user_guess;
       }
   }
   CountDown();
   cout << "correct" << endl;
   
   return 0;
   
}