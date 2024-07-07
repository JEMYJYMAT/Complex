/*
 * Complex_main.cpp
 *
 *  Created on: feb 20, 2024
 *      Author: Ahmed Gamal
 */

using namespace std;
#include <iostream>
#include "complex.h"

int main()
{ 
    complex c1;
    complex c2(3);
    complex c3(20, 10);
    complex c4(30, 20);
    c1 = c3 + c4;
    cout << c1;

}
