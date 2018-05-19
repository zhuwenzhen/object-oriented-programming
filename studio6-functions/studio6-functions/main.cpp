//
//  main.cpp
//  studio6-functions
//
//  Created by Wenzhen Zhu on 5/18/18.
//  Copyright © 2018 Wenzhen Zhu. All rights reserved.
//

#include <iostream>
#include "factorial.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    int trials[5] = {4, 5, 6, 7, 8};
    for (int i = 0; i < 5; i++) {
        cout << "n = " << i << endl;
        int * res1 = 0;
        factorial_pointer(trials[i], res1);
        cout << "pointer result = " << res1 << endl;
        unsigned int res2;
        factorial_ref(trials[i], res2);
        cout << "reference result = " << res2 << endl;
    }
    return 0;
}

