/*
 Name: Jonathan Nelson
 Date: 02/25/2021
 Assignment: Lab 7 Part 2
 Description: Proof + examples of De Morgan's Laws using boolalpha
 */



#include <iostream>

using namespace std;

int main(){
    
    int a{3}, b{7}, g{9}, i{93}, j{23}, x{2}, y{9};//initialize arbitrary variables
    bool d{true};//initialize bool
    
    cout << boolalpha << "De Morgan's Law Examples/Proof: " << endl << endl;//Prints text
    
    
    cout << "A) Original expression: !(x<5) && !(y>=7)" << endl;
    cout << "A) Example with variables: " << "!(" << x << "<5) && !(" << y << ">=7)" << endl << " Truth value: " << (!(x<5) && !(y>=7)) << endl << endl;//outputs text and ends by calculating bool truth value
    cout << "A') De Morgan's Law altered expression: !(x<5 || y>=7)" << endl;
    cout << "A') De Morgan's Law example with variables: " << "!(" << x << "<5) || (" << y << ">=7)" << endl << " Truth value: " << (!(x<5 || y>=7)) << endl << endl;//outputs text and ends by calculating bool truth value
    
    
    cout << "B) Original expression: !(a==b) || !(g!=5)" << endl;
    cout << "B) Example with variables: " << "!(" << a << "==" << b << ") || !(" << g << "!=5)" << endl << " Truth value: " << (!(a==b) || !(g!=5)) << endl << endl;//outputs text and ends by calculating bool truth value
    cout << "B') De Morgan's Law altered expression: !(a==b && g!=5)" << endl;
    cout << "B') De Morgan's Law example with variables: " << "!(" << a << "==" << b << " && " << g << "!=5)" << endl << " Truth value: " << (!(a==b && g!=5)) << endl << endl;//outputs text and ends by calculating bool truth value
    
    
    cout << "C) Original expression: !((x<=8) && (y>4))" << endl;
    cout << "C) Example with variables: " << "((" << x << "<=8) && (" << y << "> 4))" << endl <<  " Truth value: " << !((x<=8) && (y>4)) << endl << endl;//outputs text and ends by calculating bool truth value
    cout << "C') De Morgan's law altered expression: !(x<=8) || !(y>4)" << endl;
    cout << "C') De Morgan's law example with variables: " << "!(" << x << "<=8) || !(" << y << ">4)" << endl << " Truth value: " << (!(x<=8) || !(y>4)) << endl << endl;//outputs text and ends by calculating bool truth value
    
    
    cout << "D) Original expression: !((i>4) || (j<=6))" << endl;
    cout << "D) Example with variables: " << "!((" << i << ">4) || (" << j << "<=6))" << endl << " Truth value: " << (!((i>4) || (j<=6))) << endl << endl;//outputs text and ends by calculating bool truth value
    cout << "D') De Morgan's law altered expression: !(i>4) && !(j<=6)" << endl;
    cout << "D') De Morgan's law example with variables: " << "!(" << i << ">4) && !(" << j << "<=6)" << endl << " Truth value: " << (!(i>4) && !(j<=6)) << endl;//outputs text and ends by calculating bool truth value
}
