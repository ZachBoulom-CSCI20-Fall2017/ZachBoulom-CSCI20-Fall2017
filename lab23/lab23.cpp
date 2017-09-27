/*
Zach Boulom
9/25/17
random number generator between two values of the user’s choice – accepts two values, swaps them (using the function), and outputs a random number between them.
swap function accepts two values and swaps them – accepts two values and swaps the values
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


//swaps both numbers
int NumberSwapper(int num_one, int num_two, int& new_num_one, int& new_num_two){
    new_num_one = num_two;
    new_num_two = num_one;
}

//picks random number
int RandomNumGen (int new_num_one, int new_num_two){
    srand(time(0));

    int random_number = rand() % (new_num_two-new_num_one+1)+new_num_two;
}

int main(){
    int new_num_one = 0;
    int new_num_two = 0;
    int num_one = 0;
    int num_two = 0;
    int random_number = 0;
    
    cout << "Enter A Number" << endl;
    cin >> num_one;
    cout << "Enter Another Number, Greater Than The Last" << endl;
    cin >> num_two;
    
    NumberSwapper(num_one, num_two, new_num_one, new_num_two);
    random_number = RandomNumGen(new_num_one, new_num_two);
    
    cout << endl << "Your Number Is " << random_number;
}