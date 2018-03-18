/* 
 * File:   main.cpp
 * Author: Angelo Delgado
 * Created on March 4, 2018, 7:42 AM
 * Purpose: Compute total sales tax on a $95 purchase
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
    float Purchase, StateSalesTax, CountySalesTax, TotalTax, TotalTaxResult; 
    
    //Initialize Variables 
    Purchase = 95.00;
    StateSalesTax = 0.04;
    CountySalesTax = 0.02;
    
    //Process/Map Inputs to Outputs
    TotalTax = (StateSalesTax + CountySalesTax);
    TotalTaxResult = (Purchase * TotalTax);
    
    //Output Data
    std::cout << std::fixed << std::setprecision(2);
    cout << "The total sales tax on a $95 purchase is $" << TotalTaxResult;
    
    //End Program
    return 0;
}

