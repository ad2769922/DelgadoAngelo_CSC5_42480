/* 
 * File:   main.cpp
 * Author: Angelo Delgado
 * Created on March 12, 2018, 9:12 PM
 * Purpose: Calculate the assessment value and property tax of a property
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries 

//Global Constants - Math/Physics Constants, Conversions, 
//                   2-D Array Dimensions

//Function Prototypes 

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    double propValue, assessPrcnt, assessValue, propTax;
    
    //Initialize Variables
    cout << "Enter the value of the property:$ ";
    cin >> propValue; 
    assessPrcnt = 0.6;
    
    //Process/Map Inputs to Outputs
    assessValue = (propValue * assessPrcnt);
    propTax = (assessValue / 100) * 0.75;
    
    //Output Data
    std::cout << std::fixed << std::setprecision(2);
    cout << "The assessment value for this property is $" << assessValue << "\n";
    cout << "The property tax for this property is $" << propTax; 
    
    //End Program
    return 0;
}

