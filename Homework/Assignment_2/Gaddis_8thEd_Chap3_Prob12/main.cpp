/* 
 * File:   main.cpp
 * Author: Angelo Delgado
 * Created on March 12, 2018, 8:59 PM
 * Purpose: Convert a Celsius value to Fahrenheit 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries 

//Global Constants - Math/Physics Constants, Conversions, 
//                   2-D Array Dimensions

//Function Prototypes 

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    double C, F;
    
    //Initialize Variables
    cout << "Enter a Celsius temperature: ";
    cin >> C; 
    
    //Process/Map Inputs to Outputs
    F = (C * 1.8) + 32;
    
    //Output Data
    cout << "The temperature in Fahrenheit is " << F << " degrees.";
    
    //End Program
    return 0;
}

