//
//  main.cpp
//  Example7
//
//  Created by Paul-Johan Seim on 3/26/14.
//  Copyright (c) 2014 Paul-Johan Seim. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int factorial(int);

int main(int argc, const char * argv[])
{
    string mystr;
    cout << "What's your name? ";
    getline (cin, mystr);
    cout << "Hello " << mystr << ".\n";
    cout << "What is your favorite team? ";
    getline (cin, mystr);
    cout << "I like " << mystr << " too!\n";

    
    string mystr2;
    float price=0;
    int quantity=0;
    
    cout << "Enter price: ";
    getline (cin,mystr2);
    stringstream(mystr2) >> price;
    cout << "Enter quantity: ";
    getline (cin,mystr2);
    stringstream(mystr2) >> quantity;
    cout << "Total price: " << price*quantity << endl;
    
    char mAS;
    mAS = cin.get();                 //Take each char in order from string that has been written in
   
    string str {"Hello2012!"};          //for char in a string <- use this function
    for (char c : str)
    {
        cout << "[" << c << "]";
    }
    cout << '\n';
                                    //Indexing <- use this function
    int i;
    for(i = 0; i<str.length(); i++)
    {
        cout << str[i];
    
    }

    cout << "\n\n";
    
    int z, q;
    cout << "Type in a factorial: ";
    cin >> z;
    q = factorial(z);
    cout << "Factorial of " << z << " is: " << q << "\n\n";
    
    
    
    return 0;
}

int factorial(int n){

    if(n < 2)
        return n;
    else
        return n * factorial(n-1);
}