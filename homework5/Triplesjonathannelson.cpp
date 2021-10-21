/*
 Name: Jonathan Nelson
 Date: 03/15/2021
 Assignment: Homework 5
 Description: A brute-force program that finds all pythagorean triples under 500
 */

#include <iostream>
#include <cmath>

using namespace std;

int square(int x);

int main(){
    
    int counter{0};
    
    for (int a = 1; a <= 500; a++) {//runs a from 1-500
        for (int b = 1; b <= 500; b++) {//runs b from 1-500
            for (int c = 1; c <= 500; c++) {//runs c from 1-500
                if((square(a)+square(b)==square(c))){//qualifier for a pythagorean triple
                    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
                    counter = counter+1;//keeps track of how many pythagorean triples have been counted
                }
            }
        }
    }
    cout << endl << "Total number of pythagorean triples counted: " << counter << endl;
}

int square(int x){//function that squares a given number
    x = x*x;
    return x;
}
