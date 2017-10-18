/*
Zach Boulom
10/11/17
Determines the best cell phone plan based on usage
*/

#include <iostream>
using namespace std;

//inputs user data, calculates cost, and outputs cost
int AttUnlimited (int phones, int tablets){
    int cost_att_umlimited = 0;
    int total_att_umlimited = 0;
    
    if (phones==1){
        cost_att_umlimited = 90;
    }
    else if (phones==2){
        cost_att_umlimited = 145;
    }
    else if (phones>2 && phones<11){
        cost_att_umlimited = 145 + (phones * 20);
    }
    
    total_att_umlimited = cost_att_umlimited + (tablets * 20);
    
    return total_att_umlimited;
}

int AttFamily (int phones, int tablets, int data){
    int total_att_family = 0;
    int phone_cost = 0;
    int tablet_cost = 0;
    int data_cost = 0;
    
    phone_cost = phones * 20;
    tablet_cost = tablets * 10;
    
    if (data == 1){
        data_cost = 30;
    }
    else if (data > 1 && data <= 3){
        data_cost = 40;
    }
    else if (data > 3 && data <= 6){
        data_cost = 60;
    }
    else if (data > 6 && data <= 10){
        data_cost = 80;
    }
    else if (data > 10 && data <= 16){
        data_cost = 90;
    }
    else if (data > 1 && data <= 3){
        data_cost = 110;
    }
    
    total_att_family = phone_cost + tablet_cost + data_cost;
    
    return total_att_family;
}

int VerizonUnlimited (int phones, int tablets){
    int phone_cost = 0;
    int tablet_cost = 0;
    int total_verizon_cost = 0;
    
    if (phones == 1){
        phone_cost = 80;
    }
    else if (phones == 2){
        phone_cost = 110;
    }
    else if (phones >2){
        phone_cost = phones * 20;
    }
    
    tablet_cost = tablets * 10;
    total_verizon_cost = phone_cost + tablet_cost;
    
    return total_verizon_cost;
}

int SprintUnlimited (int phones, int tablets){
    int phone_cost = 0;
    
    if (phones == 1){
        phone_cost = 60;
    }
    else if (phones == 2){
        phone_cost = 110;
    }
    else if (phones > 2){
        phone_cost = 100 + (phones * 30);
    }
    
    return phone_cost;
}

int SprintTwoGigabytes (int phones, int data){
    int phone_cost = 0;
    
    if (data <= 2){
        phone_cost = phones * 40;
    }
    else {
        phone_cost = 1000000000;
    }
    
    return phone_cost;
}

int main(){
    int number_dumb_phones = 0;
    int number_smart_phones = 0;
    int total_phones = 0;
    int number_tablets = 0;
    int data = 0;
    
    string plan_one;
    int compare_one = 0;
    string plan_two;
    int compare_two = 0;
    string plan_three;
    int compare_three = 0;
    string plan_four;
    
    //takes user input
    cout << "input amount of dumb phones" << endl;
    cin >> number_dumb_phones;
    cout << "input amout of smart phones" << endl;
    cin >> number_smart_phones;
    cout << "input number of tablets" << endl;
    cin >> number_tablets;
    cout << "input data usage" << endl;
    cin >> data;
    
    total_phones = number_dumb_phones + number_smart_phones;
    
    //compares prices of plans
    if ( AttUnlimited(total_phones, number_tablets) < AttFamily(total_phones, number_tablets, data) ){
        plan_one = "ATT Unlimited";
        compare_one = AttUnlimited(total_phones, number_tablets);
    }
    else {
        plan_one = "ATT Family";
        compare_one = AttFamily(total_phones, number_tablets, data);
    }
    
    if ( VerizonUnlimited(total_phones, number_tablets) < SprintUnlimited(total_phones, number_tablets) ){
        plan_two = "Verizon Unlimited";
        compare_two = VerizonUnlimited(total_phones, number_tablets);
    }
    else {
        plan_two = "Sprint Unlimited";
        compare_two = SprintUnlimited(total_phones, number_tablets);
    }
    
    if (compare_one < compare_two) {
        plan_three = plan_one;
        compare_three = compare_one;
    }
    else {
        plan_three = plan_two;
        compare_three = compare_two;
    }
    
    if ( SprintTwoGigabytes(total_phones, data) < compare_three) {
        plan_four = "Sprint 2GB";
    }
    else {
        plan_four = plan_three;
    }
    
    //prints plan
    cout << endl << plan_four << endl;
}