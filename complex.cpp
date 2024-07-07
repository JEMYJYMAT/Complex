/*
 * Complex.cpp
 *
 *  Created on: feb 20, 2024
 *      Author: Ahmed Gamal
 */

#include "complex.h"

complex::complex()
{ 
	real = 0;
	img = 0;
}

complex::complex(float r)
{ 
	real = r;
	img = 0;
}

complex::complex(float r, float i)
{
	real = r;
	img = i;
}

void complex::get_img()
{
	float i;
	cout << "please enter the imaginary number " << endl;
	cin >> i;
	img = i;
}

void complex::get_num()
{
	
	cout << "please enter the real part " << endl;
	cin >> real;
	cout << "please enter the imaginary part " << endl;
	cin >> img;
}

complex complex::operator+(complex c)
{
	complex c2;
	c2.real = real + c.real;
	c2.img = img + c.img;

	return c2;
}

complex complex::operator-(complex c)
{
	complex c2;
	c2.real = real - c.real;
	c2.img = img - c.img;

	return c2;
}

complex complex::operator*(complex c)
{
	complex c2;
	c2.real = (real * c.real - img * c.img);
	c2.img = img * c.real + real * c.img;

}

ostream& operator<<(ostream& out, complex& c)
{
	out << c.real << "+i" << c.img << endl;
}
