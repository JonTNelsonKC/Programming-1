/*
 Name: Jonathan Nelson
 Date: 03/25/2021
 Assignment: Lab 11
 Description: A program that prompts the user for 20 number between 0 and 101.
 */
#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>
#include <algorithm>

using namespace std;

int main(){
    
    bool found;
    
    vector<int> userNumbersVector{};
    
    for(int i{0}; i<20; i++){
        
        int userNumber{0};
        
        cout << "Enter in 20 unique numbers between 0 and 101\n";
        cin >> userNumber;

    if((userNumber > 0) && (userNumber < 101)){
        sort(userNumbersVector.begin(), userNumbersVector.end());
        bool found{binary_search(userNumbersVector.begin(), userNumbersVector.end(), u4serNumber)};
        if(found == false){
            userNumbersVector.push_back(userNumber);
            sort(userNumbersVector.begin(), userNumbersVector.end());
            }
        }
    }
    for(int i{0}; i<userNumbersVector.size(); i++){
            cout << userNumbersVector[i] << " ";
        }
    }

/* I can definitely see how both the array and vector classes both have valuable uses.  The ability to search and validate a value within the vector class was incredibly helpful for this project and woefully missing when we tried to use arrays.  Other than the search function helping to validate entries, the ability to change the size of the vector throughout the program made the work flow much more simple.*/
