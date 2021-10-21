/*
Name: Jonathan Nelson
Assignment: Lab 9
Date: March 11th, 2021
Description:
 A short program demonstrating recursive funtions power and gcd which calculate a number being raised to a power and finding the greatest common divisor respectively.
 */
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int power(int base, unsigned int exponent);

int gcd(int x, int y);

int main(){

    int userBase{0};
    unsigned int userExponent{0};

    cout << "Enter a base: \n";
    cin >> userBase;
    cout << "Enter an exponent \n";
    cin >> userExponent;
    cout << userBase << " to the " << userExponent << " power is: " << power(userBase, userExponent) << endl;
    
    int d1{0};
    int d2{0};
    
    cout << "Enter two integers of which you would like to find the greates common divisor: \n";
    cin >> d1;
    cin >> d2;
    
    cout << "The greatest common divisor of " << d1 << " and " << d2 << " is: " << gcd(d1, d2) << endl;
}


int power(int base, unsigned int exponent){
    if (exponent == 0) {
        return 1;
    }
    if (exponent == 1) {
        return base;
    }
    else {
        base = base*power(base, (exponent-1));
        return base;
    }
}

int gcd(int x, int y){
    int greater;
    if (x > y) {
        greater = 1;
    }
    if (y > x) {
        greater = 2;
    }
    switch (greater) {
        case 1:
            if (y == 0) {
                return x;
            }
            else{
                return gcd(y, x%y);
            }
            break;
        case 2:
            if (x == 0) {
                return y;
            }
            else{
                return gcd(x, y%x);
            }
            break;
    }
}
