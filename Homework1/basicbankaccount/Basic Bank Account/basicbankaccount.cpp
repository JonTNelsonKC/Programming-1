//
//  basicbankaccount.cpp
//  Basic Bank Account
//
//  Created by Jonathan Nelson on 1/28/21.
//

#include "basicbankaccount.hpp"

/* ###################################################
 Basic Bank Account
    Creates basic bank account object

 Name: Jonathan Nelson
 Date: 01/28/21
 Assignment: Basic Bank Account
###################################################### */

#include <iostream>
#include <string>
#include "Account.h"


using namespace std;

int main() {
    Account myAccount;
    
    cout << "Initial account name is:" << myAccount.getName();
    
    cout << "\nPlease enter the account name:";
    string theName;
    getLine(cin, theName);
    myAccount.setName(theName);
    
    cout << "Name in object myAccount is:"
    << myAccount.getName() << endl;
    
}
