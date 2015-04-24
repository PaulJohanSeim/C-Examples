//
//  main.cpp
//  Example4
//
//  Created by Paul-Johan Seim on 3/23/14.
//  Copyright (c) 2014 Paul-Johan Seim. All rights reserved.
//

#include <iostream> //cout and cin enabling
using namespace std;

int numberS()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int sum = num1 + num2;
    cout << "The sum of " << num1 << " and " << num2
    << " is " << sum << endl;
    return 0;
}

int main(int argc, const char * argv[])
{
    
    numberS();
    
    
    
    // Defining a structure
    struct PersonalData
    {
        char *FirstName;
        char *LastName;
        char *Birthday;  // in the format of 12/30/1978
        int  PhoneNum;
    }; // don't forget the ending ";"
    
    // Declaring a variable of type PersonalData
    PersonalData PersonOne;
    
    // Populate PersonOne with data
    PersonOne.FirstName = "John";
    PersonOne.LastName = "Doe";
    PersonOne.Birthday = "12/30/1978";
    PersonOne.PhoneNum = 5855555;
    
    // Print the data out
    cout << "PersonOne's First name is: " << PersonOne.FirstName << endl;
    cout << "PersonOne's Last name is: " << PersonOne.LastName<< endl;
    cout << "PersonOne's Birthday is: " << PersonOne.Birthday<< endl;
    cout << "PersonOne's Phone number is: " << PersonOne.PhoneNum<< endl;
    
    return 0;
}