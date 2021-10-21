/*
 Name: Jonathan Nelson
 Date: 02/28/2021
 Assignment: Homework 4
 Description: Rectangle Calculator Program
 */

#include "Rectanglejonathannelson.h"
#include <iostream>

using namespace std;

int main(){
    
    int L{0};
    int W{0};
    int Length{0};
    int Width{0};
    
    do {
        cout << "Hello! Welcome to the Rectangle program. Please enter the dimensions for a rectangle when prompted. Valid size ranges from 1 to 20 for length and width. The program will end when you enter 0 for both the length and width." << endl;
        
       
        
        cout << "Enter the length of your rectangle: ";
        cin >> L;
        if ((L >= 0) && (L < 21)){//stating required if else statements during construction, repeated later in the void functions
            Length = L;
            }
        else{
            do {
                cout << "Invalid entry for Length, enter a number between 1 and 20" << endl;
                cin >> L;
            } while ((L < 0) || (L > 21));
            Length = L;
        }
        
        cout << "Enter the width of your rectangle: ";
        cin >> W;
        if ((W >= 0) && (W < 21)){//stating required if else statements during construction, repeated later in the void functions
            Width = W;
            }
        else{
            do {
                cout << "Invalid entry for Width, enter a number between 1 and 20" << endl;
                cin >> W;
            } while ((W < 0) || (W > 21));
            Width = W;
        }
        
        Rectangle rectangle1(Length, Width);
        
        cout << "Your " << Length << " x " << Width << " rectangle has an area = " << rectangle1.getArea() << " and a perimeter = " << rectangle1.getPerimeter() << endl << endl;
    } while ((Width != 0) && (Length != 0));
    
    cout << "Thank you for using the rectangle area and perimeter calculator program!" << endl;
}
