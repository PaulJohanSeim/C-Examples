//
//  main.cpp
//  Example6
//
//  Created by Paul-Johan Seim on 3/26/14.
//  Copyright (c) 2014 Paul-Johan Seim. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;


void duplicate (int& a, int& b, int& c)     //Arguments can be passed by reference, instead of by value <- use of ampersand
{
    a*=2;
    b*=2;
    c*=2;
}


void duplicate2 (int a, int b, int c)       //New arguments are being created
{
    a*=2;
    b*=2;
    c*=2;
}


int main(int argc, const char * argv[])
{
    int x=1, y=3, z=7;
    duplicate (x, y, z);
    cout << "x=" << x << ", y=" << y << ", z=" << z << "\n";
   
    x=1, y=3, z=7;
    duplicate2 (x, y, z);
    cout << "x=" << x << ", y=" << y << ", z=" << z << "\n";
    return 0;
    
    char myword[] = { 'H', 'e', 'l', 'l', 'o', '\0' };      //Both are valid
    char myword2[] = "Hello";                               //Both are valid
    
    char question1[] = "What is your name? ";               //Both are valid
    string question2 = "Where do you live? ";               //Both are valid but this one <- is more common
    char answer1 [80];
    string answer2;
    cout << question1;
    cin >> answer1;
    cout << question2;
    cin >> answer2;
    cout << "Hello, " << answer1;
    cout << " from " << answer2 << "!\n";
    return 0;
    
}
