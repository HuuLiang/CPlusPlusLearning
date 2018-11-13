//
//  main.cpp
//  3.1_limits
//
//  Created by Liang on 2018/11/6.
//  Copyright © 2018 Liang. All rights reserved.
//

#include <iostream>
#include <climits>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    using namespace std;
    
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;
    
    cout << "int is " << sizeof(n_int) << " bytes." << endl;
    cout << "short is " << sizeof(n_short) << " bytes." << endl;
    cout << "long is " << sizeof(n_long) << " bytes." << endl;
    cout << "long long is " << sizeof(n_llong) << " bytes." << endl;
    cout << endl;
    
    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl;
    
    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Minimum long value = " << LONG_MIN << endl;

    cout << "Bite per byte = " << CHAR_BIT << endl;
    
    return 0;
}
