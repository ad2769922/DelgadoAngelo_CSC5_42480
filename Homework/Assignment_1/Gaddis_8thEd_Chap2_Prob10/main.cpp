/* 
 * File:   main.cpp
 * Author: Angelo Delgado
 * Created on March 4, 2018, 10:45 AM
 * Purpose: Calculate the MPG of a car
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
    int Gas, Miles, MPG;
    
    //Initialize Variables 
    Gas = 15;
    Miles = 375;
    
    //Process/Map Inputs to Outputs
    MPG = (Miles / Gas); 
    
    //Output Data
    cout << "The car gets " << MPG << " miles per gallon.";
    
    //End Program
    return 0;
}

