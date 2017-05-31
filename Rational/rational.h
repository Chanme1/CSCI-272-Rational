//
//  Rational
//
//  Created by Melissa Chan on 5/25/17.
//  Copyright © 2017 Melissa Chan. All rights reserved.
//

#include <iostream>

class Rational
{
  public:
    Rational(); //use for default values for numerator and denominator
    Rational (int num, int deno);
    Rational operator +(const Rational &); //Adding two Rational numbers
    Rational operator -(const Rational &); //Subtracting two Rational numbers
    Rational operator *(const Rational &); //Multiplying two Rational numbers
    Rational operator /(const Rational &); //Dividing two Rational numbers
    void print (); //print Rational numbers in form of a/b
    void printFloat();
    
    void setnumerator (int);
    void setdenominator (int);
    int getnumerator () const;
    int getdenominator () const;
    
  private:
    int numerator;
    int denominator;
    void reduction(); //Utility function to support the public functions by simplifying fractions
}; 
