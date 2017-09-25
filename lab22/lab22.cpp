/*
Zach Boulom
9/25/17
Generates a random number per run
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void RandomNumberGenerator(){
    srand(time(0));
    int random_number = (rand() % 100) + 1;
    cout << random_number << endl;
}

int main(){
    RandomNumberGenerator();
}