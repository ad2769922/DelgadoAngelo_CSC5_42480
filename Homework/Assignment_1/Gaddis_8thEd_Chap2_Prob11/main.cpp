/* 
 * File:   main.cpp
 * Author: Angelo Delgado
 *Created on March 4, 2018, 11:01 AM
 * Purpose: Calculate the distance a car can travel in town and on highway on one tank of gas
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
    double Gas, TownMPG, HighwayMPG, TownDist, HighwayDist; 
    
    //Initialize Variables
    Gas = 20; 
    TownMPG = 23.5;
    HighwayMPG = 28.9; 
    
    //Process/Map Inputs to Outputs
    TownDist = (Gas * TownMPG);
    HighwayDist = (Gas * HighwayMPG);
    
    //Output Data
    cout << "The car can travel " << TownDist << " miles in town.\n";
    cout << "The car can travel " << HighwayDist << " miles on the highway.";
    
    //End Program
    return 0;
}

