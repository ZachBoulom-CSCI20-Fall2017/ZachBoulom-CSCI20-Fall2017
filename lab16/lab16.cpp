/* Zach Boulom
   9/13/17
   A program which allows the user to enter stock data, calculates the total stock value, and prints out the data
*/

#include <iostream>
#include <string>
using namespace std;

struct stocks{
    string stock_name;
    string sector;
    double curret_share_price = 0.00;
    double number_of_shares_owned = 0.00;
    double stock_value = 0.00;
};

int main(){
    
    double total_value = 0.00;
    
    //Inputs Stock Data
    stocks stock_one;
    cout << "What Sector?" << endl;
    cin >> stock_one.sector;
    cout << "What Is The Stock Name?" << endl;
    cin >> stock_one.stock_name;
    cout << "How Many Shares Do You Own?" << endl;
    cin >> stock_one.number_of_shares_owned;
    cout << "What Is The Current Share Price?" << endl;
    cin >> stock_one.curret_share_price;
    
    stocks stock_two;
    cout << endl << "What Sector?" << endl;
    cin >> stock_two.sector;
    cout << "What Is The Stock Name?" << endl;
    cin >> stock_two.stock_name;
    cout << "How Many Shares Do You Own?" << endl;
    cin >> stock_two.number_of_shares_owned;
    cout << "What Is The Current Share Price?" << endl;
    cin >> stock_two.curret_share_price;
    
    stocks stock_three;
    cout << endl << "What Sector?" << endl;
    cin >> stock_three.sector;
    cout << "What Is The Stock Name?" << endl;
    cin >> stock_three.stock_name;
    cout << "How Many Shares Do You Own?" << endl;
    cin >> stock_three.number_of_shares_owned;
    cout << "What Is The Current Share Price?" << endl;
    cin >> stock_three.curret_share_price;
    
    stocks stock_four;
    cout << endl << "What Sector?" << endl;
    cin >> stock_four.sector;
    cout << "What Is The Stock Name?" << endl;
    cin >> stock_four.stock_name;
    cout << "How Many Shares Do You Own?" << endl;
    cin >> stock_four.number_of_shares_owned;
    cout << "What Is The Current Share Price?" << endl;
    cin >> stock_four.curret_share_price;
    
    stocks stock_five;
    cout << endl << "What Sector?" << endl;
    cin >> stock_five.sector;
    cout << "What Is The Stock Name?" << endl;
    cin >> stock_five.stock_name;
    cout << "How Many Shares Do You Own?" << endl;
    cin >> stock_five.number_of_shares_owned;
    cout << "What Is The Current Share Price?" << endl;
    cin >> stock_five.curret_share_price;
    
    //Calculates Total Value
    stock_one.stock_value = stock_one.number_of_shares_owned * stock_one.curret_share_price;
    stock_two.stock_value = stock_two.number_of_shares_owned * stock_two.curret_share_price;
    stock_three.stock_value = stock_three.number_of_shares_owned * stock_three.curret_share_price;
    stock_four.stock_value = stock_four.number_of_shares_owned * stock_four.curret_share_price;
    stock_five.stock_value = stock_five.number_of_shares_owned * stock_five.curret_share_price;
    total_value = stock_one.stock_value + stock_two.stock_value + stock_three.stock_value + stock_four.stock_value + stock_five.stock_value;
   
    //Displays Portfolio
    cout << endl << "Stock Name" << "   " << "No Of Shares" << "   " << "Current Value" << "   " << "Total Value" << endl << endl;
    cout << stock_one.stock_name << "      " << stock_one.number_of_shares_owned << "      " << stock_one.curret_share_price << "      " << stock_one.stock_value << endl;
    cout << stock_two.stock_name << "   " << stock_two.number_of_shares_owned << "   " << stock_two.curret_share_price << "   " << stock_two.stock_value << endl;
    cout << stock_three.stock_name << "      " << stock_three.number_of_shares_owned << "      " << stock_three.curret_share_price << "      " << stock_three.stock_value << endl;
    cout << stock_four.stock_name << "      " << stock_four.number_of_shares_owned << "      " << stock_four.curret_share_price << "      " << stock_four.stock_value << endl;
    cout << stock_five.stock_name << "      " << stock_five.number_of_shares_owned << "      " << stock_five.curret_share_price << "      " << stock_five.stock_value << endl << endl;
    cout << "$" << total_value;
    
}