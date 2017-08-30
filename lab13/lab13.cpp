/* 
   Zach Boulom
   8/30/17
   Estimates The Population Of The United States
*/

#include <iostream>
using namespace std;

int main(){
    
    int user_input = 0;
    int net_gain = 31536000/12;
    int current_population = 325770117;
    
    cout << "Input how many years from 2017" << endl;
    
    cin >> user_input;
    current_population = current_population + net_gain * user_input;
    cout << current_population;
    

    
}