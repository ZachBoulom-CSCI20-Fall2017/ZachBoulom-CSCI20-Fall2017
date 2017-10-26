/*
Zach Boulom
10/25/17
a class that converts temperatures between Kelvin, Fahrenheit and Celsius. 
It will always internally store the value in kelvin.
*/

#include<iostream>
using namespace std;

class TemperatureConverter{
    
    public:
        TemperatureConverter(); //default constructor
        TemperatureConverter(double kelvin_input_); //overloaded constructor
        
    
        //mutators
        void SetTempFromKelvin(double kelvin_input_);
        void SetTempFromFahrenheit(double fahrenheit_input_);
        void SetTempFromCelsius(double celsius_input_);
        
        //accessors
        double GetTempFromKelvin() const;
        double GetTempAsFahrenheit() const;
        double GetTempAsCelsius() const;
        
        void PrintTemperatures();
        
    private:
        double kelvin_;
    
};

//default constructor
TemperatureConverter::TemperatureConverter(){
    kelvin_ = 0;
    
    return;
}
//overloaded constructor
TemperatureConverter::TemperatureConverter(double kelvin_input_){
    if (kelvin_input_ >= 0){
        kelvin_ = kelvin_input_;
    }
    
    return;
}

//mutator functions
void TemperatureConverter::SetTempFromKelvin(double kelvin_input_){
    if (kelvin_input_ >= 0){
        kelvin_ = kelvin_input_;
    }
    
    return;
}
void TemperatureConverter::SetTempFromFahrenheit(double fahrenheit_input_){
    if (fahrenheit_input_ >= -459.67){
        kelvin_ = 5 * ((fahrenheit_input_) - 32.0/9.0) - 273.15;
    }
    
    return;
}
void TemperatureConverter::SetTempFromCelsius(double celsius_input_){
    if (celsius_input_ >= -273.15){
        kelvin_ = celsius_input_ + 273.15;
    }
    
    return;
}

//accessor functions
double TemperatureConverter::GetTempFromKelvin() const{
    return kelvin_;
}
double TemperatureConverter::GetTempAsCelsius() const{
    return kelvin_ - 273.15;
}
double TemperatureConverter::GetTempAsFahrenheit() const{
    return (9 * GetTempAsCelsius()) / 5 + 32;
}

void TemperatureConverter::PrintTemperatures(){
    cout << " Your temperature in Kelvin is: " << GetTempFromKelvin() << endl;
    cout << " Your temperature in Farenheit is:  " << GetTempAsFahrenheit() << endl;
    cout << " YOur temperature in Celsius is: " << GetTempAsCelsius() << endl;
}

int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}