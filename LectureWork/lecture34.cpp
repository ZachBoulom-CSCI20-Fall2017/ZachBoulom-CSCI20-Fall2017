#include <iostream>
using namespace std;

int main()
{
    int number = 0, product = 0;
    while (number >=0) //checks for positive number
    {
        for (int i = 0; i<3; i++)
        { 
            product = number * i;
        }
        cout<<"Please enter a positive integer: ";
        cin >> number;
    }
    cout<<"The product is: "<<product<<endl;
}

//Comment the code as pseudocode
//Determine how many times each loop executes if the numbers input are 5, 4, 3, 2, 1,-1
//executes 3 times, while loop infinite until negative number inputted
//What is the value of i at the end of the program?
//2