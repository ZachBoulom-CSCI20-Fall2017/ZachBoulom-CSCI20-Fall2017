/* Zach Boulom
   9/6/17
   Emulates a CoinStar Machine.
*/

#include <iostream>
using namespace std;

int main(){
    
    int quarters_value = 25;
    int dimes_value = 10;
    int nickels_value = 5;
    int pennies_value = 1;
    double fee_value = 0.109;
    int coins_value;
    double fee;
    double net_value;
    
    int user_coins;
    int user_quarters;
    int user_dimes;
    int user_nickels;
    int user_pennies;
    
    int quarters_modulo;
    int dimes_modulo;
    int nickels_modulo;

    
    cout << "Enter Amount Of Coins" << endl;
    cin >> user_coins;
    
    //converts coins to quarters, dimes, nickels, and pennies
    user_quarters = user_coins / quarters_value;
    quarters_modulo = user_coins % quarters_value;
    
    user_dimes = quarters_modulo / dimes_value;
    dimes_modulo = quarters_modulo % dimes_value;
    
    user_nickels = dimes_modulo / nickels_value;
    nickels_modulo = dimes_modulo % nickels_value;
    
    user_pennies = nickels_modulo / pennies_value;
    
    //displays types of coins entered
    cout << endl << user_quarters << " quarter/s" << endl;
    cout << user_dimes << " dime/s" << endl;
    cout << user_nickels << " nickel/s" << endl;
    cout << user_pennies << " penny/pennies" << endl;
    
    //values coins in dollars and cents
    coins_value = (user_quarters * quarters_value) + (user_dimes * dimes_value) + (user_nickels * nickels_value) + (user_pennies * pennies_value);

    //calculates amount after fee
    fee = fee_value * static_cast<double>(coins_value);
    net_value = (coins_value - fee)/10;
    cout << endl << "Amount due back $" << net_value;

}