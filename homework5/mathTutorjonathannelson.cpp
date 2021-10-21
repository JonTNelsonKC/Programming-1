/*
 Name: Jonathan Nelson
 Date: 03/15/2021
 Assignment: Homework 5
 Description: A basic multiplication tutor program that prompts the user with twelve multiplication questions with both multiplicands being less than or equal to 12.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    bool d{true};
    int score{0};
    int answer{0};
    int i{1};
    char playAgain;
    string name;
    string again;
    
    srand(static_cast<unsigned int>(time(0)));//seeds the random number generator with the current time
    
    cout << "Welcome to the multiplication tutor!" << endl << "What is your name?" << endl;
    cin >> name;
    cout << "Would you like to practice multiplication, " << name << "?\nEnter y to play or n to exit." << endl;
    cin >> playAgain;
    switch (playAgain) {//switch statement that lets the user opt in or out of the multiplaction tutor
        case 'y':
            cout << "Let's see how good you are, " << name << endl;
            
            do {//runs the game until the user enters "no"
                    for (i = 1; i <= 12; i=i+1){//runs the following block of code 12 times
                        int number1 = (1 + rand() % 12);//randomly generates number 1 of the multiplication problem
                        int number2 = (1 + rand() % 12);//randomly generates number 2 of the multiplication problem
                    cout << boolalpha << "What is " << number1 << " * " << number2 << "?" << endl;
                    cin >> answer;
                    if (answer == number1*number2){//prints correct and keeps track of the user's score
                        cout << "Correct!" << endl;
                        score = score + 1;
                    }
                    else{//prints if the user enters a wrong answer
                        cout << "Incorect, the answer was " << number1*number2 << endl;
                        }
                    }
                cout << "You answered " << score << " correctly out of 12.\nWould you like to play again?\nEnter no to quit, any other entry will prompt another 12 questions.\n";
                cin >> again;
            } while (again != "no");//runs the game until the user enters "no"
            break;
        case 'n':
            cout << "Thanks for using the multiplication tutor program, " << name << endl;
            break;
            
        default:
            cout << "\nThat was not a valid entry, exiting the program now.\n";
            break;
    }
}
