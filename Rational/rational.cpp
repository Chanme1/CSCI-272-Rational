//
//  Rational
//
//  Created by Melissa Chan on 5/25/17.
//  Copyright © 2017 Melissa Chan. All rights reserved.
//

#include <iostream> 
#include <iomanip>
#include "rational.h"
using namespace std;

Rational::Rational() //Default Values in case no initializers are provided
{
    numerator = 0;
    denominator = 1;
}

Rational::Rational(int num, int deno):numerator(num), denominator(deno)
{
    if (deno == 0)
        cout << "Error, Denominator can't be 0" << endl;
    if (num == 0)
        
    reduction();
}

void Rational::setnumerator (int num)
{
    numerator = num;
}

void Rational::setdenominator (int deno)
{
    denominator = deno;
}

int Rational::getnumerator() const
{
    return numerator;
}

int Rational::getdenominator() const
{
    return denominator;
}

Rational Rational::operator+(const Rational &j) //addition
{
    numerator = j.numerator * denominator + j.denominator * numerator;
    denominator = j.denominator * denominator;
    reduction();
    print();
    return Rational(numerator, denominator);
}

Rational Rational::operator-(const Rational &b) //subtraction
{
    numerator = (b.denominator * numerator) - (denominator * b.numerator);
    denominator = b.denominator * denominator;
    reduction();
    print();
    return Rational(numerator, denominator);
}

Rational Rational::operator*(const Rational &a) //multiplication 
{
    numerator = a.numerator * numerator;
    denominator = a.denominator * denominator;
    reduction();
    print();
    return Rational(numerator, denominator);
}

Rational Rational::operator/(const Rational &c) //division
{
    numerator = c.denominator * numerator;
    denominator = c.numerator * denominator;
    reduction();
    print();
    return Rational(numerator, denominator);
}

void Rational::print() //prints the fractions
{
    cout << numerator << "/" << denominator;
}

void Rational::printFloat() //prints the fraction as a floating point number
{
    cout << static_cast <float> (numerator)/denominator << endl;
}

void Rational::reduction() //simplifies the fraction. 
{
    int gcd = 0; //greatest common denominator
    int min = (numerator > denominator) ? numerator:denominator;
    
    for (int i = 2; i <= min; i++) //program runs through for loop to find the greatest divsor that goes into both
    {
        if (numerator % i == 0 && denominator % i == 0)
            gcd = i;
    }
    
    if (gcd != 0) //if gcd is not 0 then it will divide the numerator and the denominator by GCD to find the new value.
    {
        numerator = numerator / gcd;
        denominator = denominator / gcd;
    }
}
