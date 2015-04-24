//
//  main.cpp
//  Example5
//
//  Created by Paul-Johan Seim on 3/23/14.
//  Copyright (c) 2014 Paul-Johan Seim. All rights reserved.
//

#include <iostream>
using namespace std;

void herBare( int n )   //Think about the recursive tree, first one line, then next
{
    cout << n;
    if(n>1){
        herBare(n-1);
    }
    if(n>2){
        herBare(n-2);
    }
    
}

int fibonacci(int n)
{
    cout << n;
    if (n<2)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main(int argc, const char * argv[])
{
    //herBare(5);
    fibonacci(4);
    return 0;
}

