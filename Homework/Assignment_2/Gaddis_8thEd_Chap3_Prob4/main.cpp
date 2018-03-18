/* 
 * File:   main.cpp
 * Author: Angelo Delgado
 * Created on March 10, 2018, 11:27 AM
 * Purpose: Calculates the average rainfall for three months.
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
    int month1, month2, month3;
    double rain1, rain2, rain3, avg;
    
    //Initialize Variables
    cout << "This program calculates the average rainfall for 3 months. \n";
    cout << "Enter the name of the first month: ";
    cin >> month1;
    cout << "Enter the amount of rain in inches that fell for " << month1 << ": ";
    cin >> rain1;
    cout << "Enter the name of the second month: ";
    cin >> month2;
    cout << "Enter the amount of rain in inches that fell for " << month2 << ": ";
    cin >> rain2;
    cout << "Enter the name of the third month: ";
    cin >> month3;
    cout << "Enter the amount of rain in inches that fell for " << month3 << ": ";
    cin >> rain3;
    
    //Process/Map Inputs to Outputs
    avg =(rain1 + rain2+ rain3) / 3;
    
    //Output Data
    cout << "The average rain fall for " << month1 << month2 << month3 << "is " << avg;
    
    //End Program
    return 0;
}

