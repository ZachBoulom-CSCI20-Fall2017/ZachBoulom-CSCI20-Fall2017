#include <iostream>
using namespace std;

int main()
{
    int number = 0, product = 0;
    while (number >=0)
    {
        for (int i = 0; i<3; i++)
        { 
            product = number * i;
        }
        cout<<"Please enter a positive integer: ";
        cin >> number;
    }
    cout<<"The product is: "<<product<<endl;
    cout<<i;
}

//Comment the code as pseudocode
//
//Determine how many times each loop executes if the numbers input are 5, 4, 3, 2, 1,-1
//
//What is the value of i at the end of the program?
//