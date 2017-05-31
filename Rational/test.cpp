//
//  Rational
//
//  Created by Melissa Chan on 5/25/17.
//  Copyright © 2017 Melissa Chan. All rights reserved.
//

#include <iostream> 
#include "rational.h"
using namespace std;

void sum (Rational, Rational, Rational);
void difference (Rational, Rational, Rational);
void multiplication (Rational, Rational, Rational);
void division (Rational, Rational, Rational);

int main ()
{
    Rational result;
    
    int numerator, denominator;
    cout << "Enter the first fraction's numerator: ";
    cin >> numerator;
    cout << "Enter the first fraction's denominator: ";
    cin >> denominator;
    Rational f1 (numerator, denominator);
    
    cout << "Enter the second fraction's numerator: ";
    cin >> numerator;
    cout << "Enter the second fraction's denominator: ";
    cin >> denominator;
    Rational f2 (numerator, denominator);
    
    cout << "Your first fraction is ";
     
    f1.print ();
    cout << endl;
    
    cout << "Your second fraction is ";
    
    f2.print();
    cout << endl;
    
    cout << "Here are the following in Rational and Floating point form:" << endl << endl;
    
    sum (f1, f2, result);
    difference (f1, f2, result);
    multiplication (f1, f2, result);
    division (f1, f2, result);
}

void sum (Rational f1, Rational f2, Rational result)
{
    cout << "Sum of ";
    f1.print();
    cout << " + ";
    f2.print();
    cout << " = ";
    result = f1 + f2;
    cout << " = ";
    result.printFloat();
    cout << endl;
}

void difference (Rational f1, Rational f2, Rational result)
{
    cout << "Difference of ";
    f1.print();
    cout << " - ";
    f2.print();
    cout << " = ";
    result = f1 - f2;
    cout << " = ";
    result.printFloat();
    cout << endl;
}

void multiplication (Rational f1, Rational f2, Rational result)
{
    cout << "Product of ";
    f1.print();
    cout << " x ";
    f2.print();
    cout << " = ";
    result = f1 * f2;
    cout << " = ";
    result.printFloat();
    cout << endl;
}

void division (Rational f1, Rational f2, Rational result)
{
    cout << "Division of ";
    f1.print();
    cout << " / ";
    f2.print();
    cout << " = ";
    result = f1/f2;
    cout << " = ";
    result.printFloat();
    cout << endl;
}
