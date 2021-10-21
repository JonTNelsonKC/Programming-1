/*
 Name: Jonathan Nelson
 Date: 02/25/2021
 Assignment: Lab 7 Part 1
 Description: Prints the Lyrics to the Twelve Days of Christmas
 */



#include <iostream>

using namespace std;

int main(){
 
    for (int i = 1; i <= 12; i++){ //For loop that prints the correct day
    
        cout << "On the "; //beginning of the first line
        
        switch (i) {
        case 1:
                cout << "first";
            break;
        case 2:
                cout << "second";
            break;
        case 3:
                cout << "third";
            break;
        case 4:
                cout << "fourth";
            break;
        case 5:
                cout << "fifth";
            break;
        case 6:
                cout << "sixth";
            break;
        case 7:
                cout << "seventh";
            break;
        case 8:
                cout << "eigth";
            break;
        case 9:
                cout << "ninth";
            break;
        case 10:
                cout << "tenth";
            break;
        case 11:
                cout << "eleventh";
            break;
        default:
                cout << "twelfth";
            break;
    }
        cout << " day of Christmas,";//end of the first line
        cout << "\nMy true love sent to me: " << endl;//second line
        
        switch (i) {//switch statement without breaks in reverse case order so that each line can print in order
            default:
                cout << "\tTwelve drummers drumming,\n";
            case 11:
                cout << "\tEleven pipers piping,\n";
            case 10:
                cout << "\tTen lords a-leaping,\n";
            case 9:
                cout << "\tNine ladies dancing,\n";
            case 8:
                cout << "\tEight maids a-milking,\n";
            case 7:
                cout << "\tSeven swans a-swimming,\n";
            case 6:
                cout << "\tSix geese a-laying,\n";
            case 5:
                cout << "\tFive golden rings,\n";
            case 4:
                cout << "\tFour calling birds,\n";
            case 3:
                cout << "\tThree French hens,\n";
            case 2:
                cout << "\tTwo turtle doves, and\n";
            case 1:
                cout << "\tA partridge in a pear tree.\n";
        }
    }
}
