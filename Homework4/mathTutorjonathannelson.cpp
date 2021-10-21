/*
 Name: Jonathan Nelson
 Date: 02/28/2021
 Assignment: Homework 4
 Description: Math Tutor Program
 */

#include <iostream>

using namespace std;

int main(){

    int practiceNumber{0};
    int answer{0};
    string name;
    bool d{true};
    
    cout << "Welcome to the multiplication tutor!" << endl << "What is your name?" << endl;
    cin >> name;
    cout << "Let's see how good you are at multiplication, " << name << endl;
   
    
    
  
    do {
        
        cout << "What number would you like to practice? Enter -1 if you are done practicing. " << endl;
        cin >> practiceNumber;
        if (practiceNumber != -1){
            for (int i = 1; i <= 12; i++){
            cout << boolalpha << "What is " << i << " * " << practiceNumber << "?" << endl;
            cin >> answer;
            if (answer == i*practiceNumber){
                cout << "Correct!" << endl;
            }
            else{
                cout << "Incorect, the answer was " << i*practiceNumber << endl;
            }
        }
        }
    } while (practiceNumber != -1);
    
    cout << "Thanks for playing " << name << endl;
}
   
  
    

