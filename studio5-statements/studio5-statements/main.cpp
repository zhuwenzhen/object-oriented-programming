//
//  main.cpp
//  studio6-statements
//
//  Created by Wenzhen Zhu on 5/18/18.
//  Copyright © 2018 Wenzhen Zhu. All rights reserved.
//

#include <iostream>
#include <stdexcept>

using namespace std;
void p3() {
    throw 3;
}

void p4() {
    throw 4;
}

void p5_char() {
    throw 'p';
}
void p5_long() {
    long num = 9223372036854775807;
    throw num;
}

void p5_string() {
    string s = "string input";
    throw s;
}

void p6_char() {
    throw 'p';
}
void p6_long() {
    throw 9223372036854775807;
}
void p6_string() {
    string s = "it's a string";
    throw s;
}
void p6_char_ptr() {
    char const *c = "not string";
    throw c;
}
void p6_int_ptr() {
    int i = 6;
    int *ptr = &i;
    throw ptr;
}
int main(int argc, const char * argv[]) {
    try {
        p6_char();
    }catch (char &c) {
        cout << c << endl;
    }catch (...) {
        cout << "default" << endl;
    }
    
    try {
        p6_long();
    } catch (long &l) {
        cout << "long = " << l << endl;
    } catch (...) {
        cout << "default" << endl;
    }
    
    try {
        p6_string();
    } catch (string &s) { //if I don't put reference, it will copy the whole string but c++ 18 doesn't matter
        cout << s << endl;
    } catch (...) {
        cout << "default" << endl;
    }
    
    try {
        p6_int_ptr();
    } catch (int* &i) {
        cout << i << endl;
    } catch (...) {
        cout << "default" << endl;
    }
    return 0;
}
