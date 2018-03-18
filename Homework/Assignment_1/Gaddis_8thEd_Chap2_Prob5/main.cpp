/* 
 * File:   main.cpp
 * Author: Angelo Delgado
 * Created on March 4, 2018, 9:08 AM
 * Purpose: Compute average of a series of values 
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
    double num1, num2, num3, num4, num5, sum, average; 
    
    //Initialize Variables 
    num1 = 28;
    num2 = 32;
    num3 = 37; 
    num4 = 24;
    num5 = 33; 
    
    //Process/Map Inputs to Outputs 
    sum = (num1 + num2 + num3 + num4 + num5);
    average = (sum / 5);
    
    //Output Data
    cout << "The average is " << average;
    
    //End Program
    return 0;
}

