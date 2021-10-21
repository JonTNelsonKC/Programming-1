//
//  switchStatementExample.cpp
//  Homework4
//
//  Created by Jonathan Nelson on 2/22/21.
//

#include <iostream>

using namespace std;


int main(){

    char grade;
    
    cout << "Enter your letter grade for feedback: ";
    cin >> grade;
    
    
    switch (grade) {
        case 'A':
            cout << "an A - excellent work" << endl;
            break;
        case 'B':
            cout << "you got a B - good job" << endl;
            break;
        case 'C':
            cout << "earning a C is satisfactory" << endl;
            break;
        case 'D':
            cout << "while D is passing, there is a problem" << endl;
            break;
        case 'F':
            cout << "you failed - better luck next time" << endl;
            break;
        default:
            cout << "You did not enter A, B, C, D, or F" << endl;
            break;
            
    }
}
