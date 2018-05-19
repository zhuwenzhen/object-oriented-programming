//
//  main.cpp
//  studio4
//
//  Created by Wenzhen Zhu on 3/27/18.
//  Copyright © 2018 Wenzhen Zhu. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <sstream>      // string stream
#include <fstream>      // file stream

using namespace std;
void p2() {
    // declare a (3-dimensional) 2 by 3 by 5 array of unsigned integers
    // and initialize all of its elements to zero when you declare it.
    int d1 = 2, d2 = 3, d3 = 5;
    unsigned int array[d1][d2][d3];
    // iterate through the cells in the array, and set the value of each cell to be the product of its coordinates
    // (the cell at 0, 0, 0 would have value 0, the cell at 1, 2, 4 would have value 8, etc.)
    for (int i = 0; i < d1; i++) {
        for (int j = 0; j < d2; j++) {
            for (int k = 0; k < d3; k++) {
                array[i][j][k] = i * j * k;
                cout << array[i][j][k] << " ";
            }
            cout << "   ";
        }
        cout << endl;
    }
}

void p3(int argc, const char * argv[]) {
    // Use argc and argv to iterate through all of the program’s command line arguments
    // from position 0 to position argc-1
    // and push_back each command line argument into a vector of C++-style strings (of type vector<string>).
    vector<string> v;
    string word;
    for (int i = 0; i < argc; i++) {
        word = string(argv[i]);
        v.push_back(word);
    }
    // After that, your program should iterate through the vector
    // (hint: you can use iterators or use indexing from position 0 to one less than the value given by the size method)
    // and print out the string at each position in the vector.
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}

void p4(int argc, const char * argv[]) {
    // instead of pushing the command line arguments into a vector,
    // it concatenates them into a single C++-style string with spaces in between them.
    vector<string> v2;
    string word2;
    for (int i = 0; i < argc; i++) {
        word2 += argv[i];
        cout << argv[i] << endl;
    }
    // Wrap the completed string in an input string stream (of type istringstream)
    istringstream str_stream (word2);
    // then use its extraction operator (the >> operator) to pull off one argument at a time from the string stream into a C++-style string
    string str;
    while (str_stream >> str){
        cout << str << endl;
    }
}

void p5(int argc, const char * argv[]) {
    // program accepts exactly two command line arguments (in addition the program name which always appears in argv[0]).
    if (argc == 3) {
        // If exactly two additional command line arguments are given,
        // the program should print out each of the additional command line arguments
        // (directly to cout instead of using a string or vector as intermediate storage)
        // and then return 0 to indicate success.
        for (int i = 0; i < argc; i++) {
            cout << "the " << i << "th argument is " << argv[i] << endl;
        }
    } else {
        cout << "error msg: Please only give 2 command line arguments" << endl;
    }
}

// if exactly two additional command line arguments were given,
// instead of printing them out it uses them as the names of input and output files from which to read and write respectively.
void p6 (int argc, const char * argv[]) {
    ifstream file_in;
    ofstream file_out;
    // The program should open the first file in an ifstream and test whether or not it was opened successfully
    file_in.open(argv[1]);
    // file_out.open(argv[2]);
    // cout << argv[0] << argv[1] << endl;
    if (file_in.is_open()) {
        cout << "input file is open." << endl;
        string line, word;
        while (getline(file_in, line)) {    // get a line from file into string
            istringstream iss (line);       // wrap string in a stream
            iss >> word;                    // push formatted values into stream
            cout << word << endl;           // output formatted string
        }
    } else {
        cout << "input file is NOT open." << endl;
    }
}

int main(int argc, const char * argv[]) {
    p4(argc, argv);
    p6(argc, argv);
    return 0;
}
