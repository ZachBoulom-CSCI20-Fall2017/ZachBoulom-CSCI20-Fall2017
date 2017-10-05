/*
Zach Boulom
9/25/17
calls the random number generator with two user defined values and then send that to pounds to kilograms and then to kilograms to pounds.  It should output all of the numbers (random number, pounds, kilograms, and final pounds)
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int RandomNumGen (int num_one, int num_two);
double PoundsToKilo (int pounds);
double KiloToPounds(int kilo);

int main(){
    //Global Variables
    int min = 0;
    int max = 0;
    
    cout << "Input A Number" << endl;
    cin >> min;
    cout << "Input Another Number" << endl;
    cin >> max;
    
    cout << endl << "Random Number Is " << RandomNumGen(min, max) << endl;
    cout << "Pounds To Kilograms Are " << PoundsToKilo(RandomNumGen(min, max)) << endl;
    cout << "Kilograms To Pounds Are " << KiloToPounds(RandomNumGen(min, max)) << endl;
    
}

//Swaps Inputs, Then Pick Random Number Between Them
int RandomNumGen (int num_one, int num_two){
    //Scope Limited To Inside RandomNumGen Function
    int new_num_one = 0;
    int new_num_two = 0;
    
    //Swaps Inputs
    new_num_one = num_two;
    new_num_two = num_one;
    
    //Picks Random Number
    srand(time(0));
    int random_number = rand() % (new_num_two-new_num_one+1)+new_num_two;
    
    return random_number;
}

//Converts LBs To Kilo
double PoundsToKilo (int pounds){
    //Scope Limited To Inside PoundsToKilo Function
    double kilo = 0;
    
    kilo = pounds/2.2046226218;
    
    return kilo;
}

//Converts Kilo To LBs
double KiloToPounds(int kilo){
    //Scope Limited To Inside KiloToPounds Function
    double pounds = 0;
    
    pounds = kilo*2.2046226218;
    return pounds;
    
}