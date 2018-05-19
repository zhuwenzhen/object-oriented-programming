#  CSE 332 Studio Session on C++ Classes
Wenzhen Zhu
## Part I: Required Exercises
### 2
In the header file, declare a struct with two integer member variables. Do not add private, public, or protected specifications or any constructors, methods, or operators, or initialize the member variables – the idea here is to understand the basic behaviors of a struct or class and then work through understanding additional features (hint: don’t forget the semicolon after the closing brace, which C++ expects). In your main program, declare an object of that type, adding header file includes etc. as needed. Print out the object’s member variables to cout, and try to build and run your program. Then declare and define a default constructor that initializes the member variables to 0 using the base class / member initialization list (not the constructor body). Try to build and run your program, and as the answer to this exercise, please describe say what happened before and after you added the constructor, and if either of them worked what values were printed out and where they came from.

> Without decalring and defining a default constructor that initializes the member variables. It doesn't work. Error is `Undefined symbols for architecture x86_64:
  "Point2D::Point2D()", referenced from:
      _main in main.o`
> After decaring and define default constructor. It works. Output is: `0 0`
```c++
// In point2d.hpp:
struct Point2D {
public:
    Point2D();
    int x;
    int y;
};
// In point2d.cpp:
// declare and define a default constructor that initializes the member variables to 0
Point2D::Point2D(): x(0), y(0) {}
// In main.cpp:
Point2D p = Point2D();
cout << p.x << " " << p.y << endl; //Print out the object’s member variables
```


> 

```c++
// In point2d.hpp:
class Point2D {
public:
    Point2D(int x_, int y_);
    int x;
    int y;
};
// In point2d.cpp:
Point2D::Point2D (int x_, int y_): x(x_), y(y_) {}
// In main.cpp:
Point2D p = Point2D(2,3);
cout << p.x << " " << p.y << endl;
```