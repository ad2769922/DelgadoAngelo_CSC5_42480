/* 
 * File:   main.cpp
 * Author: Angelo Delgado
 * Created on March 12, 2018, 7:49 PM
 * Purpose: Calculate the percentage of males and females in a class
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
    double maleNum, malePrcnt, femaleNum, femalePrcnt, totalNum;
    
    //Initialize Variables
    cout << "Enter the number of male students: ";
    cin >> maleNum;
    cout << "Enter the number of female students: ";
    cin>> femaleNum;
    
    //Process/Map Inputs to Outputs
    totalNum = (maleNum + femaleNum);
    malePrcnt = (maleNum / totalNum) * 100;
    femalePrcnt = (femaleNum / totalNum) * 100;
    
    //Output Data
    cout << "The percentage of males in this class is " << malePrcnt << "%. \n";
    cout << "The percentage of females in this class is " << femalePrcnt << "%.";
    
    //End Program
    return 0;
}

