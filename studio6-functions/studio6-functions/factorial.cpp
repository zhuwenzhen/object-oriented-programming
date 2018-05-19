//
//  factorial.cpp
//  studio6-functions
//
//  Created by Wenzhen Zhu on 5/18/18.
//  Copyright © 2018 Wenzhen Zhu. All rights reserved.
//

#include "factorial.hpp"
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

