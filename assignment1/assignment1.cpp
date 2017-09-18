/* Zach Boulom
   9/17/17
   Determines Price Of Yogurt based on size(oz), toppings, coupon, tax, and tip
*/

#include <iostream>
#include <iomanip>
using namespace std;

struct yogurt {
    
    double yogurt_size = 0.00;
    double yogurt_cost = 0.17;
    double cost_yogurt_size = 0.00;
    
    int toppings_amount;
    double toppings_cost = 0.50;
    double cost_toppings_amount = 0.00;
    
    double tip = 0.00;
    
    int coupon;
    
    double sub_total = 0.00;
    double tax = 0.00;
    double total = 0.00;
    double tip_total = 0.00;
    
};

int main(){
    
    yogurt order;
    
    //inputs size(oz)
    cout << "enter size of yogurt in oz" << endl;
    cin >> order.yogurt_size;
    order.cost_yogurt_size = (order.yogurt_size*order.yogurt_cost)-0.04;
    cout << endl;
    
    //inputs topping
    
    cout << "enter amount of toppings" << endl;
    cin >> order.toppings_amount;
    order.cost_toppings_amount = order.toppings_amount*order.toppings_cost;
    cout << endl;
    
    //inputs coupon
    cout << "enter discount from coupon, 0 or 10% - 50%" << endl;
    cin >> order.coupon;
    cout << endl;
    
    //inputs tip
    cout << "enter tip" << endl;
    cin >> order.tip;
    cout << endl;
    
    //calculates subtotal with coupon
    order.sub_total = (order.cost_yogurt_size + order.cost_toppings_amount) - ((order.cost_yogurt_size + order.cost_toppings_amount) * (order.coupon / 100));
    cout << "sub total = $" << order.sub_total << endl;
    
    //calculates sales tax and tip, and rounds
    order.tax = (order.sub_total * 0.0725);
    cout << "tax = $" << fixed << setprecision(2) << order.tax << endl;
    order.total =  order.sub_total + order.tax;
    cout << "total = $" << fixed << setprecision(2) << order.total << endl;
    order.tip_total = order.total + order.tip;
    cout << "total with tip = $" << fixed << setprecision(2) << order.tip_total << endl;
    
    
    
    return 0;
}

/* 

A. 4, 1, 15%, $0.25
enter size of yogurt in oz
4

enter amount of toppings
1

enter discount from coupon, 0 or 10% - 50%
15

enter tip
0.25

sub total = $1.14
tax = $0.08
total = $1.22
total with tip = $1.47
---------------------------------------------------
B. 16, 7, 0%, $0
enter size of yogurt in oz
16

enter amount of toppings
7

enter discount from coupon, 0 or 10% - 50%
0

enter tip
0

sub total = $6.18
tax = $0.45
total = $6.63
total with tip = $6.63
---------------------------------------------------
C. 32, 4, 25%, $0.50
enter size of yogurt in oz
32

enter amount of toppings
4

enter discount from coupon, 0 or 10% - 50%
25

enter tip
0.5

sub total = $7.4
tax = $0.54
total = $7.94
total with tip = $8.44
---------------------------------------------------
D. 14, 10, 50%, $1.00
enter size of yogurt in oz
14

enter amount of toppings
10

enter discount from coupon, 0 or 10% - 50%
50

enter tip
1

sub total = $7.34
tax = $0.53
total = $7.87
total with tip = $8.87
*/