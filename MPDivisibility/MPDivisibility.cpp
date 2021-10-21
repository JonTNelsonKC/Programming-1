//
//  MPDivisibility.cpp
//  MPDivisibility
//
//  Created by Jonathan Nelson on 4/6/21.
//

#include <iostream>

using namespace std;

int main(){

    long int j{0};
    
    for (long int i{9999999999}; i != 0; i--) {
        if (i % 1 == 0) {
            if ((i-((i/1000000000)*1000000000)) % 2 == 0) {
                if ((i-((i/100000000)*100000000)) % 3 == 0) {
                    if ((i-((i/10000000)*10000000)) % 4 == 0) {
                        if ((i-((i/1000000)*1000000)) % 5 == 0) {
                            if ((i-((i/100000)*100000)) % 6 == 0) {
                                if ((i-((i/10000)*10000)) % 7 == 0) {
                                    if ((i-((i/1000)*1000)) % 8 == 0) {
                                        if ((i-((i/100)*100)) % 9 == 0) {
                                            if ((i-((i/10)*10)) % 10 == 0) {
                                            if(i >= 1000000000){
                                                cout << i << endl;
                                                j = j+1;
                                            }
                                            }}}}}}}}}}}
    cout << endl << endl << endl << "Total counted: " << j << endl << endl << endl;
}
