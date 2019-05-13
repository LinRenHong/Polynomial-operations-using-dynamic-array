//
//  main.cpp
//  PolyTest
//
//  Created by 林仁鴻 on 2017/10/29.
//  Copyright © 2017年 林仁鴻. All rights reserved.
//

#include <iostream>
#include "Polynomial.h"
using namespace std;

int main( int argc, const char * argv[] ) {
    
    string first, second;
    int value;

    cout << "Please enter first polynomial ( ex : x^2 + 2x + 1 ) : " << endl;
    getline( cin, first );

    cout << "Please enter second polynomial ( ex : x^2 + 2x + 1 ) : " << endl;
    getline( cin, second );

    Polynomial p( first );
    Polynomial p2( second );
//        Polynomial p( "2x^3 + 2x + 1" );
//        Polynomial p2( "-8x^7 + 5x^6 + 5x^4 + x^2 - 4x + 7" );
//        (p - p2).printPolynomial();
    
    
    cout << "\nFirst polynomial + second polynomial = " << endl;
    ( p + p2 ).printPolynomial();

    cout << "First polynomial - second polynomial = " << endl;
    ( p - p2 ).printPolynomial();

    cout << "First polynomial * second polynomial = " << endl;
    ( p * p2 ).printPolynomial();
    
    cout << "-------------------------------------" << endl;

    cout << "\nPlease enter a value : ";
    cin >> value;

    cout << "\nFirst polynomial solution : " << p.solution( value ) << endl;
    cout << "\nSecond polynomial solution : " << p2.solution( value ) << endl << endl;
    
}

