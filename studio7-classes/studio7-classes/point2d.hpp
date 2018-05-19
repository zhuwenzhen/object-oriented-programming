//
//  point2d.hpp
//  studio7-classes
//
//  Created by Wenzhen Zhu on 5/19/18.
//  Copyright © 2018 Wenzhen Zhu. All rights reserved.
//

#ifndef point2d_hpp
#define point2d_hpp

#include <stdio.h>
#include <string>

using namespace std;

// P2: struct declaration
//struct Point2D {
//    int x;
//    int y;
//    Point2D();
//};

// P3: class declaration
class Point2D {
public:
    Point2D(int x_, int y_);
    int x;
    int y;
};



#endif /* point2d_hpp */
