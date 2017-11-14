/*
Zach Boulom
11/13/17
This program is responsible for creating user names for a new website you have created.  
It should accept a first name of up to 10 characters and a last name of up to 20 characters.  
It should tell the user if the name is larger than the max size.  
It should also determine if the names are the same and output a warning.  
After checking these things, it should create three different user name options (for example: apbrowne; aprilbrowne; abrowne).
*/

#include <iostream>
#include <cstring>
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
    
    cout << "Type First Name" << endl;
    char userone_firstname[11];
    cin >> userone_firstname;
    
    cout << "Type Last Name" << endl;
    char userone_lastname[21];
    cin >> userone_lastname;
    
//=========================================
    cout << "Type First Name" << endl;
    char usertwo_firstname[11];
    cin >> usertwo_firstname;
    while (strcmp (userone_firstname, usertwo_firstname) == 0){
        cout << "Name taken, please try again" << endl;
        cin >> usertwo_firstname;
    }
    
    cout << "Type Last Name" << endl;
    char usertwo_lastname[21];
    cin >> usertwo_lastname;
    while (strcmp (userone_firstname, usertwo_firstname) == 0){
        cout << "Name taken, please try again" << endl;
        cin >> usertwo_lastname;
    }

//=========================================    
    cout << "Type First Name" << endl;
    char userthree_firstname[11];
    cin >> userthree_firstname;
    while ((strcmp (userthree_firstname, usertwo_firstname) == 0) || (strcmp (userthree_firstname, userone_firstname) == 0)){
        cout << "Name taken, please try again" << endl;
        cin >> userthree_firstname;
    }
    
    cout << "Type Last Name" << endl;
    char userthree_lastname[21];
    cin >> userthree_lastname;
    while ((strcmp (userthree_lastname, usertwo_lastname) == 0) || (strcmp (userthree_lastname, userone_lastname) == 0)){
        cout << "Name taken, please try again" << endl;
        cin >> userthree_lastname;
    }
    
    
//=========================================    
    cout << "Type First Name" << endl;
    char userfour_firstname[11];
    cin >> userfour_firstname;
    while ((strcmp (userfour_firstname, userthree_firstname) == 0) || (strcmp (userfour_firstname, usertwo_firstname) == 0) || (strcmp (userfour_firstname, userone_firstname) == 0)){
        cout << "Name taken, please try again" << endl;
        cin >> userfour_firstname;
    }
    
    cout << "Type Last Name" << endl;
    char userfour_lastname[21];
    cin >> userfour_lastname;
    while ((strcmp (userfour_lastname, userthree_lastname) == 0) || (strcmp (userfour_lastname, usertwo_lastname) == 0) || (strcmp (userfour_lastname, userone_lastname) == 0)){
        cout << "Name taken, please try again" << endl;
        cin >> userfour_lastname;
    }
    
    
//==============================================================================
    userone_firstname_length = strlen(userone_firstname);
    userone_lastname_length = strlen(userone_lastname);
    usertwo_firstname_length = strlen(usertwo_firstname);
    usertwo_lastname_length = strlen(usertwo_lastname);
    userthree_firstname_length = strlen(userthree_firstname);
    userthree_lastname_length = strlen(userthree_lastname);
    userfour_firstname_length = strlen(userfour_firstname);
    userfour_lastname_length = strlen(userfour_lastname);
    
    cout << endl;
    for (int i = 0; i < userone_firstname_length; i++){
        cout << userone_firstname[i];
    }
    cout << " ";
    for (int i = 0; i < userone_lastname_length; i++){
        cout << userone_lastname[i];
    }
    cout << endl;
    cout << endl << "Recommended Names: " << endl<< endl;
        cout << userone_firstname[0] << userone_firstname[1] << "37"<< endl;
        cout << userone_firstname << userone_firstname << endl;
        cout << userone_lastname[2] << userone_firstname << endl<< endl<< endl;
        cout << " ";
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
        cout << " ";
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
        cout << " ";
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
        cout << " ";



}