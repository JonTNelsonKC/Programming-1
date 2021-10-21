/*
 Name: Jonathan Nelson
 Date: 03/18/2021
 */
#include <iostream>
#include <iomanip>
#include <array>
#include <vector>
#include <stdexcept>
#include <algorithm>

using namespace std;

int main(){
    
    bool found;
    
    array<int, 20> userNumbersArray{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
    for(int i{0}; i<20; i++){
        int userNumber{0};
        cout << "Enter in 20 unique numbers between 0 and 101\n";
        cin >> userNumber;
        sort(userNumbersArray.begin(), userNumbersArray.end());
        do {
            bool found{binary_search(userNumbersArray.begin(), userNumbersArray.end(), userNumber)};
            if(((userNumber > 0) && (userNumber < 101)) && (found == false)){
                    userNumbersArray[i] = userNumber;
                }
            else{
                cout << "Your entry was either not between 0 and 101, or not unique, try again\n";
                cin >> userNumber;
            }
        } while ((userNumber > 100) || (userNumber <= 0));
    }
    sort(userNumbersArray.begin(), userNumbersArray.end());
    for(int i{0}; i<20; i++){
            cout << userNumbersArray[i] << " ";
        }
    }

