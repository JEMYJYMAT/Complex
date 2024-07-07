/*
 * Complex.h
 *
 *  Created on: feb 20, 2024
 *      Author: Ahmed Gamal
 */


#ifndef complex_header
#define complex_headr

using namespace std;
#include <iostream>

class complex
{
private:
	float real;
	float img;
public:
	complex();
	complex(float r);
	complex(float r,float i);
	void get_img();
	void get_num();
	complex operator +(complex c);
	complex operator -(complex c);
	complex operator *(complex c);
	friend ostream& operator <<(ostream& out, complex& c);



};

#endif // !complex_header
