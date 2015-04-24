//
//  Check for anagram
//
//  main.cpp
//  Example9
//
//  Created by Paul-Johan Seim on 4/2/14.
//  Copyright (c) 2014 Paul-Johan Seim. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    string str, str2;
    int count = 0;
    
    while(str != "q"){
        cout << "Type in a first name or 'q' to exit: ";
        cin >> str;
        cout << str << "\n";
        
        cout << "Type in a second name: ";
        cin >> str2;
        cout << str2 << "\n";
    
        cout << str.max_size() << "\n";
        cout << str.capacity() << "\n";

        for(char c : str2){
            size_t found = str.find(c);
            if (found!=string::npos){
                cout << "Yes, at: " << found << '\n';
                str.replace(str.find(c), 1,"-");
                cout << c << " has been replace by - \n";
                count++;
            }
            else
                cout << "Not found: " << c << "\n";
        }
        if(count == str.length())
                cout << "It is an anagram\n";
        else
            cout << "It is not an anagram\n";
        }
}

