/*
Zach Boulom
11/6/17
a class called ArrayTools which will store a single integer array and each of the following functions
*/

#include <iostream>
using namespace std;


class ArrayTools {
    private:
    int my_array[10];
    int num_elements;
    
    public:
    ArrayTools() {
        num_elements=0;
        my_array[0]=0;
    }
    
    ArrayTools(int array[], int size) {
        for (int i = 0; i < size; ++i) {
            my_array[i] = array[i];
        }
        num_elements = size;
    }
    
    void Print();
    int Find_min(int size_one, int size_two);
    int Find_max(int size_one, int size_two);
    int Find_sum();
    //FIX ME int Num_even_and_odd();
    int Search(int specified_value);
    string Is_sorted();

};

//===============Member Functions===============================================

void ArrayTools::Print() {
    for (int i=0; i<num_elements; ++i){
        cout << my_array[i] << " ";
    }
    cout << endl;
}


int ArrayTools::Find_min(int size_one, int size_two){ //Finds min value
    int min_val = my_array[size_one];
    for (size_one; size_one < size_two; ++size_two) {
        if (my_array[size_one] < min_val) {
            min_val = my_array[size_one];
        }
    }
    return min_val;
}
    

int ArrayTools::Find_max(int size_one, int size_two){ //Finds max value
    int max_val = my_array[size_one];
    for (size_one; size_one < size_two; ++size_one){
        if (my_array[size_one] >= max_val) {
            max_val = my_array[size_one];
        }
    }
    return max_val;
}


int ArrayTools::Find_sum(){ //Finds sum
    int sum_val = 0;
    int i;
    for (i=0; i < num_elements; ++i){
        sum_val = sum_val + my_array[i];
    }
    return sum_val;
}


int ArrayTools::Search(int specified_value){

    for(int i =0; i < num_elements; ++i){
        if(specified_value == my_array[i]){
            return i;
        }
        else{
            return -1;
        }
    }
    
}


string ArrayTools::Is_sorted(){ //Checks if sorted
    bool is_sorted;
    
    for(int i = 0; i < num_elements -1; ++i){
        if(my_array[i+1] > my_array[i]){
            is_sorted = true;
        }
        else{
            return "Not Sorted";
        }
    }
    if(is_sorted){
        return "Is Sorted";
    }
}


//==============================================================================

int main()
{
    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cin>>myArray[i];
    }
    
    ArrayTools a(myArray,SIZE);
    
    a.Print();
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout << "Search 10: "<< a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}

