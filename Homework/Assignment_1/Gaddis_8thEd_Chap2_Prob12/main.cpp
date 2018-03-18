/* 
 * File:   main.cpp
 * Author: Angelo Delgado
 * Created on March 4, 2018, 11:32 AM
 * Purpose: Calculate the number of acres in a tract of land
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
    double Acre, Tract, AcreResult;
    
    //Initialize Variables
    Acre = 43560;
    Tract = 391876;
    
    //Process/Map inputs to outputs
    AcreResult = (Tract / Acre);
    
    //Output Data
    cout << "There are " << AcreResult << " acres in the tract of land.";
    
    //End Program
    return 0;
}

