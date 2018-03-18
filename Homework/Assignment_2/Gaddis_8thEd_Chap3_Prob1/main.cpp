/* 
 * File:   main.cpp
 * Author: Angelo Delgado
 * Created on March 10, 2018, 10:01 AM
 * Purpose: Calculate a car's gas mileage from input values
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
    double Gas, Miles, MPG;
    
    //Initialize Variables
    cout << "This program calculates a car's gas mileage. \n";
    cout << "How many gallons of gas can the car hold with a full tank? ";
    cin >> Gas;
    cout << "How many miles can the car drive on a full tank? ";
    cin >> Miles;
    
    //Process/Map Inputs to Outputs
    MPG = (Miles / Gas);
    
    //Output Data
    cout << "The car can drive " << MPG << " miles per gallon of gas. \n";
    
    //End Program 
    return 0;
}

