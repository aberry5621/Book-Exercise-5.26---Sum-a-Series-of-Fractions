//
//  sum_series.cpp
//  Book Exercise 5.26 - Sum a Series of Fractions
//
//  Created by ax on 9/21/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    cout << "Sum a Series of Fractions, 97/99 to 1/3" << endl;
    cout << "Reduce each numerator and denominator by 2" << endl;

    double sum = 0.0;
    double n = 97;
    double d = 99;
    
    for (n = 97; n > 0; n = n - 2) {
        sum = sum + n / d;
        d = d - 2;
    }
    
    cout << "Sum total: " << sum << endl;
    
    return 0;
}