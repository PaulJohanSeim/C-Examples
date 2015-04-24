//
//  main.cpp
//  Example10
//
//  Created by Paul-Johan Seim on 4/3/14.
//  Copyright (c) 2014 Paul-Johan Seim. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[])
{
    char c;
    string str;
    cout << "Please type some lines of text. Enter a dot (.) to finish:\n";
    do {
        c = cin.get();                 //Take each char in order from string that has been written in
        str += c;
        if (c=='\n')
        {
            cout << str;
            str.clear();
        }
    } while (c!='.');
    return 0;
}

