/* 
 * File:   main.cpp
 * Author: Angelo Delgado
 * Created on March 4, 2018, 9:27 AM
 * Purpose: Calculate an employee's annual pay
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries 

//Global Constants - Math/Physics Constant, Conversions,
//                   2-D Array Dimensions 

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables 
    float payAmount, payPeriods, annualPay;
    
    //Initialize Variables
    payAmount = 2200.0;
    payPeriods = 26;
    
    //Process/Map Inputs to Outputs
    annualPay = (payAmount * payPeriods);
    
    //Output Data
    cout << "The employee's annual pay is $" << annualPay;
    
    //End Program
    return 0;
}

