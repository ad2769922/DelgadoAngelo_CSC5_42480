/* 
 * File:   main.cpp
 * Author: Angelo Delgado
 * Created on March 4, 2018, 7:03 AM
 * Purpose: Predict sales of a company's east coast division 
 */

//System Libraries;
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions 

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables 
    float CompanySales, ECPrcnt, ECSales; 
    
    //Initialize Variables
    CompanySales = 8.6e06f;
    ECPrcnt = 0.58; 
    
    //Process/Map Inputs to Outputs
    ECSales = (CompanySales * ECPrcnt);
    
    //Output Data
    cout << "The East Coast Division will generate $" << ECSales << " this year.\n";
    
    //End Program
    return 0;
}

