//
//  prog3jonathannelson.cpp
//  Homework 1
//
//  Created by Jonathan Nelson on 2/1/21.
//


/* ###################################################
 Program 3
 Takes a 5 digit integer and adds a space in between each digit

 Name: Jonathan Nelson
 Date: 02/01/20
 Assignment: Program 3
###################################################### */

#include <iostream>

using namespace std;

int main(){

    int initialInteger(0);
    int tenthousands(0);
    int thousands(0);
    int hundreds(0);
    int tens(0);
    int ones(0);
    
    
    
    cout << "Enter a five digit integer: ";
    cin >> initialInteger;
    
    tenthousands = initialInteger/10000;
    thousands = (initialInteger % 10000)/1000;
    hundreds = (initialInteger % 1000)/100;
    tens = (initialInteger % 100)/10;
    ones = initialInteger % 10;
    
    cout << tenthousands << " " << thousands << " " << hundreds << " " << tens << " "<< ones << " ";
    
}

