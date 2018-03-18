/* 
 * File:   main.cpp
 * Author: Angelo Delgado
 * Created on March 12, 2018, 9:36 PM
 * Purpose: Calculate the number of widgets stacked on a pallet
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
    double palletWeight, totalWeight, widgetWeight, widgetNum;
    
    //Initialize Variables
    cout << "Enter the weight of the pallet: ";
    cin >> palletWeight;
    cout << "Enter the total weight of the pallet with the widgets stacked on it: ";
    cin >> totalWeight;
    widgetWeight = 12.5;
    
    //Process/Map Inputs to Outputs
    widgetNum = (totalWeight - palletWeight) / widgetWeight;
    
    //Output Data
    cout << "The number of widgets stacked on the pallet is " << widgetNum; 
    
    //End Program
    return 0;
}

