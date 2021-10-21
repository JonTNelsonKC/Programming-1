//
//  prog1jonathannelson.cpp
//  Homework 1
//
//  Created by Jonathan Nelson on 1/25/21.
//


/* ###################################################
 Program 1
 inputs three different integers from the keyboard, then prints the sum, the average, the product, the smallest and the largest of these numbers.

 Name: Jonathan Nelson
 Date: 02/01/20
 Assignment: Program 1
###################################################### */

#include <iostream>

using namespace std;

int main() {
    int number1{0};
    int number2{0};
    int number3{0};
    int sum{0};
    int average{0};
    int product{0};
    int smallest{0};
    int largest{0};
    int averagedivisor{0};
    
    cout << "Enter three different integers:";
    cin >> number1;
    cin >> number2;
    cin >> number3;
    
    cout << "Given integers: ";
    cout << " " << number1 << " " << number2 << " " << number3 <<endl;
    
    sum = number1+number2+number3;
    product = number1*number2*number3;
    averagedivisor = 3;
    average = sum/averagedivisor;
    /*smallest number if statements*/
    if(number1<number2 and number1<number3) smallest = number1;
    if(number2<number1 and number2<number3) smallest = number2;
    if(number3<number1 and number3<number2) smallest = number3;
    /*largest number if statements*/
    if(number1>number2 and number1>number3) largest = number1;
    if(number2>number1 and number2>number3) largest = number2;
    if(number3>number1 and number3>number2) largest = number3;
    
    
    
    
    
    cout << "Sum is " << sum << endl;
    cout << "Average is " << average << endl;
    cout << "Product is " << product << endl;
    cout << "Smallest is " << smallest << endl;
    cout << "Largest is " << largest << endl;
    
    
}
