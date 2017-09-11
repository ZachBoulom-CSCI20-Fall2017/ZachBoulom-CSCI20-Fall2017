/* Zach Boulom
   9/11/17
   Creates A Mad Lib
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string noun_plural;
    string occupation;
    string animal_plural;
    string location;
    string verb;
    string noun;
    
    //Enters Variables
    cout << "Enter A Noun(Plural, Capital)" << endl;
    getline(cin, noun_plural);
    cout << "Enter An Occupation" << endl;
    getline(cin, occupation);
    cout << "Enter An Animal(Plural)" << endl;
    getline(cin, animal_plural);
    cout << "Enter A Location" << endl;
    getline(cin, location);
    cout << "Enter A Verb" << endl;
    getline(cin, verb);
    cout << "Enter A Noun" << endl;
    getline(cin, noun);
    
    //Displays MadLib
    cout << endl;
    cout << "In the movie War of the " << noun_plural << " ,the main character is an anonymous " << occupation << " who records the arrival of " << animal_plural << " in " << location << "." << endl;
    cout << "Needless to say, havoc reigns as the " << noun_plural << " continue to " << verb << " everything in sight, until they are killed by the common " << noun << "." << endl;
    
    return 0;
    
}