/* 
 * File:   main.cpp
 * Author: Angelo Delgado
 * Created on March 4, 2018, 8:25 AM
 * Purpose: Compute tax and tip on a $88.67 meal
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
    float MealCharge, TaxPrcnt, TaxAmnt, TipPrcnt, TipAmnt, TotalAmnt;
    
    //Initialize Variables
    MealCharge = 88.67;
    TaxPrcnt = 0.0675;
    TipPrcnt = 0.2;
    
    //Process/Map Inputs to Outputs
    TaxAmnt = (MealCharge * TaxPrcnt);
    TipAmnt = (MealCharge + TaxAmnt) * TipPrcnt;
    TotalAmnt = (MealCharge + TaxAmnt + TipAmnt);
    
    //Output Data
    std::cout << std::fixed << std::setprecision(2);
    cout << "The meal cost is $" << MealCharge << "\n";
    cout << "The tax amount is $" << TaxAmnt << "\n";
    cout << "The tip amount is $" << TipAmnt << "\n";
    cout << "The total bill is $" <<TotalAmnt;
    
    //End Program
    return 0;
}

