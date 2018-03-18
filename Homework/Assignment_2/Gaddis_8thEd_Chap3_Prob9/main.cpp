/* 
 * File:   main.cpp
 * Author: Angelo Delgado
 * Created on March 12, 2018, 8:14 PM
 * Purpose: Calculates the minimum amount of insurance needed for a property
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
    double rplcmntCost, insrPrcnt, insrMin;
    
    //Initialize Variables
    cout << "Enter the replacement cost of a building:$ ";
    cin >> rplcmntCost;
    insrPrcnt = 0.8;
    
    //Process/Map Inputs to Outputs
    insrMin = (rplcmntCost * insrPrcnt);
    
    //Output Data
    std::cout << std::fixed << std::setprecision(2);
    cout << "You should pay at least $" << insrMin << " in insurance for this building.";
    
    //End Program
    return 0;
}

