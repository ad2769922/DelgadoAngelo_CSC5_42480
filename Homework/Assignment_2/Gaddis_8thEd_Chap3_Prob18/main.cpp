/* 
 * File:   main.cpp
 * Author: Angelo Delgado
 * Created on March 12, 2018, 9:54 PM
 * Purpose: Calculate the balance in a savings account
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries 

//Global Constants - Math/Physics Constants, Conversions, 
//                   2-D Array Dimensions

//Function Prototypes 

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables 
    double principal, intRatePrcnt, intRate, T, intNum, savings, savingsResult, interest;
    
    //Initialize Variables 
    cout << "Enter the principal:$ ";
    cin >> principal; 
    cout << "Enter the interest rate: ";
    cin >> intRatePrcnt;
    cout << "Enter the number of times the interest is compounded: ";
    cin >> T; 
    
    //Process/Map Inputs to Outputs
    intRate = (intRatePrcnt / 100);
    savings = ((intRate / T) + 1);
    savingsResult = (pow (savings, T)) * principal;
    interest = savingsResult - principal;
    
    //Output Data
    std::cout << std::fixed << std::setprecision(2);
    cout << "Interest Rate: " << intRatePrcnt << "% \n";
    cout << "Times Compounded: " << T << "\n"; 
    cout << "Principal:$ " << principal << "\n";
    cout << "Interest:$ " << interest << "\n";
    cout << "Amount in Savings:$ " << savingsResult;
    
    //End Program
    return 0;
}

