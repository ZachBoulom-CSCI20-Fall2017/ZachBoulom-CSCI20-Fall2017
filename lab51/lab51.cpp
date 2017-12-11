#include <iostream> 
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 0; //creates int variable nameLength
    char * name = new char[]; //creates char pointer

    //asks for user input and stores in name
    cout << "Please enter a 10 letter word or less" << endl;
    cin >> name;
    
    //pointers for name
    char * head  = name;
    char * tail = name;
    nameLength = strlen(*name);

    //outputs user word input
    cout << "Your word is " << firststr << endl;

    if (nameLength<10)//checks if namelength is less than 10
    {
         while (*head != '\0')//outputs each character until null is reached
         {
                cout << *head; // outputs head
                head++; //adds one to head each iteration
         }
     }
     else //if namelength is not less than 10 outputs the text below
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
     }

     cout << endl; //starts new line

     tail = &name[strlen(name) - 1]; //Setting tail to the address in memory of the length of name string - 1

    //if namelength is less than 10 
     if (nameLength < 10)
     {
          while (tail != name) //loops while tail is not equal to name
          {
                 cout << *tail; // outputs variable tail is pointing to
                 tail--; //subtracts 1 from tail each iteration
          }
     }
     cout << endl; //new line

     head = name; //sets head equal to name
     tail = &name[strlen(name) - 1]; //Setting tail to the address in memory of the length of name string - 1

     head++; //adds 1 to head each iteration
     tail--; //subtracts 1 from tail each iteration

     if (*head == *tail) //checks if head and tail are pointing to same location in memory and will output the text below
     {
         cout << "It is an palindrome!" << endl;
     }
     else //outputs the text below if the previous condition isn't met
     {
         cout << "It is not an palindrome" << endl;
     }

     return 0; 
}