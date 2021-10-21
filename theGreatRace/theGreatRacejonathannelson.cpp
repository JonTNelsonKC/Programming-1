/*COMP 2204 Program 2
 
 Name: Jonathan Nelson
 Assignment: Program 2
 Date: 04/26/2021

 */

#include <iostream> 
#include <random> // contains C++11 random number generation features
#include <ctime>
#include <iomanip> 
using namespace std;

const int RACE_END = 70;

// prototypes
void moveTortoise(int* const);
void moveHare(int* const);
void printCurrentPositions(const int* const, const int* const);

default_random_engine engine{static_cast<unsigned int>(time(0))};
uniform_int_distribution<int> randomInt{1, 10};



int main() {
   int tortoise{1};
   int hare{1};
   int timer{0};
    
   cout << "ON YOUR MARK, GET SET\nBANG               !!!!"
      << "\nAND THEY'RE OFF    !!!!\n";
   
   // loop through the events
   while (tortoise != RACE_END && hare != RACE_END) {
      moveTortoise(&tortoise);
      moveHare(&hare);
      printCurrentPositions(&tortoise, &hare);
      ++timer;
   } 

   if (tortoise >= hare) {
      cout << "\nTORTOISE WINS!!! YAY!!!\n";
   }
   else {
      cout << "Hare wins. Yuch.\n";
   }

   cout << "TIME ELAPSED = " << timer << " seconds" << endl;
}  

// progress for the tortoise
void moveTortoise(int* const tortoisePtr) {
    
    int randNum = randomInt(engine);
    
    if (randNum >= 1 && randNum <= 5) {
        *tortoisePtr = *tortoisePtr + 3;
    }
    if (randNum >= 6 && randNum <= 7) {
        if (*tortoisePtr >= 7) {
            *tortoisePtr = *tortoisePtr - 6;
        }
        else{
            *tortoisePtr = 1;
        }
    }
    
    if (randNum >= 8 && randNum <= 10) {
        *tortoisePtr = *tortoisePtr + 1;
    }
    if (*tortoisePtr >= RACE_END) {
        *tortoisePtr = RACE_END;
    }
}

// progress for the hare
void moveHare(int* const harePtr) {
    
    int randNum = randomInt(engine);
    
    if (randNum == 1 || randNum == 2) {
        *harePtr = *harePtr;
    }
    if (randNum == 3 || randNum == 4) {
        *harePtr = *harePtr + 9;
    }
    if (randNum == 5) {
        if (*harePtr >= 13) {
            *harePtr = *harePtr -12;
        }
        else{
            *harePtr = 1;
        }
    }
    if (randNum >= 6 && randNum <= 8) {
        *harePtr = *harePtr + 1;
    }
    if (randNum >= 9 && randNum <= 10) {
        if (*harePtr >= 3) {
            *harePtr = *harePtr - 2;
        }
        else{
            *harePtr = 1;
        }
    }
    if (*harePtr >= RACE_END) {
        *harePtr = RACE_END;
    }
}

// display new position
void printCurrentPositions(const int*  const tortoisePtr, const int* const harePtr) {
    if (*tortoisePtr < *harePtr) {
        
        int hareSpaces = *harePtr;
        
        for (int i{1}; i <= *tortoisePtr; i++) {
            cout << " ";
        }
        cout << "T";
        
        for (int j{1}; j <= (hareSpaces - *tortoisePtr); j++) {
            cout << " ";
        }
        cout << "H" << endl;
    }
    else{
        
        int tortoiseSpaces = *tortoisePtr;
        
        for (int i{1}; i <= *harePtr; i++) {
            cout << " ";
        }
        cout << "H";
        
        for (int j{1}; j <= (tortoiseSpaces - *harePtr); j++) {
            cout << " ";
        }
        cout << "T" << endl;
    }
}
