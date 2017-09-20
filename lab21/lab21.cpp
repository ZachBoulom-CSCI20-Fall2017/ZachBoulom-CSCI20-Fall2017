/* 
   Zach Boulom
   9/20/17
   Outputs info about windchills based on the user's inputs of temperature and starting wind speed
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    double temperature = 0.00;
    double velocity = 0.00;
    double old_windchill = 0.00;
    double new_windchill = 0.00;
    double difference = 0.00;
    
    //takes user input
    cout << "Enter Temperture" << endl;
    cin >> temperature;
    cout << "Enter Velocity" << endl;
    cin >> velocity;
    
    //calculates old windchill, new windchill and difference
    old_windchill = 0.081 * (3.71 * sqrt(velocity) + 5.81 - 0.25 * velocity) * (temperature - 91.4) + 91.4;
    new_windchill = 35.74 + 0.6215 * temperature - 35.75 * (pow(velocity,0.16)) + 0.4275 * temperature * pow(velocity,0.16);
    difference = abs(new_windchill-old_windchill);
    
    //displays windchill
    cout << endl << "Old Wind Chill " << old_windchill << endl;
    cout << "New Wind Chill " << new_windchill << endl;
    cout << "Difference     " << difference << endl;
    
    return 0;
    
}

/*
Temperature : 30; windspeed(velocity): 4

Old Wind Chill 30.5753
New Wind Chill 25.767
Difference     4.8083
--------------------------------------------
Temperature : 39.25; windspeed(velocity): 10

Old Wind Chill 27.8601
New Wind Chill 32.713
Difference     4.85286
--------------------------------------------
Temperature: 100; windspeed (velocity): 2

Old Wind Chill 98.7538
New Wind Chill 105.711
Difference     6.95719
*/