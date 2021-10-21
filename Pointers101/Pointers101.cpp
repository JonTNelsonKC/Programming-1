//
//  Pointers101.cpp
//  Pointers101
//
//  Created by Jonathan Nelson on 4/8/21.
//

#include <iostream>

using namespace std;

int main(){
    
    //nt* countPtr{NULL}, count;
    //int* countPtr{nullptr}, count;
    //int* countPtr{0}, count;
    
    //& is a unary operator that obtains the memory address of its operand.
    
    int y{5};
    int* yPtr{nullptr};
    
    yPtr = &y;//assign address of y to yPtr
    
    
    /*char a;
    char* b;
    char** c;
    a = 'z';
    b = &a;
    c = &b;*/
    
    /*int a{7};
    int* aPtr = &a;
    
    cout << "The address of a is " << &a << "\nThe value of aPtr is " << aPtr;
    cout << "\n\nThe value of a is " << a << "\nThe value of *aPtr is " << *aPtr << endl;*/
    
    /*float number1{7.3};
    float number2;
    
    float* fPtr{nullptr};
    
    fPtr = &number1;
    
    cout << *fPtr << endl;
    
    number2 = *fPtr;
    
    cout << number2 << endl;
    
    cout << &number1 << endl;
    
    cout << fPtr << endl;*/
    
    long value1{200000};
    long value2;
    
    long* longPtr{NULL};
    
    longPtr = &value1;
    
    cout << *longPtr << endl;
    
    value2 = *longPtr;
    
    cout << value2 << endl;
    
    cout << &value1 << endl;
    
    cout << longPtr << endl;
}
