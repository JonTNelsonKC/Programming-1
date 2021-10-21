/*
 Name: Jonathan Nelson
 Date: 03/15/2021
 Assignment: Program 1
 Description:
 
 **** Updated due date

 Due: Tuesday 4/8/21 at 5pm, submit files on Moodle. If you choose to use a class (using a class is totally optional) you may have an additional file but it must contain your name in the name of the file. If one file name it Prog1<your name>.cpp

 Extra Credit Opportunity: Submit a complete Pseudo-code Algorithm for the program by 3/19/21

 Write a program so that you can play mastermind against the computer. The computer will always be the codemaker and the player will always be the codebreaker.

 Details for mastermind: https://en.wikipedia.org/wiki/Mastermind_%28board_game%29  For the purposes of this program we are going to simplify the game. The code will be of length 4. There will be 6 colors used. The code can not duplicate colors. Guesses can duplicate colors. The codebreaker will get 10 tries to break the code. COLORS Red, Orange, Yellow, Green, Blue, Purple (R O Y G B P)

 Your program should greet the player. Prompt the player for their name and use it when giving output to the player during the game. Allow the user to play as many rounds of the game as they would like.

 Codemaker feedback given to the user: black means correct location and color of a peg and white means correct color but not location of a peg.

 Examples: code R O Y G, guess R Y O G, the feedback is 1 black and 3 white

 On each round of the game the code picked must be random using the C++ random number generator seeded with time. (Remember you can make debugging easier by not seeding the random number generator until after you have debugged the program.)

 Blanks are not allowed in the code or the guesses. Duplicates are not allowed in the code sequence, but duplicates are allowed while guessing. Example: code R O Y G, guess R R O O, the feedback is 1 black and 1 white

 The program must make use of functions. Do not have everything in main.

 The program must display output in an easy to read fashion making good use of white pace. Each guess during a game should tell them which guess they are on and how many guesses they have left.
 */

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

string position1(char userEntry1);
string position2(char userEntry2);
string position3(char userEntry3);
string position4(char userEntry4);

char colorCode1;
char colorCode2;
char colorCode3;
char colorCode4;

