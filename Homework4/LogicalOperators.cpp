//
//  LogicalOperators.cpp
//  
//
//  Created by Jonathan Nelson on 2/25/21.
//

/* ###################################################
 Hello world program
 Prints Hello, World!

 Name: Teresa Hale-Lespier
 Date: 1/20/19
 Assignment: Documentation Example
###################################################### */

#include <iostream>
using namespace std;


int main(){
    
    int a{3}, b{76}, c{0};
    bool d{true};
    
    cout << boolalpha << "Testing Statements: " << endl;
    cout << "a < b: " << a << " < " << b << " is " << (a < b) << endl;
    cout << "(a<b)==d): " << "(" << a << "<" << b << ")==" << d << " is " << ((a<b)==d) << endl;
}
