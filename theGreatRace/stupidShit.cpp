//
//  stupidShit.cpp
//  
//
//  Created by Jonathan Nelson on 4/15/21.
//

#include <iostream>

using namespace std;

int main(){
    /*unsigned int values[5]{2,4,6,8,10};
    
    unsigned int* vPtr{values};
    
    for(int i{0}; i<5; i++){
        cout << vPtr[i];
    }*/
    short* numPtr, result;
    void* genericPtr{numPtr};
    result = *(genericPtr + 7);
}
