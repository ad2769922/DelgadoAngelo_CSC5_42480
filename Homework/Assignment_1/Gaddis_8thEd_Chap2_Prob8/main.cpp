/* 
 * File:   main.cpp
 * Author: Angelo Delgado
 * Created on March 4, 2018, 10:08 AM
 * Purpose: Compute price, subtotal, sales tax, and total of 5 items
 */

//System Libraries 
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries 

//Global Constants - Math/Physics Constants, Conversions, 
//                   2-D Array Dimensions 

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables 
    float item1, item2, item3, item4, item5, SubTotal, SalesTaxPrcnt, SalesTaxAmnt, Total;
    
    //Initialize Variables
    item1 = 15.95;
    item2 = 25.95;
    item3 = 6.95;
    item4 = 12.95;
    item5 = 3.95;
    SalesTaxPrcnt = 0.07;
    
    //Process/Map Inputs to Outputs
    SubTotal = (item1 + item2 + item3 + item4 + item5);
    SalesTaxAmnt = (SubTotal * SalesTaxPrcnt);
    Total = (SubTotal + SalesTaxAmnt);
    
    //Output Data
    std::cout << std::fixed << std::setprecision(2);
    cout << "Price of Item 1 = $" << item1 << "\n";
    cout << "Price of Item 2 = $" << item2 << "\n";
    cout << "Price of Item 3 = $" << item3 << "\n";
    cout << "Price of Item 4 = $" << item4 << "\n";
    cout << "Price of Item 5 = $" << item5 << "\n";
    cout << "The subtotal is $" << SubTotal << "\n";
    cout << "The amount of sales tax is $" << SalesTaxAmnt << "\n";
    cout << "The total is $" << Total;
    
    //End Program
    return 0;
}

