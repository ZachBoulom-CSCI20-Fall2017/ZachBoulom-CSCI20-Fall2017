/*
Zach Boulom
11/13/17
This program is responsible for creating user names for a new website you have created.  
It should accept a first name of up to 10 stringacters and a last name of up to 20 stringacters.  
It should tell the user if the name is larger than the max size.  
It should also determine if the names are the same and output a warning.  
After checking these things, it should create three different user name options (for example: apbrowne; aprilbrowne; abrowne).
*/

#include <iostream>
#include <cstring>
#include <string.h>
#include <string>
using namespace std;

int main(){
    int userone_firstname_length = 0;
    int userone_lastname_length = 0;
    int usertwo_firstname_length = 0;
    int usertwo_lastname_length = 0;
    int userthree_firstname_length = 0;
    int userthree_lastname_length = 0;
    int userfour_firstname_length = 0;
    int userfour_lastname_length = 0;

//=========================================takes user input and check character length/repeat names    
    cout << "Type First Name" << endl;
    string userone_firstname;
    cin >> userone_firstname;
    while(userone_firstname.length() > 10){
       cout << "Too many characters, keep under 10" << endl;
       cin >> userone_firstname;
    }
    
    cout << "Type Last Name" << endl;
    string userone_lastname;
    cin >> userone_lastname;
    while(userone_lastname.length() > 20){
       cout << "Too many characters, keep under 20" << endl;
       cin >> userone_lastname;
    }
    
//=========================================
    cout << "Type First Name" << endl;
    string usertwo_firstname;
    cin >> usertwo_firstname;
    while(usertwo_firstname.length() > 10){
       cout << "Too many characters, keep under 10" << endl;
       cin >> usertwo_firstname;
    }
    while (userone_firstname.compare(usertwo_firstname) == 0){
        cout << "Name taken, please try again" << endl;
        cin >> usertwo_firstname;
    }
    
    cout << "Type Last Name" << endl;
    string usertwo_lastname;
    cin >> usertwo_lastname;
    while(usertwo_lastname.length() > 20){
       cout << "Too many characters, keep under 20" << endl;
       cin >> userone_lastname;
    }
    while (userone_firstname.compare(usertwo_firstname) == 0){
        cout << "Name taken, please try again" << endl;
        cin >> usertwo_lastname;
    }

//=========================================    
    cout << "Type First Name" << endl;
    string userthree_firstname;
    cin >> userthree_firstname;
    while(userthree_firstname.length() > 10){
       cout << "Too many characters, keep under 10" << endl;
       cin >> userone_firstname;
    }
    while ((userthree_firstname.compare(usertwo_firstname) == 0) || (userthree_firstname.compare(userone_firstname) == 0)){
        cout << "Name taken, please try again" << endl;
        cin >> userthree_firstname;
    }
    
    cout << "Type Last Name" << endl;
    string userthree_lastname;
    cin >> userthree_lastname;
    while(userthree_lastname.length() > 20){
       cout << "Too many characters, keep under 20" << endl;
       cin >> userone_lastname;
    }
    while ((userthree_lastname.compare(usertwo_lastname) == 0) || (userthree_lastname.compare(userone_lastname) == 0)){
        cout << "Name taken, please try again" << endl;
        cin >> userthree_lastname;
    }
    
    
//=========================================    
    cout << "Type First Name" << endl;
    string userfour_firstname;
    cin >> userfour_firstname;
    while(userfour_firstname.length() > 10){
       cout << "Too many characters, keep under 10" << endl;
       cin >> userone_firstname;
    }
    while ((userfour_firstname.compare(userthree_firstname) == 0) || (userfour_firstname.compare(usertwo_firstname) == 0) || (userfour_firstname.compare(userone_firstname) == 0)){
        cout << "Name taken, please try again" << endl;
        cin >> userfour_firstname;
    }
    
    cout << "Type Last Name" << endl;
    string userfour_lastname;
    cin >> userfour_lastname;
    while(userfour_lastname.length() > 20){
       cout << "Too many characters, keep under 20" << endl;
       cin >> userone_lastname;
    }
    while ((userfour_lastname.compare(userthree_lastname) == 0) || (userfour_lastname.compare(usertwo_lastname) == 0) || (userfour_lastname.compare(userone_lastname) == 0)){
        cout << "Name taken, please try again" << endl;
        cin >> userfour_lastname;
    }
    
    
//==============================================================================
//gets rid of extra spaces
    userone_firstname_length = userone_firstname.length();
    userone_lastname_length = userone_lastname.length();
    usertwo_firstname_length = usertwo_firstname.length();
    usertwo_lastname_length = usertwo_lastname.length();
    userthree_firstname_length = userthree_firstname.length();
    userthree_lastname_length = userthree_lastname.length();
    userfour_firstname_length = userfour_firstname.length();
    userfour_lastname_length = userfour_lastname.length();

//displays names and suggested names
    cout << endl << "Recommended Names: " << endl<< endl;
    
    cout << endl;
    for (int i = 0; i < userone_firstname_length; i++){
        cout << userone_firstname[i];
    }
    cout << " ";
    for (int i = 0; i < userone_lastname_length; i++){
        cout << userone_lastname[i];
    }
    cout << endl;
    
        cout << userone_firstname[0] << userone_firstname[1] << "37"<< endl;
        cout << userone_firstname << userone_firstname << endl;
        cout << userone_lastname[2] << userone_firstname << endl<< endl<< endl;
        
//========================================================    
    for (int i = 0; i < usertwo_firstname_length; i++){
        cout << usertwo_firstname[i];
    }
    cout << " ";
    for (int i = 0; i < usertwo_lastname_length; i++){
        cout << usertwo_lastname[i];
    }
    cout << endl;
    cout << usertwo_firstname[0] << usertwo_firstname[1] << "37"<< endl;
        cout << usertwo_firstname << usertwo_firstname << endl;
        cout << usertwo_lastname[2] << usertwo_firstname << endl<< endl<< endl;
        
//========================================================    
    for (int i = 0; i < userthree_firstname_length; i++){
        cout << userthree_firstname[i];
    }
    cout << " ";
    for (int i = 0; i < userthree_lastname_length; i++){
        cout << userthree_lastname[i];
    }
    cout << endl;
    cout << userthree_firstname[0] << userthree_firstname[1] << "37"<< endl;
        cout << userthree_firstname << userthree_firstname << endl;
        cout << userthree_lastname[2] << userthree_firstname << endl<< endl<< endl;
        
//========================================================    
    for (int i = 0; i < userfour_firstname_length; i++){
        cout << userfour_firstname[i];
    }
    cout << " ";
    for (int i = 0; i < userfour_lastname_length; i++){
        cout << userfour_lastname[i];
    }
    cout << endl;
    cout << userfour_firstname[0] << userfour_firstname[1] << "37"<< endl;
        cout << userfour_firstname << userfour_firstname << endl;
        cout << userfour_lastname[2] << userfour_firstname << endl<< endl<< endl;
        



}