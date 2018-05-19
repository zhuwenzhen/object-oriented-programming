//
//  factorial.cpp
//  studio6-functions
//
//  Created by Wenzhen Zhu on 5/18/18.
//  Copyright © 2018 Wenzhen Zhu. All rights reserved.
//
#include <iostream>
#include "factorial.hpp"

using namespace std;
// P3
int factorial_loop(unsigned int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

int factorial_recursion(unsigned int n) {
    if (n == 1) return 1;
    else return n * factorial_recursion(n - 1);
}

// P4
void factorial_ref(unsigned int n, unsigned int &res) {
    unsigned ans = 1;
    for (int i = 1; i <= n; i++) {
        ans *= i;
    }
    res = ans;
}

// P5
void factorial_pointer( unsigned int n,  unsigned int *res) {
    unsigned int ans = 1;
    for (unsigned int i = 1; i <= n; i++) {
        ans *= i;
        *res = ans;
    }
    cout << ans << endl;
    
}
