/* 
 * File:   main.cpp
 * Author: Angelo Delgado
 * Created on March 10, 2018, 10:50 AM
 * Purpose: Calculates test score average from test score inputs
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
    double num1, num2, num3, num4, num5, avg; 
    
    //Initialize Variables
    cout << "This program calculates the average of five test scores. \n";
    cout << "What is the first test score? ";
    cin >> num1;
    cout << "What is the second test score? ";
    cin >> num2;
    cout << "What is the third test score? ";
    cin >> num3;
    cout << "What is the fourth test score? ";
    cin >> num4;
    cout << "What is the fifth test score? ";
    cin >> num5;
    
    //Process/Map Inputs to Outputs
    avg = (num1 + num2 + num3 + num4 + num5) / 5;
    
    //Output Data
    std::cout << std::fixed << std::setprecision(1);
    cout << "The average test score is " << avg << ".\n";
    
    //End Program
    return 0;
}

