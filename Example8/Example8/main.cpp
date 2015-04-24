//
//  main.cpp
//  Example8
//
//  Created by Paul-Johan Seim on 3/27/14.
//  Copyright (c) 2014 Paul-Johan Seim. All rights reserved.
//

#include <iostream>
using namespace std;

class Polygon {
protected:
    int width, height;
public:
    void set_values (int a, int b)
    { width=a; height=b;}
};

class Rectangle: public Polygon {
public:
    int area ()
    { return width * height; }
};

class Triangle: public Polygon {
public:
    int area ()
    { return width * height / 2; }
};


int main(int argc, const char * argv[])
{
    int firstvalue = 5, secondvalue = 15;
    int * p1, * p2;
    
    p1 = &firstvalue;  // p1 = address of firstvalue
    p2 = &secondvalue; // p2 = address of secondvalue
    cout << "firstvalue is " << firstvalue << '\n';
    cout << "secondvalue is " << secondvalue << '\n';
    *p1 = 10;          // value pointed to by p1 = 10
    cout << "firstvalue is " << firstvalue << '\n';
    cout << "secondvalue is " << secondvalue << '\n';
    *p2 = *p1;         // value pointed to by p2 = value pointed by p1
    cout << "firstvalue is " << firstvalue << '\n';
    cout << "secondvalue is " << secondvalue << '\n';
    p1 = p2;           // p1 = p2 (value of pointer is copied)
    cout << "firstvalue is " << firstvalue << '\n';
    cout << "secondvalue is " << secondvalue << '\n';
    *p1 = 20;          // value pointed by p1 = 20
    
    cout << "firstvalue is " << firstvalue << '\n';
    cout << "secondvalue is " << secondvalue << '\n';

    Rectangle rect;                                     //Derived classes
    Triangle trgl;
    rect.set_values (4,5);
    trgl.set_values (4,5);
    cout << rect.area() << '\n';
    cout << trgl.area() << '\n';
    
    
    
    return 0;


    
}


