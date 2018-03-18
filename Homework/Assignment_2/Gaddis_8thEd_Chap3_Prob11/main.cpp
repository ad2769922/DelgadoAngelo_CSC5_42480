/* 
 * File:   main.cpp
 * Author: Angelo Delgado
 * Created on March 12, 2018, 8:34 PM
 * Purpose: Calculate the total monthly and annual costs of an automobile
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
    double loanPay, insr, gas, oil, tires, maintnce, totalMonth, totalAnnual; 
    
    //Initialize Variables
    cout << "Enter your monthly loan payment for this vehicle:$ ";
    cin >> loanPay;
    cout << "Enter your monthly insurance payment for this vehicle:$ ";
    cin >> insr;
    cout << "Enter your monthly gas expenses for this vehicle:$ ";
    cin >> gas; 
    cout << "Enter your monthly oil expenses for this vehicle:$ ";
    cin >> oil;
    cout << "Enter your monthly tire expenses for this vehicle:$ ";
    cin >> tires;
    cout << "Enter your monthly maintenance expenses for this vehicle:$ ";
    cin >> maintnce; 
    
    //Process/Map Inputs to Outputs
    totalMonth = (loanPay + insr + gas + oil + tires + maintnce);
    totalAnnual = totalMonth * 12; 
    
    //Output Data
    std::cout << std::fixed << std::setprecision(2);
    cout << "The total monthly cost of this vehicle is: $" << totalMonth << "\n";
    cout << "The total annual cost of this vehicle is: $" << totalAnnual;
    
    //End Program
    return 0;
}