int main(){

        char play;
        string name;
        string again;
        string code;
        char userEntry1;
        char userEntry2;
        char userEntry3;
        char userEntry4;
        int colorPicker{0};
    
    srand(static_cast<unsigned int>(time(0)));//seeds the random number generator with the current time
    
    //cout << colorCode1 << colorCode2 << colorCode3 << colorCode4 << endl;//Lets you cheat.
    
        cout << "\nWelcome to Mastermind!\n\n" << "What is your name?\n\n";
        cin >> name;
        cout << "\nAre you ready to attempt to break my code, " << name << "?\n\nEnter y to play or n to exit.\n\n";
        cin >> play;
        switch (play) {//switch statement that lets the user opt in or out of the game
            case 'y':
                cout << "Let's see how good you are, " << name << ".\n\n";
                
                do {//runs the game until the user enters "no"
                    
                    colorPicker = (1 + rand() % 6);//random number that feeds the code picking switch
                    
                    switch (colorPicker) {//takes a random number and assigns it to the first position of the code
                        case 1:
                            colorCode1 = 'R';
                            break;
                        case 2:
                            colorCode1 = 'O';
                            break;
                        case 3:
                            colorCode1 = 'Y';
                            break;
                        case 4:
                            colorCode1 = 'G';
                            break;
                        case 5:
                            colorCode1 = 'B';
                            break;
                        case 6:
                            colorCode1 = 'P';
                            break;
                    }
                           
                    do{
                        colorPicker = (1 + rand() % 6);//random number that feeds the code picking switch
                        switch (colorPicker) {//takes a random number and assigns it to the second position of the code
                            case 1:
                                colorCode2 = 'R';
                                break;
                            case 2:
                                colorCode2 = 'O';
                                break;
                            case 3:
                                colorCode2 = 'Y';
                                break;
                            case 4:
                                colorCode2 = 'G';
                                break;
                            case 5:
                                colorCode2 = 'B';
                                break;
                            case 6:
                                colorCode2 = 'P';
                            break;
                            }
                            }
                    while(colorCode1 == colorCode2);//guarantees no duplicates
                    
                    do{
                       colorPicker = (1 + rand() % 6);//random number that feeds the code picking switch
                    switch (colorPicker) {//takes a random number and assigns it to the third position of the code
                        case 1:
                            colorCode3 = 'R';
                            break;
                        case 2:
                            colorCode3 = 'O';
                            break;
                        case 3:
                            colorCode3 = 'Y';
                            break;
                        case 4:
                            colorCode3 = 'G';
                            break;
                        case 5:
                            colorCode3 = 'B';
                            break;
                        case 6:
                            colorCode3 = 'P';
                        break;
                    }
                    }
                while((colorCode3 == colorCode1) || (colorCode3 == colorCode2));//guarantees no duplicates
                    
                    do{
                       colorPicker = (1 + rand() % 6);//random number that feeds the code picking switch
                    switch (colorPicker) {//takes a random number and assigns it to the fourth position of the code
                        case 1:
                            colorCode4 = 'R';
                            break;
                        case 2:
                            colorCode4 = 'O';
                            break;
                        case 3:
                            colorCode4 = 'Y';
                            break;
                        case 4:
                            colorCode4 = 'G';
                            break;
                        case 5:
                            colorCode4 = 'B';
                            break;
                        case 6:
                            colorCode4 = 'P';
                        break;
                    }
                    }
                while(((colorCode4 == colorCode1) || (colorCode4 == colorCode2)) || (colorCode4 == colorCode3));//guarantees no duplicates
                    
                        cout << "I have created a four color long code using the colors red, orange, yellow, green, blue, and purple.  Your job is to correctly guess each color and their corresponding position.  You will have ten guesses.  If you choose a correct color but not the correct position, the feedback will be white.  If you get a position and color correct, the feedback will be black." << endl << endl << "Acceptable entries are R, O, Y, G, B, or P" << endl << endl << "To start, enter in your first guess.\n\n";
                    
                    for (int i{1}; i <=10; i++) {//gives the user ten guesses
                        
                        cin >> userEntry1;
                        cin >> userEntry2;
                        cin >> userEntry3;
                        cin >> userEntry4;

                        if((position1(userEntry1) == "Black") && (position2(userEntry2) == "Black") && (position3(userEntry3) == "Black") && (position4(userEntry4) == "Black")){//victory condition
                            cout << "Congratulations " << name << "! You solved the code in " << i << " guesses\n\n";
                            i = 10;//exits the for loop
                        }
                        else{//issues color feedback
                            cout << position1(userEntry1) << " " << position2(userEntry2) << " " << position3(userEntry3) << " " << position4(userEntry4) << " ";
                        
                        cout << "\nThat was guess: " << i << " of 10, you have " << 10-i << " guesses left.\n\n";
                        }
                    }
                    cout << "The code was : " << colorCode1 << colorCode2 << colorCode3 << colorCode4 << endl << endl;
                    
                    cout << "\nWould you like to play again?\nEnter no to quit, any other entry will prompt the game to restart\n\n";
                    cin >> again;
                } while (again != "no");//runs the game until the user enters "no"
                break;
            case 'n':
                cout << "\nI understand, cracking codes can be hard.  Come back and try it again any time " << name << "!" << endl << endl;
                break;
                
            default:
                cout << "\nThat was not a valid entry, exiting the program now.\n\n";
                break;
        }
}



string position1(char userEntry1){

    if (userEntry1 == colorCode1) {
        return "Black";
    }
    if (userEntry1 == colorCode2) {
        return "White";
    }
    if (userEntry1 == colorCode3) {
        return "White";
    }
    if (userEntry1 == colorCode4) {
        return "White";
    }
    else{
        return "";
    }
}
string position2(char userEntry2){

    if (userEntry2 == colorCode1) {
        return "White";
    }
    if (userEntry2 == colorCode2) {
        return "Black";
    }
    if (userEntry2 == colorCode3) {
        return "White";
    }
    if (userEntry2 == colorCode4) {
        return "White";
    }
    else{
        return "";
    }
}
string position3(char userEntry3){

    if (userEntry3 == colorCode1) {
        return "White";
    }
    if (userEntry3 == colorCode2) {
        return "White";
    }
    if (userEntry3 == colorCode3) {
        return "Black";
    }
    if (userEntry3 == colorCode4) {
        return "White";
    }
    else{
        return "";
    }
}
string position4(char userEntry4){

    if (userEntry4 == colorCode1) {
        return "White";
    }
    if (userEntry4 == colorCode2) {
        return "White";
    }
    if (userEntry4 == colorCode3) {
        return "White";
    }
    if (userEntry4 == colorCode4) {
        return "Black";
    }
    else{
        return "";
    }
}
